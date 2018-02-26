#include<stdio.h>
int main()
{
  int a[10],sum;
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  sum=a[0];
  for(i=0;i<10;i++)
  {
    if(a[0]>a[i])
    {
      sum=a[i];
    }
    printf("the largest number is %d",sum);
  }
  return 0;
}
