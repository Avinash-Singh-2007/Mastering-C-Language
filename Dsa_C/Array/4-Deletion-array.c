//Delete user defined value
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

    int *arr = (int *)malloc((size)*sizeof(int));

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

    int target,flag=0;
    
    printf("\nEnter element to delete in array: ");
    scanf("%d",&target);

    int i,index;
    for ( i = 0; i < size; i++)
    {
        if(flag==0){
            if(*(arr+i) == target){
            flag =1;
            index = i;
        }
        }
        else{
            *(arr+i-1) = *(arr+i);
        }  
    }

    if(flag==1){
        printf("%d found at position %d in the array and is successfully removed",target,index+1);printf("\nArrayy after deletion: ");
        print_array(arr,size-1);
    }
    else{
        printf("%d not found in the array",target);
    }
    

   
    return 0;
}