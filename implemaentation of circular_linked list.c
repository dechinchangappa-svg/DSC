#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_at_beg(int data)
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
        newnode->next=head;
        temp->next=newnode;
        head=newnode;
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

int main()
{
insert_at_beg(10);
insert_at_beg(20);
insert_at_beg(30);

traverse();

return 0;

}

OUPUT :
30
20
10
