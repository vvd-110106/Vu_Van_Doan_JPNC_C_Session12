#include <stdio.h>

void in_mang(int arr[], int n) {
    printf("Cac phan tu trong mang la: ");
    int i;
    for (i = 0; i < n; i++) {
        printf("   arr[%d]   ", arr[i]); 
    }
    printf("\n");
}
int main() {
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Nhap gia tri cac phan tu cho mang:\n");
    int i;
    for ( i = 0; i < n; i++) {
    	printf("Phan tu arr[%d] = ", i); 
        scanf("%d", &arr[i]);
    }

    in_mang(arr, n);

    return 0;
}
