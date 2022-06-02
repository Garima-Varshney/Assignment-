/*16.WAP to input a matrix and print it in zig zack form.
Example :- if matrix is      1 2 3 4
                             5 6 7 8
                             9 1 2 3
                             4 5 9 1
Then output matrix will be 
1 2 3 4
8 7 6 5
9 1 2 3
1 9 5 4
*/
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
	for(i=0;i<n;i++){
		if(i%2==0){
		
	for(j=0;j<n;j++){
		printf("%d ",arr[i][j]);
		}
	}
	
	else{
		for(j=n-1;j>=0;j--){
			printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
		
	}
}
