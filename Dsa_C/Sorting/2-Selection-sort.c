//Selection Sort - isme sbse choti value nikalkr right hand pr swap krte jate h
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int size;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter value of position %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Orignal Array : ");
    print_array(arr,size);
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

    }

    printf("Sorted Array : ");
    print_array(arr,size);
    
}