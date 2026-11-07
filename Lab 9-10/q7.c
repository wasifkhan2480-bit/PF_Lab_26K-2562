#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("q7_students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter 3 student names:\n");
    for (int i = 0; i < 3; i++) {
        char name[50];
        scanf("%s", name);
        fprintf(fp, "%s\n", name);
    }
    fclose(fp);
    fp = fopen("q7_students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nNames read from q7_students.txt:\n");
    char line[50];
    int count = 0;
    while (fscanf(fp, "%s", line) != EOF) {
        count++;
        printf("%d. %s\n", count, line);
    }
    printf("Total students in file: %d\n", count);
    fclose(fp);
    return 0;
}