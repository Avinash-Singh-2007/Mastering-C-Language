//Linear Search in Array
#include <stdio.h>
#include <stdlib.h>

int main(){

    int size;
    printf("Enter size of Array: ");
    scanf("%d",&size);

    int *arr = (int *)malloc(size*sizeof(int));

    if(arr == NULL){
        printf("Memory Allocation Failed");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter value at index %d : ",i);
        scanf("%d",arr+i);
    }
    
    int target,flag = 0;
    printf("Enter element to search in array: ");
    scanf("%d",&target);

    int i;
    for ( i = 0; i < size; i++)
    {
        if(*(arr+i) == target){
            flag =1;
            break;
        }
    }

    if(flag==1){
        printf("%d found at position %d in the array",target,i+1);
    }
    else{
        printf("%d not found in the array",target);
    }

    free(arr);    
    return 0;
}