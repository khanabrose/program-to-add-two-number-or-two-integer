#include<stdio.h>
int main()
{
int a,b,c;
printf ("enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is greater then ",a);
}
else if (b>a&&b>c)
{
printf("%d is the greater then ",b);
}
else  if(c>a&&c>b)
{
	printf("%d is the greater",c );
}
return 0;
}
