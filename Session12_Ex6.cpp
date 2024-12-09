#include <stdio.h>
#include <math.h>

void function(int n) {
    if (n <= 1) {
        printf("%d khong phai la so hoan hao.\n", n);  
        return;
    }
    int sum = 0;
    int i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;  
        }
    }
    if (sum == n) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }
}
int main() {
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    function(num1);
    function(num2);

    return 0;
}
