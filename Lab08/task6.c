#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Demonstrating Pointer Arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value at index %d: *(ptr + %d) = %d | Address: %p\n", i, i, *(ptr + i), (void*)(ptr + i));
    }
    return 0;
}