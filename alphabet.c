#include <stdio.h>
int main()
 {	
char ss;
printf("enter the variable");
scanf("%c",&ss);
if((ss>='a'&&ss<='z')||(ss>='A'&&ss<'Z'))
{
printf("the given variable is alphabet");
}
else
{
printf("the given variable is number");
}
	return 0;
}
