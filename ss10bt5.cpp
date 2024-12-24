#include <stdio.h>

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }
        int t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}
int search(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) return m;
        if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main() {
    int a[] = {12, 6, 4, 3, 11, 5, 7, 1, 9, 2};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, n);
    printf("Mang sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int p = search(a, n, x);
    if (p != -1) {
        printf("Tim thay x tai vi tri %d\n", p);
    } else {
        printf("Khong tim thay x\n");
    }

    return 0;
}

