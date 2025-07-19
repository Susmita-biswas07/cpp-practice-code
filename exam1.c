#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	float fact=1;
	printf(" enter the value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factorial%d value is :%f",n,fact);
}
