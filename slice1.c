#include <stdio.h>
    int main() {
        int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sliceStart = 2; // Starting index of the slice
        int sliceSize = 5;  // Number of elements in the slice

        printf("Sliced array: ");
        for (int i = 0; i < sliceSize; i++) {
            printf("%d ", originalArray[sliceStart + i]);
        }
        printf("\n");}