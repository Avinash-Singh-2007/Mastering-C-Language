//Binary Search in Array
//Value need to be sorted to work
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

    int i=0;
    int j=size-1;
    int mid;

    while (i<=j)
    {
        mid = (i+j)/2;
        if(*(arr+mid) == target){
            flag =1;
            break;
        }
        else if (*(arr+mid)<target)
        {
            i = mid + 1;
        }
        else{
            j = mid-1;
        }
        
    }
    
    

    if(flag==1){
        printf("%d found at position %d in the array",target,mid+1);
    }
    else{
        printf("%d not found in the array",target);
    }

    free(arr);
    
    return 0;
}