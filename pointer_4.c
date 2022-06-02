#include<stdio.h>
int main(){
	int a=12;
	char b='0';
	void *vp;
	vp=&a;
	printf("%d",*(int*)vp);
	vp=&b;
	printf("%c",*(char*)vp);
}
