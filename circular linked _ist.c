#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_at_end(int data)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL) { 
        newnode->next=newnode;
        head=newnode;
    }
    else {
        temp = head;
        while(temp->next!=head) {
         temp = temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        }
}


void traverse() {
    struct node *temp;
    if(head==NULL) {
        printf("list is empty \n");
    }
    else {
        temp = head;
        do
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        } while(temp!=head);
        printf("\n");
    }
}

void delete_at_beg() {

struct node *temp, *last;

if(head==NULL)
{
    printf("the list is empty");
}
else if(head->next==head){
    
    free(head);
    head=NULL;
}
else {
    last=head;
    while(last->next!=head)
    {
        last=last->next;
    }
    temp=head;
    head=head->next;
    last->next=head;
    free(temp);
}
}
int main()
{
insert_at_end(10);
insert_at_end(20);
insert_at_end(30);
delete_at_beg();
traverse();

return 0;

}

OUPUT :
20
30
