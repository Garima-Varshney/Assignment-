#include<stdio.h>
int area();
int main()
{
	int r,a;
	scanf("%d",&r);
	a=area(r);
	printf("%d",a);
}
int area(int r){
	return 3.14*r*r;
}
