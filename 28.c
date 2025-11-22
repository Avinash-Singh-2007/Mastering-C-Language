#include <stdio.h>

int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    printf("Category: %s\n", 
           (score > 80) ? "High" : 
           (score >= 50 ? "Moderate" : "Low"));

    return 0;
}
