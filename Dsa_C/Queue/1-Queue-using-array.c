//Queue using Array
#include <stdio.h>
#include <stdlib.h>

int *queue;
int size;
int front = -1, rear = -1;

void enqueue()
{
    int data;
    if (rear == size - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    else if (front == -1)
    {
        printf("Enter data: ");
        scanf("%d", &data);
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        printf("Enter data: ");
        scanf("%d", &data);
        rear++;
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
        front++;
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
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
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
