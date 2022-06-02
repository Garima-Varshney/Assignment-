#include<stdio.h>
int main()
{
	int a[]={10,11,-1,56,67,5,4};
	int *p,*q;
	p=a;
	printf("%d\n",*p);//10
	printf("%d %d %d \n", (*p)++,*p++,*++p); //*++p=11,*p++=11,
	printf("%d\n",*p);	 
	q=p+3;
	printf("%d\n",*q-3);
	printf("%d\n",*--p+5);
	printf("%d\n",*p +  *q);	 	 	 
	
} 
