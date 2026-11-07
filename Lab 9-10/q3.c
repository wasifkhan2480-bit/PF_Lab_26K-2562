#include <stdio.h>
#include <string.h>
int main() {
    char secretPass[] = "lab10pass";
    char userPass[100];
    printf("Enter password: ");
    scanf("%s", userPass);
    if (strcmp(userPass, secretPass) == 0) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }
    if (strncmp(userPass, secretPass, 3) == 0) {
        printf("First 3 characters match.\n");
    } else {
        printf("First 3 characters do not match.\n");
    }
    return 0;
}