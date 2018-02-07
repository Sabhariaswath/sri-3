#include <stdio.h>

int main()
{

int a,i,c,sum=0,arr[100];
scanf("\n%d",&a);
scanf("\n%d",&c);
for(i=0;i<a;i++)
{    
scanf("%d",&arr[i]);
}
for(i=0;i<c;i++)
{
sum+=arr[i];
}
	
printf("%d",sum);
return 0;
	
}
