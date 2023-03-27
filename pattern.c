#include<stdio.h>
int main()
{
	int i,j,h,n;
	printf("Enter the diamond height : ");
	scanf("%d",&n);
	for(i=1;i<n*2;i++)
	{
		for(j=1;j<n*2;j++)
		{  if(i<=n)
		{
			if(j<=n-i+1 || j>=n+i-1)
			printf(" ");
			else
			printf("*");
		}
		else
		{
			if(j<=i-n+1 || j>=n*2-(i-n+1))
			printf(" ");
			else
			printf("*");
		}
		}
		printf("\n");
	}
}
