#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%dnumber is even",n);
	}
	else
	{
		printf("%dnumber is odd",n);
	}
	return 0;
}
