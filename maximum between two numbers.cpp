/**
 * C program to find maximum between two numbers
 */


#include<stdio.h>
int main()
{
	int n1,n2;
	 /* Input two numbers from user */
	printf("enter the number");
	scanf("%d%d",&n1,&n2);
	 /* If num1 is maximum */
	if (n1>n2)
	{
		printf("%d is maximun",n1);
		
	}
	/* If num2 is maximum */
	if(n2>n1)
	{
		printf("%d is maximum",n2);
	}
	 /* Additional condition check for equality */
	if(n1=n2)
	{
		printf("equal");
	}
}
