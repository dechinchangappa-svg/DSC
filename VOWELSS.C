#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50],c;
int count=0,i;
clrscr();
printf("enter a string");
gets(a);
for(i=0;i<strlen(a);i++)
{
c=tolower(a[i]);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
count++;
}
}
printf("number of vowels %d",
count);
getch();
return 0;
}