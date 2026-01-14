//Insertion at user defined index
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(arr+i));
    }
    
}

int main(){


    int size;
    printf("Enter size of Array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc((size+1)*sizeof(int));

    if(arr == NULL){
        printf("Memory Allocation Failed");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter value at index %d : ",i);
        scanf("%d",arr+i);
    }

    printf("Orignal Array: ");
    print_array(arr,size);
    
    int value,index,flag = 0;
    printf("\nEnter element to insert in array: ");
    scanf("%d",&value);

    printf("\nEnter index of insertion in array: ");
    scanf("%d",&index);

    for (int i = size-1; i >= index; i--)
    {
        *(arr+i+1) = *(arr+i);
    }

    *(arr+index) = value;
    
    printf("Array after insertion: ");
    print_array(arr,size+1);

    free(arr);
    
    return 0;
}