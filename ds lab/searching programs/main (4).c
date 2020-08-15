#include <stdio.h>
int RecursiveBinary_search(int a[] , int low , int high , int key)
{
    if(low > high)
    {
        return -1;
    }
    int mid = ( low + high) / 2;
    if ( a[mid] == key)
    {
        return mid;
    }
    else if(key < a[mid])
    {
        RecursiveBinary_search(a , low , mid-1 , key);
    }
    else 
        RecursiveBinary_search(a , mid+1 ,high, key);
}
int main()
{
    int a[] = { 3,6,8,10,14,15,20,30,66,99 };
    int digit;
    printf("enter the digit\n");
    scanf("%d",&digit);
    printf("digit is at %d \n",RecursiveBinary_search(a , 0 , 9 ,digit));
    return 0;
}
