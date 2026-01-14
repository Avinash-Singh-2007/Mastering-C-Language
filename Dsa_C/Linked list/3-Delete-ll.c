// Deletion at begining
// Deletion at end
// Deletion at user defined position
// Deletion by Value

#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

struct List *head = NULL;
typedef struct List node;

void free_resource(){
    node *tmp;
    while(head != NULL){
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

void create()
{
    node *tmp;
    node *tmp1;
    tmp = (node *)malloc(sizeof(node));
    tmp->next = NULL;
    printf("Enter data : ");
    scanf("%d", &tmp->data);
    if (head == NULL)
    {
        head = tmp;
    }
    else
    {
        tmp1 = head;
        while (tmp1->next != NULL)
        {
            tmp1 = tmp1->next;
        }
        tmp1->next = tmp;
    }
}

void display()
{
    node *tmp = head;
    if (tmp == NULL)
    {
        printf("\nNo data present in linkedList add data first\n");
    }
    else
    {
        while (tmp != NULL)
        {
            printf("%d ", tmp->data);
            tmp = tmp->next;
        }
    }
}

void insert_at_begining()
{
    node *tmp = (node *)malloc(sizeof(node));

    printf("Enter data : ");
    scanf("%d", &tmp->data);

    tmp->next = head;
    head = tmp;
}

void insert_at_end()
{
    node *tmp = (node *)malloc(sizeof(node));
    node *tmp1;

    printf("Enter data : ");
    scanf("%d", &tmp->data);
    tmp->next = NULL;

    if (head == NULL)
    {
        head = tmp;
        return;
    }

    tmp1 = head;
    while (tmp1->next != NULL)
    {
        tmp1 = tmp1->next;
    }
    tmp1->next = tmp;
}

void insert_at_defined_pos()
{
    int n, count = 0;
    printf("Enter position of insertion : ");
    scanf("%d", &n);
    node *tmp, *tmp1;

    tmp1 = head;

    while (tmp1 != NULL)
    {
        tmp1 = tmp1->next;
        count++;
    }

    if (n > count + 1)
    {
        printf("\nInvalid position\n");
        return;
    }

    tmp = (node *)malloc(sizeof(node));

    printf("Enter data : ");
    scanf("%d", &tmp->data);

    if (n == 1)
    {
        tmp->next = head;
        head = tmp;
        return;
    }

    tmp1 = head;

    for (int i = 1; i < n - 1; i++)
    {
        tmp1 = tmp1->next;
    }

    tmp->next = tmp1->next;
    tmp1->next = tmp;
}

void delete_at_begining()
{
    node *tmp;
    tmp = head;
    if (tmp == NULL)
    {
        printf("Nothing to delete");
        return;
    }

    head = tmp->next;
    free(tmp);
}

void delete_at_end()
{
    node *tmp, *tmp1;
    tmp = head;
    if (tmp == NULL)
    {
        printf("Nothing to delete");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp1 = tmp->next;
    tmp->next = NULL;
    free(tmp1);
}

void delete_at_defined_pos()
{
    node *tmp, *tmp1;
    tmp = head;
    if (tmp == NULL)
    {
        printf("Nothing to delete");
        return;
    }

    int n, count = 0;
    printf("Enter position where to delete : ");
    scanf("%d", &n);

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    if (n > count)
    {
        printf("Invalid position");
        return;
    }

    if (n == 1)
    {
        tmp = head;
        head = head->next;
        free(tmp);
        return;
    }

    tmp = head;

    for (int i = 1; i < n - 1; i++)
    {
        tmp = tmp->next;
    }

    tmp1 = tmp->next;
    tmp->next = tmp1->next;
    free(tmp1);
}

void delete_by_value()
{
    node *tmp, *tmp1;
    tmp = head;
    if (tmp == NULL)
    {
        printf("Nothing to delete");
        return;
    }

    int n, flag = 0;
    printf("Enter value to delete: ");
    scanf("%d", &n);
    if (head->data == n)
    {
        tmp = head;
        head = head->next;
        free(tmp);
        return;
    }

    while (tmp != NULL)
    {
        if (tmp->next != NULL && n == tmp->next->data)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
    }

    if (flag == 1)
    {
        tmp1 = tmp->next;
        tmp->next = tmp1->next;
        free(tmp1);
    }
    else
    {
        printf("Value not found in the list");
    }
}

int main()
{
    int n;
    while (1)
    {
        printf("\nEnter 1 to add node\nEnter 2 for Display\nEnter 3 for insertion at begining\nEnter 4 for insertion at end\nEnter 5 for insertion at defined position\nEnter 6 for delete first node\nEnter 7 for delete last node\nEnter 8 for delete at user defined position\nEnter 9 for delete by value\nEnter 10 for exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            create();
        }
        else if (n == 2)
        {
            display();
        }
        else if (n == 3)
        {
            insert_at_begining();
        }
        else if (n == 4)
        {
            insert_at_end();
        }
        else if (n == 5)
        {
            insert_at_defined_pos();
        }
        else if (n == 6)
        {
            delete_at_begining();
        }
        else if (n == 7)
        {
            delete_at_end();
        }
        else if (n == 8)
        {
            delete_at_defined_pos();
        }
        else if (n == 9)
        {
            delete_by_value();
        }
        else if (n == 10)
        {
            free_resource();
            break;
        }
        else
        {
            printf("Wrong input");
        }
    }
}
