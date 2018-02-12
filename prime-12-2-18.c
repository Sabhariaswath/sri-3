#include <stdio.h>

int main()
{
	int a,i,b=0;
printf("Enter the nubmber\n");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if (a%i==0)
b++;
}
if (b==0)
{
printf("\n IT IS A PRIME NUMBER");
}
else
{
printf("IT IS NOT A PRIME NUMBER");
}
	return 0;
}
