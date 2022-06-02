#include<stdio.h>
int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int a[n],count=0;
	printf("enter the element in array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the negative element in array \n");
	for (int i=0;i<n;i++)
	{
	    if (a[i]<0){
		printf("%d\t\n",a[i]);
	        count++;
	    }
	}
	printf("%d",count);
}
