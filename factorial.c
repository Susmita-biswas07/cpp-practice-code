//write a program to find factorial of a number using//
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	float FACT=1;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		FACT=FACT*i;
		
	}
	printf("factorial of%d is%f",n,FACT);
}
