#include<stdio.h>
#include<math.h>
int main() 
{
    int a,b,sum=0,count=0,temp=0,temp1=0,i,rem=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++)
    {
        temp=i;
        temp1=i;
        while(temp!=0)
        {
            count++;
            temp=temp/10;
        }
        while(temp1!=0)
        {
            rem=temp1%10;
            sum=sum+pow(rem,count);
            temp1=temp1/10;
        }
        if(sum==i)
        {
            printf("%d",sum);
        }
       sum=0;
       count=0;
    }
	return 0;
}
