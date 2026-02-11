#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* insert_beginning(struct node* head, int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;
}

struct node* insert_end(struct node* head, int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next= NULL;
   
    if(head==NULL){
        return newnode;
    }
    struct node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

struct node* delete_node(struct node* head, int data){
    struct node* temp=head;
    struct node* prev=NULL;
    if (head==NULL){
        printf("list is empty\n");
        return head;
    }
    if(temp!=NULL && temp->data==data){
        head=temp->next;
        free(temp);
        return head;
    }
    while (temp!=NULL && temp->data==data){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("element not found\n");
        return head;
    }
    prev->next=temp->next;
    free(temp);
    return head;
}
void traverse(struct node* head){
    struct node* temp=head;
    if(temp==NULL){
        printf("list is empty");
        return;
    }
    printf("linked list\n");
    while(temp !=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node* head=NULL;
   
    head=insert_beginning(head,10);
    head=insert_beginning(head,20);
    head=insert_end(head,40);
   
    traverse(head);
    head=delete_node(head,20);
    traverse(head);
    return 0;

}
