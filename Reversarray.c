#include<stdio.h>
void main()
{
int i,n,a[10];
    printf("Enter the size:");
scanf("%d",&n);
   printf("Enter the elements:");
   for(i=0;i<n;++i)
   {
       scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;--i)
   {
       printf("%d",a[i]);
   }
}
