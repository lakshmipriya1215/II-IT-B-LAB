#include <stdio.h>
int IterativeLinear_search(int a[] , int n , int key )
{
    int i ;
    for (i =0 ;i < n ; i++)
        if (a[i] == key)
            return i ;
    return -1;
}    
int main(void)
{
    int a[] = { 10,6,8,15,20,3,14,99,66,30 };
    int n = 9;
    int key ;
    printf("enter the key value\n");
    scanf("%d",&key);
    int index = IterativeLinear_search(a , n , key);
    if (index != -1)
        printf("digit %d is present at index %d", key,index);
    else
        printf("digit %d is not present",key);

    return 0;
}