#include <stdio.h>
#include<conio.h>

int main() {
    int arr[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Input values into the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero values
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Display the counts
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}