/*Arrange given two non negative integers such that they form the largest number */
#include<stdio.h>
int concat(int a,int b)
{
char s1[20],s2[20];
sprintf(s1,"%d",a);
sprintf(s2,"%d",b);
strcat(s1,s2);
int c=atoi(s1);
return c;
}
int main()
{
int x,y,a,b;
scanf("%d",&a);
scanf("%d",&b);
x=concat(a,b);
y=concat(b,a);
if(x>y)
printf("%d",x);
else
printf("%d",y);
return 0;
}
