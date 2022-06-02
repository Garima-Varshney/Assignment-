#include<stdio.h>
int arr(int*ptr,int k){
	int sum=0,i;
	for (i=0;i<k;i++)
	sum=sum+ptr[i];
	printf("%d",sum);
}
int main()
{
	int ar[100],n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&ar[i]);
	arr(ar,n);
	
}

