#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    char *ptr = strchr(sentence, 'a');
    if (ptr != NULL) {
        printf("First 'a' found at index %ld\n", ptr - sentence);
    } else {
        printf("Letter 'a' not found\n");
    }
    if (strstr(sentence, "good") != NULL) {
        printf("Word 'good' found.\n");
    } else {
        printf("Word 'good' not found.\n");
    }
    return 0;
}