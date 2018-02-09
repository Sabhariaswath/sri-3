#include<stdio.h>
int main()
{
int i,pow,n,s=1;

scanf("%d",&n);
scanf("%d",&pow);
for(i=1;i<=pow;i++)
{
s=s*n;
}
printf("%d",s);
return 0;
}
