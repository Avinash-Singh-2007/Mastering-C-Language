//Bubble Sort - 2 value compare hoti h bdi value last me shift hoti jati h
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
    
    for (int i = 0; i < size-1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag =1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    printf("Sorted Array : ");
    print_array(arr,size);
    
}