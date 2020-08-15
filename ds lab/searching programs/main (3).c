#include <stdio.h>
int main()
{
    int a[10] = {3,6,8,10,14,15,20,30,66,99};
    int i = 0 , mid , n = 9 , key =6 ;
    while (i <= n)
    {
        mid = (i+n)/2;
        if (key < a[mid])
        {
            n = mid -1;
        }
        else if (key > a[mid])
        {
            i = mid +1;
        }
        else if(key == a[mid])
        {
            printf("%d is element position",mid);
            break;
        }}
        if (i > n)
        {
            printf("element is not present");
        }
    return 0;
}
