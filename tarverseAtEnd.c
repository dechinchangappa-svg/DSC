#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}; 

struct node *head = NULL;

void insertAtEnd(int x)   
{
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
   
    newnode->data = x;    
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;  
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
       
        temp->next = newnode;
        newnode->next = head; 
    }
}

void traverse()
{
    struct node *temp;
   
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while (temp != head);
       
        printf("\n");
    }
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
   
    traverse();
   
    return 0;
}
