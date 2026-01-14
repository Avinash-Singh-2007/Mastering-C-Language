//Queue using linkedlist
#include <stdio.h>
#include <stdlib.h>

struct List{
    int data;
    struct List * next;
};

typedef struct List node;
node * front = NULL;
node *rear = NULL;

void free_resource(){
    node *tmp;
    while (front != NULL)
    {
        tmp = front;
        front = front->next;
        free(tmp);
    }
    
    
}

void enqueue(){
    node *tmp,*tmp1;
    tmp = (node *)malloc(sizeof(node));
    printf("Enter data : ");
    scanf("%d",&tmp->data);
    tmp->next = NULL;
    if(front == NULL){
        front = tmp;
        rear = tmp;
        return;
    }

    rear->next = tmp;
    rear = tmp;
    
}

void dequeue(){
    if(front == NULL){
        printf("Underflow");
        return;
    }
    node *tmp = front;
    front = front->next;
    free(tmp);
    
    if (front == NULL)
    rear = NULL;

}

void display(){
    if(front == NULL){
        printf("Nothing to display");
        return;
    }
    node *tmp = front;
    while(tmp!=NULL){
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
}

int main(){

    int n;
    while (1)
    {
        printf("\n1- Enqueue\n2- Dequeue \n3- Display\n4- Exit\n");
        scanf("%d",&n);
        if(n==1){
            enqueue();
        }
        else if(n== 2){
            dequeue();
        }
        else if(n==3){
            display();
        }
        else if(n==4){
            free_resource();
            break;
        }
        else{
            printf("Wrong Input");
        }
    }
    
}