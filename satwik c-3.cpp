#include<Stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter anumber:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		sum=sum+1;
		i++;
	}
	if(sum==n)
	{
		printf("%d is a perfect",n);
	}
	else
	printf("%d is not a perfect",n);
	return 0;
}
