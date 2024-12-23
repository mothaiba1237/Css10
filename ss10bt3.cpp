#include <stdio.h>

int main() {
    int arr[] = {1, 6, 3, 9, 7};
    int n = 5;
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

