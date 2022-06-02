#include<stdio.h>
int main()
{
	char alpha;
	printf("enter the alphabet:");
	scanf("%c",&alpha);
	switch(alpha)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("this is vowels:");
			break;
		default:
			printf("this is consonants:");
	}
}
