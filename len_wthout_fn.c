#include<string.h>
#include<stdio.h>
int main(){
	int n,i,len=0;
	printf("Enter the size:");
	scanf("%d",&n);
	char ar[n],k;
	scanf("%c",&k);
	scanf("%[^\n]",ar);
	for(i=0;ar[i];i++){
		//if(ar<=65&&ar[i]<=90||ar>=97&&ar[i]<=122){
			len++;
		}
	
	printf("%d",len);
}

