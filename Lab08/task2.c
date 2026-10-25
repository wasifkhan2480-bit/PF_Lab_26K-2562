#include <stdio.h>
void swapPrices(int *priceA, int *priceB) {
    int temp = *priceA;
    *priceA = *priceB;
    *priceB = temp;
}
int main() {
    int priceA, priceB;
    printf("Enter price A: ");
    if (scanf("%d", &priceA) != 1) return 0;
    printf("Enter price B: ");
    if (scanf("%d", &priceB) != 1) return 0;
    printf("Before swap: A=%d, B=%d\n", priceA, priceB);
    swapPrices(&priceA, &priceB);
    printf("After swap: A=%d, B=%d\n", priceA, priceB);
    return 0;
}