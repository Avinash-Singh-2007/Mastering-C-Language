//Circular Queue using Array

#include <stdio.h>
#include <stdlib.h>

int *queue;
int size;
int front = -1, rear = -1;

void enqueue()
{
    int data;
    if (front == (rear + 1) % size)
    {
        printf("Queue Overflow\n");
    }
    else if (front == -1)
    {
        printf("Enter data: ");
        scanf("%d", &data);
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        printf("Enter data: ");
        scanf("%d", &data);
        rear = (rear + 1) % size;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else if (front == rear)
    {
        printf("Deleted element: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front = (front + 1) % size;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int i = front;
        while (i != (rear + 1) % size)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % size;
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter queue size: ");
    scanf("%d", &size);

    queue = (int *)malloc(size * sizeof(int));

    int choice;
    while (1)
    {
        printf("\n1-Enqueue\n2-Dequeue\n3-Display\n4-Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
            enqueue();
        else if (choice == 2)
            dequeue();
        else if (choice == 3)
            display();
        else if (choice == 4)
            break;
        else
            printf("Invalid choice\n");
    }

    free(queue);
    return 0;
}
