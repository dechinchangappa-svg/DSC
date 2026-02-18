#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
        printf("%d enqueued\n", x);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } else {
        printf("%d dequeued\n", queue[front]);
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    peek();
    display();

    dequeue();
    peek();

    return 0;
}

     
     
