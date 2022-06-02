//10.Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
int main(){
	int i,vow=0,con=0;
	char a[100];
	scanf("%[^\n]",a);
	for (i=0;a[i];i++){
		
		if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
		vow++;
	}
	else {
		con++;
	}
	
	}
	printf("%d\n",vow);
	printf("%d",con);
}

