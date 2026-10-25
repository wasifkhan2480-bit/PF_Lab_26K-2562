#include <stdio.h>
void replaceChar(char *grid, int rows, int cols, char target, char replacement) {
    for (int i = 0; i < rows * cols; i++) {
        if (*(grid + i) == target) {
            *(grid + i) = replacement;
        }
    }
}
int main() {
    int rows, cols;
    char target, replacement;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) return 0;
    char grid[50][50];
    printf("Enter grid characters:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }
    printf("Enter target character to replace: ");
    scanf(" %c", &target);
    printf("Enter replacement character: ");
    scanf(" %c", &replacement);
    replaceChar((char *)grid, rows, cols, target, replacement);
    printf("\nModified Grid:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}