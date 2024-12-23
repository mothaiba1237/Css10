#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int x, i;
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &x);
    for (i = 0; i < 5; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d ton tai o vi tri %d\n", x, i + 1);
            return 0;
        }
    }
    printf("Phan tu %d khong ton tai trong mang\n", x);
    return 0;
}

