#include<stdio.h>

struct student {
int roll;
char name[20];
float marks;
};

void main() {
struct student s;
struct student *ptr;
ptr=&s;
printf("enter roll number:");
scanf("%d",&ptr->roll);
printf("enter name:");
scanf("%s",ptr->name);
printf("enter marks:");
scanf("%f",&ptr->marks);

printf("roll number%d\nname %s\n marks %f\n",ptr->roll,ptr->name,ptr->marks);


}
