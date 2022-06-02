#include<stdio.h>
int main()
{
int a[50],n,pos,element,i,j;
printf("enter the element");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("enter:");
    scanf("%d",&a[i]);
}
printf("enter the position:");
scanf("%d",&pos);
printf("enter the element:");
scanf("%d",&element);
for(i=n-1;i>=pos;i--)
{
    a[i+1]=a[i];
}
a[pos]=element;

for(j=0;j<=n;j++)
{
    printf("%d\t",a[j]);
}
return 0;
}
