
#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50];
clrscr();
printf("string");
scanf("%s",&a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("string is a palindrome");
}
else
{
printf("string is not a palindrome");
}
getch();
return 0;
}
