#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter your first number:");
	scanf("%d",&a);
	printf("enter your second number:");
	scanf("%d",&b);
	c=b;
	b=a;
	printf("the swap value of a is %d",c);
	printf("the swap value of b is %d",b);
	return 0;
	
	
}
