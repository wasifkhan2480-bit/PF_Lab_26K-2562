#include <stdio.h>
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int N;
    printf("Enter number of students: ");
    if (scanf("%d", &N) != 1 || N <= 0) return 0;
    int marks[100];
    printf("Enter marks of %d students:\n", N);
    for (int i = 0; i < N; i++) scanf("%d", marks + i);
    sortArray(marks, N);
    printf("Sorted Marks:\n");
    for (int i = 0; i < N; i++) printf("%d ", *(marks + i));
    printf("\n");
    return 0;
}