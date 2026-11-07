#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    char copy[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int length = strlen(name);
    printf("Length: %d\n", length);
    strcpy(copy, name);
    printf("Copied name: %s\n", copy);
    printf("sizeof(name): %lu\n", sizeof(name));
    printf("strlen(name): %lu\n", strlen(name));
    return 0;
}