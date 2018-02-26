#include<stdio.h>
int main()
{
int q,b[3],larg,i;
printf("Enter the number of elements: ");
scanf("%d",&q);
printf("Enter the array elements: ");
for(i=1;i<=q;i++)
{
scanf("%d\n",b[i]);
}
larg=b[0];
for(i=1;i<=q;i++)
{
if(b[i]>larg)
{
larg=b[i];
}
}
printf("Largest in array is %d",larg);
return 0;
}
