#include <stdio.h>
void updateGrid(int current[5][5], int next[5][5]) {
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            int liveNeighbors = 0;
            for (int dr = -1; dr <= 1; dr++) {
                for (int dc = -1; dc <= 1; dc++) {
                    if (dr == 0 && dc == 0) continue;
                    int nr = r + dr;
                    int nc = c + dc;
                    if (nr >= 0 && nr < 5 && nc >= 0 && nc < 5) {
                        if (current[nr][nc] == 1) liveNeighbors++;
                    }
                }
            }
            if (current[r][c] == 1) {
                if (liveNeighbors < 2 || liveNeighbors > 3) next[r][c] = 0;
                else next[r][c] = 1;
            } else {
                if (liveNeighbors == 3) next[r][c] = 1;
                else next[r][c] = 0;
            }
        }
    }
}
void copyGrid(int source[5][5], int dest[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) dest[i][j] = source[i][j];
    }
}
void printGrid(int grid[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", grid[i][j]);
        printf("\n");
    }
}
int main() {
    int grid[5][5] = {0};
    grid[1][2] = 1;
    grid[2][2] = 1;
    grid[3][2] = 1;
    int next[5][5], gens;
    printf("Enter number of generations: ");
    if (scanf("%d", &gens) != 1) return 0;
    printf("\nGeneration 0:\n");
    printGrid(grid);
    for (int g = 1; g <= gens; g++) {
        updateGrid(grid, next);
        copyGrid(next, grid);
        printf("\nGeneration %d:\n", g);
        printGrid(grid);
    }
    return 0;
}