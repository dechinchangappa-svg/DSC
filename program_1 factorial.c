#include <stdio.h>

int fact(int n){
    
    if(n==0){
        return 1;
    } 
   
    
    return n*fact(n-1);
    
}



int main() {
    int terms,i;
  printf("enter number:");
  scanf("%d",&terms);
 
 printf("the factorial is %d",fact(terms));
 
  return 0;
}



output :

enter number:6
the factorial is 720
