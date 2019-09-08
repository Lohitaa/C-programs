/*Arrange the given non negative numbers such that they form a largest number
 12 234
 23412*/
 #include<stdio.h>
 int arrange(int a, int b)
 {
 char str1[20],str2[20];
 sprintf(str1,"%d",a);
 sprintf(str2,"%d",b);
 strcat(str1,str2);
 int c=atoi(str1);
 return c;
 }
 int main()
 {
 int x,y;
 int a,b;
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
