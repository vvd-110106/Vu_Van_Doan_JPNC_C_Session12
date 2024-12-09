#include <stdio.h>

void giai_thua(int n) {
    if (n < 0) {
        printf("Loi so am khong co giai thua \n");
        return;
    }
    long long result = 1;
    int i;
    for ( i = 1; i <= n; i++) {
        result *= i;
    }
    printf("Giai thua cua %d la: %lld\n", n, result);
}
int main() {
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    giai_thua(n);
    return 0;
}
