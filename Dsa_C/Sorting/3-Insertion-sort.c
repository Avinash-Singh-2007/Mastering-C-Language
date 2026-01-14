//Insertion sort - isme left me ek element sorted samajte h and right sorted se ek ek element sahi position pr insert

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
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    

    printf("Sorted Array : ");
    print_array(arr,size);
    
}