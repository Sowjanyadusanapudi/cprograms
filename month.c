#include <stdio.h>
void main() 
{
int a;
printf("enter value of a");
scanf("%d",&a);
switch(a)
{
    case 1:printf("january");
    break;
    case 2:printf("febraury");
    break;
    case 3:printf("march");
    break;
    case 4:printf("april");
    break;
    case 5:printf("may");
    break;
    case 6:printf("june");
    break;
    case 7:printf("july");
    break;
    case 8:printf("august");
    break;
    case 9:printf("septmber");
    break;
    case 10:printf("october");
    break;
    case 11:printf("november");
    break;
    case 12:printf("december");
    break;
    default:printf("invalid month");
    break;
}
}
