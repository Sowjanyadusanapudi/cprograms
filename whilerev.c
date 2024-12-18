#include <stdio.h>
void main() 
{
    int n,rem,rev=0;
    printf("Enter a the value 0f n: ");
    scanf("%d", &n);
    while (n>0) 
    {
        rem = n % 10;
      rev=rev*10+rem;
       n=n/10;
    }
        printf(" The rev is: %d", rev);
}
