#include <stdio.h>

int main()
{
    int arr[] = {1,2,1};
    int n = 3;

    int is_palindrome = 1;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
