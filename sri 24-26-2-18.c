#include<stdio.h>
int main()
{
int a[10],i,q,b,j;
printf("enter the range\n");
scanf("%d",&q);
printf("enter the array values\n");
for(i=0;i<q;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<q;i++)
{
for(j=0;j<q-i-1;j++)
{
if(a[i]<a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}
}
}
for(i=0;i<q;i++)
{
printf("%d",a[i]);
}
return 0;
}
