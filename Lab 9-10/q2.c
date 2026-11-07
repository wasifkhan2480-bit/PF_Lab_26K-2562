#include <stdio.h>
#include <string.h>
int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100] = "";
    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("Full name: %s\n", fullName);
    return 0;
}