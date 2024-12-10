#include<stdio.h>

void M_2c(int sows, int cols, int arr[100][100]);

int main(){
	int sows, cols;
	printf("Ban hay nhap vao so cot cho mang: ");
	scanf("%d", &sows);
	printf("Ban hay nhap vao so hang cho mang: ");
	scanf("%d", &cols);
	int arr[100][100];
	for (int i = 0; i < sows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
	M_2c(sows, cols, arr);
	return 0;
}

void M_2c(int sows, int cols, int arr[100][100]){
	for(int i=0; i<sows; i++){
		for(int j=0; j<cols; j++ ){
			printf("%3d", arr[i][j]);
		}
			printf("\n");
	}
}
