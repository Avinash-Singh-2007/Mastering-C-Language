#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char *sentence;

    printf("Enter maximum sentence length: ");
    scanf("%d", &n); 
    getchar();

    sentence = (char*) calloc(n, sizeof(char));

    if (sentence == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence, n, stdin);

    printf("You entered: %s\n", sentence);

    free(sentence);
    return 0;
}
