#include <stdio.h>

void findSubsetSum(int set[], int subset[], int n, int sum, int subsetSum, int index) {
    if (subsetSum == sum) {
        printf("Subset: ");
        for (int i = 0; i < index; i++) {
            printf("%d ", subset[i]);
        }
        printf("\n");
        return;
    }

    if (index == n || subsetSum > sum) {
        return;
    }

    subset[index] = set[index];
    findSubsetSum(set, subset, n, sum, subsetSum + set[index], index + 1);

    subset[index] = 0;
    findSubsetSum(set, subset, n, sum, subsetSum, index + 1);
}

void subsetSum(int set[], int n, int sum) {
    int subset[n];
    findSubsetSum(set, subset, n, sum, 0, 0);
}

int main() {
    int set1[] = {6, 2, 8, 1, 5};
    int n1 = sizeof(set1) / sizeof(set1[0]);
    int sum1 = 9;

    int set2[] = {6, -4, 7, -1, 5, 2, 8, 1};
    int n2 = sizeof(set2) / sizeof(set2[0]);
    int sum2 = 10;

    printf("Subsets with sum %d:\n", sum1);
    subsetSum(set1, n1, sum1);

    printf("\nSubsets with sum %d:\n", sum2);
    subsetSum(set2, n2, sum2);

    return 0;

