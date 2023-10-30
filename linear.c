#include<stdio.h>
void main()
{
int a[50],i,n,key,f=0;
printf("enter the range:");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1) 
{
printf("the elements are found:");
}
else
{
printf("the elements are not found:");
}
}
