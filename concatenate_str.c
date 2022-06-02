//3.Write a C program to concatenate two strings with and without function.
#include<stdio.h>
int main(){
	char ar[2000],ar1[20];
	printf("enter the first string:");
	scanf("%[^\n]",ar);
	printf("enter the second string:");
	scanf("%[^\n]",ar1);
	strcat(ar,ar1);
	printf("%s",ar);	
}
