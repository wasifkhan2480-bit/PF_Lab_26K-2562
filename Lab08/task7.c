#include <stdio.h>
void reverseArray(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
int main() {
    int N;
    printf("Enter number of songs: ");
    if (scanf("%d", &N) != 1 || N <= 0) return 0;
    int playlist[100];
    printf("Enter %d song IDs:\n", N);
    for (int i = 0; i < N; i++) scanf("%d", playlist + i);
    reverseArray(playlist, N);
    printf("Reversed Playlist:\n");
    for (int i = 0; i < N; i++) printf("%d ", *(playlist + i));
    printf("\n");
    return 0;
}