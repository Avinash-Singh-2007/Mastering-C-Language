// Creating and displaying linked node
#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

struct List * head = NULL;
typedef struct List node;

void free_resource(){
    node *tmp;
    while(head != NULL){
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

void create(){
    node *tmp;
    node *tmp1;
    tmp = (node *)malloc(sizeof(node));
    tmp->next = NULL;
    printf("Enter data : ");
    scanf("%d",&tmp->data);
    if(head==NULL){
        head = tmp;
    }else{
        tmp1 = head;
        while(tmp1->next != NULL){
            tmp1 = tmp1->next;
        }
        tmp1->next = tmp;
    } 
}

void display(){
    node *tmp = head;
    if(tmp == NULL){
        printf("\nNo data present in linkedList add data first\n");
    }
    else{
        while (tmp != NULL)
        {
            printf("%d ",tmp->data);
            tmp = tmp->next;
        }       
    }
    
}

int main(){
    int n;
    while(1){
        printf("\nEnter 1 to add node\nEnter 2 for Display\nEnter 3 for exit\n");
        scanf("%d",&n);
        if(n==1){
            create();
        }
        else if(n==2){
            display();
        }
        else if(n==3){
            free_resource();
            break;
        }
        else{
            printf("Wrong input");
        }
    }
}