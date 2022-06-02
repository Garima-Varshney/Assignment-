//WAP to input a matrix and check if its identity matrix or not.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int flag=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j&&arr[i][j]!=1){
			flag=-1;
			break;
		}
		else if(i!=j&&arr[i][j]!=0){
			flag=-1;
			break;
		} 
	}
}
if (flag==0){
	printf("identity matrix");
}
else
{
	printf("non");
}
}

		
			
