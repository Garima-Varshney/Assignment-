//WAP to input a 2D array and find the sum of its diagonal elements.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n][n],i,j,sum=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if(i==j){
				sum=sum+arr[i][j];
			}
		}
			}
	printf("%d",sum);
}
