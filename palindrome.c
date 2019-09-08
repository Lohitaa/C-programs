/*PROBLEM:
Given a string, output the characters to be added to make the string a palindrome
abacd
2 char required
dc*/
SOLUTION:
#include<stdio.h>
#include<string.h>
void main()
{
char s[50],c[50];
int i=0,j=0,x;
scanf("%s",s);
x=strlen(s);
while(x!=i)
{
if(s[i]==s[x-1])
{
printf("%d char required",j);
break;
}
else
{
c[j]=s[x-1];
x--;
j=j+1;
}
}
printf("%s",c);
}
