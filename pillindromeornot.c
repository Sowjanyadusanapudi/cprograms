#include <stdio.h>
void main() 
{
    int n,rem,temp,rev=0;
    printf("Enter a the value 0f n: ");
    scanf("%d", &n);
    temp=n;
    while (n>0) 
    {
        rem = n % 10;
      rev=rev*10+rem;
       n=n/10;
    }
    if(temp==rev)
        printf("%d is a pillindrome.", rev);
        else
        printf("%d is not a pillindrome",rev);
}
