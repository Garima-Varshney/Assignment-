	//3.WAP to input a 2D array of size M*N and find the sum of individual rows and individual columns.

	for (j=0;j<m;j++){
		sum=0;
		for (i=0;i<n;i++){
		sum=sum+arr[i][j];
		}
		printf("The sum of the column:%d\n",sum);
			}
	for (i=0;i<m;i++){
		sum=0;
		for (j=0;j<n;j++){
		sum=sum+arr[i][j];
		}
		printf("The sum of the row:%d\n",sum);
			}

	
}
