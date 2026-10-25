#include <stdio.h>
int* findMax(int *arr, int size) {
    if (size <= 0) return NULL;
    int *maxPtr = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}
int main() {
    int N;
    printf("Enter size of array: ");
    if (scanf("%d", &N) != 1 || N <= 0) return 0;
    int arr[100];
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) scanf("%d", arr + i);
    int *maxAddr = findMax(arr, N);
    if (maxAddr != NULL) {
        printf("Maximum Element: %d\n", *maxAddr);
        printf("Memory Address of Maximum: %p\n", (void*)maxAddr);
    }
    return 0;
}