#include <stdio.h>

int main()
{
    int arr1[] = {13,14,20};
    int arr2[] = {12,19,21,25};
    int m = 3;
    int n= 4;

    int newarr[m+n];
    int i,j,k;
    i=j=k=0;

    while (i<m || j<n){
      if(j==n || i<m && arr1[i]<arr2[j]){
        newarr[k]=arr1[i];
        i++;
        k++;
      }
      else{
        newarr[k]=arr2[j];
        j++;
        k++;
      }
    } 
    
    printf("New Array : \n");
    for(int i=0 ;i<m+n;i++){
      printf("%d ",newarr[i]);
    }

    return 0;
}
