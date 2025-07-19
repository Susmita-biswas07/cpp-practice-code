#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	printf("enter the number of raws");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		   printf("*");
		   printf("\n");
	}
	
}
