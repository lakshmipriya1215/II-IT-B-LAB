#include<stdio.h>
void selection_sort(int a[] , int n)
{
    int i , j , min ,temp;
    for(i = 0 ; i < n - 1 ; i++)
    {
        min = i ;
        for(j = i + 1 ;  j < n ; j++)
        {
            if (a[min] > a[j])
            {
                min = j ;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp ;
        }
    }
    printf("sorted array is:\n");
    for( i = 0 ; i < n ; i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int array[20] , size , i ;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the numbers of array\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    selection_sort(array , size);
    return 0;
}