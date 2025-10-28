#include <stdio.h>

int str_len(char *s) {
    int len = 0; while(s[len]) len++; return len;
}

void str_copy(char *dest, char *src) {
    while((*dest++ = *src++));
}

void str_cat(char *dest, char *src) {
    while(*dest) dest++;
    while((*dest++ = *src++));
}

int str_cmp(char *a, char *b) {
    while(*a && *b && *a == *b) { a++; b++; }
    return *a - *b;
}

void str_rev(char *s) {
    int i = 0, j = str_len(s) - 1;
    char temp;
    while(i < j) {
        temp = s[i]; s[i] = s[j]; s[j] = temp;
        i++; j--;
    }
}

int main() {
    char s1[50] = "Hello", s2[50], s3[50];

    printf("Length: %d\n", str_len(s1));
    str_copy(s2, s1);
    printf("Copy: %s\n", s2);
    str_cat(s2, " World");
    printf("Concat: %s\n", s2);
    printf("Compare: %d\n", str_cmp("abc", "abd"));
    str_rev(s1);
    printf("Reverse: %s\n", s1);

    return 0;
}