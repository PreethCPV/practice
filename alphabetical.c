#include <stdio.h>
#include <string.h>

void read_names(char names[][50], int n) {
    int i;
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
}

void sort_names(char names[][50], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
}

void print_names(char names[][50], int n) {
    int i;
    printf("Names in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
}

int main() {
    char names[5][50];
    int n = 5;

    read_names(names, n);
    sort_names(names, n);
    print_names(names, n);

    return 0;
}
