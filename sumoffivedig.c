#include <stdio.h>

void main()
{
    int n,sum=0;
   printf("enter a five digit number n:");  
   scanf("%d",&n);
   if(10000<=n<=99999)
while(n != 0)
{
        sum += n % 10;
        n=n/10;
    }
printf("the spum of the digits is:%d",sum);
    
}
