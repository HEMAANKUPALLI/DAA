#include <stdio.h>
#include <limits.h>

void findMinMaxSumDiff(int arr[], int size, int M, int N) {
    if (M <= 0 || N <= 0 || M > size || N > size) {
        printf("Illegal input\n");
        return;
    }

    // Sorting the array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int MthMax = arr[size - M];
    int NthMin = arr[N - 1];

    int sum = MthMax + NthMin;
    int diff = MthMax - NthMin;

    printf("Mth Maximum: %d\n", MthMax);
    printf("Nth Minimum: %d\n", NthMin);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
}

int main() {
    int arr1[] = {16, 16, 16, 16, 16};
    findMinMaxSumDiff(arr1, 5, 1, 1);

    int arr2[] = {0, 0, 0, 0};
    findMinMaxSumDiff(arr2, 4, 1, 2);

    int arr3[] = {-12, -78, -35, -42, -85};
    findMinMaxSumDiff(arr3, 5, 3, 3);

    int arr4[] = {15, 19, 34, 56, 12};
    findMinMaxSumDiff(arr4, 5, 6, -3);

    int arr5[] = {85, 45, 65, 75, 95};
    findMinMaxSumDiff(arr5, 5, 5, 2);

    return 0;
}
