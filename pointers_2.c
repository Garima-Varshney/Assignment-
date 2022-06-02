#include<stdio.h>
int main()
{
	const int a=-11;
	 int *p=&a;
	*p=32;
	printf("%d",a );
	
}
