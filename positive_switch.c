#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	switch (a>0)
	{
		case 0:
			switch(a<0)
			{
			case 1:
				printf("this is negative");
				break;
			case 0:
				printf("the number is zero");
			
			}
			break;
			
		case 1:
			printf("this is positive");
			break;
	}
}
