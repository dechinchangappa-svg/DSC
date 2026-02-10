#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* top = NULL;

int empty(){
    return top == NULL;
}

void push(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("stack overflow\n");
        return;
    }
    newnode->data = data;
    newnode->next = top;
    top = newnode;
    printf("%d pushed\n", data);
}

int pop(){
    if(empty()){
        printf("underflow");
        return -1;
    }
    struct node* temp =top;
    int var= temp->data;
    top=top->next;
    free(temp);
    printf("%d popped\n",var);
    }


int main(){
    push(10);
    push(20);
    pop();

    if (empty())
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");

    return 0;
}

