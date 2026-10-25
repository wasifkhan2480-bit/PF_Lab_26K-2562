#include <stdio.h>
void analyzeSteps(int *steps, int days, int *total, float *average) {
    *total = 0;
    for (int i = 0; i < days; i++) {
        *total += *(steps + i);
    }
    *average = (float)(*total) / days;
}
int main() {
    int steps[7], total = 0;
    float average = 0.0;
    printf("Enter steps for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter steps for day %d: ", i + 1);
        scanf("%d", steps + i);
    }
    analyzeSteps(steps, 7, &total, &average);
    printf("\nWeekly Summary:\n");
    printf("Total Steps: %d\n", total);
    printf("Average Steps per Day: %.2f\n", average);
    return 0;
}