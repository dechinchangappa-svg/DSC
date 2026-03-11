#include <stdio.h>
#include <stdlib.h>

struct node {
    int data; // Book ID
    struct node *next;
};

struct node *head = NULL;

// Operation: High-priority book (Add at start)
void insert_at_beginning(int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head; // Point new node to current head
    head = newnode;       // Update head to new node
}

// Operation: Normal book (Add at end)
void insert_at_end(int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Operation: Book returned (Delete by ID)
void delete_node(int book_id) {
    struct node *temp = head, *prev = NULL;

    // If head node itself holds the book ID
    if (temp != NULL && temp->data == book_id) {
        head = temp->next;
        free(temp);
        return;
    }

    // Search for the book ID
    while (temp != NULL && temp->data != book_id) {
        prev = temp;
        temp = temp->next;
    }

    // If ID was not present in list
    if (temp == NULL) {
        printf("Book ID %d not found.\n", book_id);
        return;
    }

    // Unlink the node from linked list
    prev->next = temp->next;
    free(temp);
}

// Operation: Display all issued books
void traverse() {
    struct node *temp = head;
    if (head == NULL) {
        printf("No books currently issued.\n");
        return;
    }
    printf("Issued Book IDs: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_at_end(101);        // Normal book
    insert_at_end(102);        // Normal book
    insert_at_beginning(999);  // High-priority book
   
    printf("After issuing books:\n");
    traverse();

    printf("\nReturning book 101:\n");
    delete_node(101);
    traverse();

    return 0;
}
