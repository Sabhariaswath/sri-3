#include <stdio.h>
int main()
{
int minutes,n,hour;
printf("Enter the minutes");
scanf("%d",&n);
if(n<60)
{
printf("0 %d",n);
}
else if(n>=60)
{
minutes=n%60;
hour=n/60;
printf("\n%dHours %dMInutes",hour,minutes);
}
return 0;
}
