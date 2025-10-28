#include <stdio.h>
#define MAX 100

int main() {
    char names[MAX][50];
    int grades[MAX], n, i;
    float avg = 0;
    int max = -1, min = 101;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Student %d Name: ", i+1);
        scanf("%s", names[i]);
        printf("Grade: ");
        scanf("%d", &grades[i]);

        avg += grades[i];
        if(grades[i] > max) max = grades[i];
        if(grades[i] < min) min = grades[i];
    }

    avg /= n;

    printf("\n=== RESULTS ===\n");
    for(i = 0; i < n; i++) {
        printf("%s: %d\n", names[i], grades[i]);
    }
    printf("Average: %.2f\n", avg);
    printf("Highest: %d\n", max);
    printf("Lowest: %d\n", min);

    return 0;
}