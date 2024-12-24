#include <stdio.h>

int main() {
    int  i, target;
    
    int a[] = {12, 6, 4, 3, 11, 5, 7, 1, 9,3,3,3 ,2};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mang sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }printf("\n"); 
    printf("Nhap so can tim: ");
    scanf("%d", &target);
    
    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            printf("So %d duoc tim thay tai vi tri %d\n", target, i);
        }
    }
    
    return 0;
}

