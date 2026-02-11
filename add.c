

#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j,b[3][3],s[3][3];
clrscr();
printf("enter array elements: ");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
printf("first array elements are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("second array elements are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("addition of array elements are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
s[i][j]=s[i][j]+b[i][j];
}}
printf("addition of elements are: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",s[i][j]);
}
printf("\n");
}
getch();
return 0;
}
