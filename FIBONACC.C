#include<stdio.h>
#include<conio.h>
int fib(int n)
{
if (n==0)
return 0;
if (n==1)
return 1;
return fib(n-1)+fib(n-2);
}
void main()
{
int num,i;
clrscr();
printf("enter a number=");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("%d", fib(i));
}
getch();
}