/* Given an array and if one element in it is empty represented by zero, find its position */
#include<stdio.h>
int main()
{
int a[100],i,n,sum=0,max=0,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
for(i=0;i<n;i++)
{
k=sum-a[i];
if(k>max)
{
max=k;
}
}
for(i=0;i<n;i++)
{
if(sum-a[i]==max)
{
printf("%d",i);
}
}
}
