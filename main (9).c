#include <stdio.h>
int iterative_binarysearch(int a[] , int low , int high , int key)
{
    int mid;
    while (low <= high )
    {
        mid = ( low + high )/ 2 ;
        if (key < a[mid])
        {
            high = mid - 1 ;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else if (key == a[mid])
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int a[10] = {  3,6,8,10,14,15,20,30,66,99 };
    int low = 0 , mid , high = 9 , key;
    printf("enter the value of key\n");
    scanf("%d",&key);
    int index = iterative_binarysearch(a , low , high , key);
    if (index != -1)
    {
        printf("%d is present at index %d\n",key,index);
    }
    else 
    {
        printf("%d is not present ",key);
    }
    return 0;
}
