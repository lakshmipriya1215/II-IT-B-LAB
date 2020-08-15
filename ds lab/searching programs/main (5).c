#include <stdio.h>
int RecursiveLinear_search(int a[] , int key , int index , int n);
{
    int i = 0;
    if (index >= n)
    {
        return 0;
    }
    else if (a[index] == key)
    {
        i = index + 1;
        return i;
    }
        return RecursiveLinear_search(a , key , index+1 , n);
}
int main()
{
    int i;
    int n=9;
    int a[] = { 10,6,8,15,20,3,14,99,66,30 };
    int key = 66;
    i = RecursiveLinear_search(a , key , 0 , n);
    if(i != 0)
    {
        printf("digit %d is present at %d",key,i);
    }
    else
    {
        printf("digit %d is not present",key); 
    }
    return 0;
}