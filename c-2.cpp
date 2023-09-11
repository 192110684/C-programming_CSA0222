#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d\n",a);
	printf("after swapping b=%d\n",b);
	return 0;
}
