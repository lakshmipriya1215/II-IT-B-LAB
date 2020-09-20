#include<stdio.h>
void insertion_sort(int array[] , int n);
int main()
{
    int a[100]  , i , n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the values of array\n");
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a , n);
    return 0 ;
}
void insertion_sort(int array[] , int n)
{
    int i , j , temp ;
    for(i = 1 ; i < n ; i++)
    {
        temp = array[i];
        for(j = i ; (j > 0 && temp < array[j-1]); j-- )
        {
            array[j] = array[j - 1];
        }
        array[j] = temp ;
    }
    printf("sorted array is:\n");
    for(i = 0 ; i < n ; i++)
    {
        printf("%d\t",array[i]);
    }
}