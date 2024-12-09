#include <stdio.h>

void Tong(int num1, int num2) {
    int sum = num1 + num2; 
    printf("Tong cua %d + %d = %d\n", num1, num2, sum);  
}
int main() {
    int x, y;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &y);

    Tong(x,y);

    return 0;
}
