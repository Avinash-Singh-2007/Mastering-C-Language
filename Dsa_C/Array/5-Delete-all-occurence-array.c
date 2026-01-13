//Delete all occurence in array
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}

void delete_element(int *arr,int size,int index){
    for (int i = index; i < size; i++)
    {
        *(arr+i) = *(arr+i+1);
    }
}

int main()
{

    int size;
    printf("Enter size of Array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc((size) * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter value at index %d : ", i);
        scanf("%d", arr + i);
    }

    printf("Orignal Array: ");
    print_array(arr, size);

    int target, flag = 0;

    printf("\nEnter element to delete in array: ");
    scanf("%d", &target);

    int i;
    for (i = 0; i < size-flag; i++)
    {
        if (*(arr + i) == target)
        {
            flag++;
            delete_element(arr,size-flag,i);
            if(*(arr+i)==target) i--;
        }
    }

    if (flag > 0)
    {
        printf("%d found %d times in array and all occurence is successfully removed", target, flag);
        printf("\nArrayy after deletion: ");
        print_array(arr, size - flag);
    }
    else
    {
        printf("%d not found in the array", target);
    }

    return 0;
}