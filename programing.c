#include <stdio.h>

void pattern1() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

void pattern2() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) printf("  ");
        for(int j = 1; j <= i; j++) printf("%d ", i+j-1);
        for(int j = i-1; j >= 1; j--) printf("%d ", i+j-1);
        printf("\n");
    }
}

void pattern3() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 5; j > i; j--) printf("  ");
        for(int j = 1; j <= 2*i-1; j++) printf("* ");
        printf("\n");
    }
}

void pattern4() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 5; j > i; j--) printf("  ");
        for(int j = 1; j <= 2*i-1; j++) printf("* ");
        printf("\n");
    }
}

void pattern5() {
    int coef = 1;
    for(int i = 0; i < 6; i++) {
        for(int j = 5; j > i; j--) printf("  ");
        for(int j = 0; j <= i; j++) {
            if(j == 0 || i == 0) coef = 1;
            else coef = coef * (i-j+1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}

int main() {
    printf("i.\n"); pattern1();
    printf("\nii.\n"); pattern2();
    printf("\niii.\n"); pattern3();
    printf("\niv.\n"); pattern4();
    printf("\nv.\n"); pattern5();
    return 0;
}