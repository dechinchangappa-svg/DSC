#include <stdio.h>

int main() {
  int i,j,k,a[3][3],b[3][3],r[3][3];
 printf("enter the elements for A matrix");
 
 for(i=0;i<3;i++){
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
  printf("enter the elements for B matrix");
for(i=0;i<3;i++){
     for(j=0;j<3;j++)
     {
         scanf("%d",&b[i][j]);
     }
 }

printf("prod of a and b matrices are\n");
for(i=0;i<3;i++) {
     for(j=0;j<3;j++)
     {
         r[i][j]=0;
       for(k=0;k<3;k++) {
        r[i][j] = r[i][j]+a[i][k]*b[k][j];
       
       }
        printf("%d\t",r[i][j]);
     }
     printf("\n");
 }


    return 0;
}
OUTPUT :
enter the elements for A matrix1 2 3 4 5 6 7  8 9
enter the elements for B matrix1 2 3 4 5 6 7 8 9
prod of a and b matrices are
30	36	42	
66	81	96	
102	126	150
