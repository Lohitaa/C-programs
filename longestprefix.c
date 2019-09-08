# C-programs
/*PROBLEM:Given two strings output the longest common prefix
abcgft
abcdef
abc*/
#include<stdio.h>
#include<string.h>
void main()
{
char a[50],b[50],c[50];
int i=0,j=0,x;
scanf("%s",a);
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[j])
{
c[i]=a[i];
}
else
break;
j=j+1;
}
printf("%s",c);
}
