#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="Hello";
    char str2[20]="World";
    char str3[40];
    int lenght;
    lenght=strlen(str1);
    printf("Lenghtof str1:%d\n",lenght);
    strcpy(str3,str1);
    printf("str3 after strcpy:%s\n",str3);
    
    strcat(str3," ");
    strcat(str3,str2);
    printf("str3 after strcat:%s\n",str3);
    
    if(strcmp(str1,str2)==0){
        printf("strings are equal\n");
    }else{
        printf("strings are diffrernt\n");
    }
      
    printf("original:%s| reversed:",str1);
    for (int i=strlen(str1) -1;i>=0;i--){
        printf("%c",str1[i]);
    }
    printf("\n");
    return 0;
    
    }
