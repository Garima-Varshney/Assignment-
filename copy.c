#include<stdio.h>
int main()
{
	int n,size;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter the number :");
	scanf("%d",&size);
	int a[n],b[size];
	printf("enter the element in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
	b[i]=a[i];
	printf("%d\t",b[i]);
	}
}
