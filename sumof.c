#include<stdio.h>
void main()
{
int a[5],i,sum=0;
printf("enter the numbers:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);
}
