// Stack using array
#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int size;

void push()
{
    if (top == size - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    printf("Enter data: ");
    scanf("%d", &stack[top]);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    top--;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter size of stack: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));

    if (stack == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    int choice;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
            push();
        else if (choice == 2)
            pop();
        else if (choice == 3)
            display();
        else if (choice == 4)
            break;
        else
            printf("Invalid choice\n");
    }

    free(stack);

    return 0;
}
