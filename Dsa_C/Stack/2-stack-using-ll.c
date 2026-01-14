//Stack using linkedlist
#include <stdio.h>
#include <stdlib.h>

struct List{
    int data;
    struct List * next;
};

typedef struct List node;
node * top = NULL;

void free_resource(){
    node *tmp;
    while(top!= NULL){
        tmp = top;
        top = top->next;
        free(tmp);
    }
}

void push(){
    node *tmp,*tmp1;
    tmp = (node *)malloc(sizeof(node));
    printf("Enter data : ");
    scanf("%d",&tmp->data);
    tmp->next = top;
    top = tmp;
}

void pop(){
    if(top == NULL){
        printf("Nothing to delete");
        return;
    }

    node *tmp = top;
    top = top->next;
    free(tmp);
}

void display(){
    if(top == NULL){
        printf("Nothing to display");
        return;
    }

    node *tmp = top;
    while(tmp!= NULL){
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
}

int main(){

    int n;
    while (1)
    {
        printf("\n1- Push\n2- Pop \n3- Display\n4- Exit\n");
        scanf("%d",&n);
        if(n==1){
            push();
        }
        else if(n== 2){
            pop();
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