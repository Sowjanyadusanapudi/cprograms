#include <stdio.h>
void main() 
{
    int n,rem,temp,sum=0;
    printf("Enter a the value 0f n: ");
    scanf("%d", &n);
    temp=n;
    while (n>0) 
    {
        rem = n % 10;
      sum=sum+(rem*rem*rem);
       n=n/10;
    }
    if(temp==sum)
        printf("%d is an armstrong", sum);
        else
        printf("%d is not an armstrong",sum);
}
