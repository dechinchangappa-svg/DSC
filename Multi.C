#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j,k,b[3][3],s[3][3],c[3][3];
 clrscr();
 printf("Enter array elements:");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 scanf("%d",&a[i][j]);
 }}
 printf("Enter second array elements:");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 scanf("%d",&b[i][j]);
 }}
 printf("Array elements are \n");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 printf("%d ",a[i][j]);
 }
 printf("\n");
 }
 printf("second array elements are \n");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 printf("%d ",b[i][j]);
 }
 printf("\n");
 }
 for(i=0;i<3;i++){
 for(j=0;j<3;j++){
 s[i][j]=a[i][j]+b[i][j];
 }}
 printf("Addition:\n");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 printf("%d ",s[i][j]);
 }
 printf("\n");
 }
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 c[i][j]=0;
 for(k=0;k<3;k++) {
 c[i][j]=c[i][j]=a[i][k]*b[k][j];
 }}}
 printf("Multiplication: \n");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 printf("%d ",c[i][j]);
 }
 printf("\n");
 }
 getch();
}


