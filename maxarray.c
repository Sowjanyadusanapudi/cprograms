#include<stdio.h>
void main() 
{
  int a[10],n,i,max;
  printf("enter size:");
  scanf("%d",&n);
  printf("enter the elements:");
  for(i=0;i<n;++i)
  {
      scanf("%d",&a[0]);
  }
  max=a[0];
  for(i=1;i<n;++i)
  {
     if(a[i]>max)
  max==a[i];
  }
  printf("the max element is:%d",max);
}
