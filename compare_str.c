//4.Write a C program to compare two strings with and without function.
#include<stdio.h>
int main(){
	int a,b;
	char ar[20],ar1[20];
	printf("enter the first string:");
	scanf("%[^\n]",ar);
	a=strlen(ar);
	printf("enter the second string:");
	scanf("%[^\n]",ar1);
	
	b=strlen(ar1);
	if(a>b){
		printf("ar is greater than ar1");
	}
	else if(b>a){
		printf("ar1 is greater than ar");
	}
}
