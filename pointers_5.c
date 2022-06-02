#include<stdio.h>
int main(){
	int a=10;
	int *pt=&a;
	int **ptr=&pt;
	printf("%d\n",*ptr);
	printf("%d\n",a);
	printf("%x\n",ptr);
	printf("%x\n",&a);
	
	printf("%x\n",**ptr);
	printf("%x\n",*ptr);
	
