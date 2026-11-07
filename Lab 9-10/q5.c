#include <stdio.h>
#include <string.h>
int main() {
    char cities[5][50];
    int maxLen = 0;
    int longestIndex = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter city %d: ", i + 1);
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
        int len = strlen(cities[i]);
        if (len > maxLen) {
            maxLen = len;
            longestIndex = i;
        }
    }
    printf("\nAll Cities:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", cities[i]);
    }
    printf("\nLongest city name: %s (Length: %d)\n", cities[longestIndex], maxLen);
    return 0;
}