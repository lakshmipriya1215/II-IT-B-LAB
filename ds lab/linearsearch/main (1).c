
#include <stdio.h>
int main()
{
 int a[10] = { 10,6,8,15,20,3,14,99,66,30};
 int key = 66;
 int i = 0;
 for ( i = 0 ; i < 10 ; i++ )
 {
     if (key == a[i])
     {
         printf("%d is element position\n", i);
         break;
     }
 }
     if (i == 10 )
     {
         printf("element is not present\n");
     }
}
