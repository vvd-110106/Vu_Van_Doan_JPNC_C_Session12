#include <stdio.h>

void Menu();
void NhapGiaTri();
void In();
void inphantu_ogoc();
void duongBien();
void dcChinh_phu();
void In_Songuyento();

int n=0,m=0;
int arr[100][100];

int main() {
    int choice;
    do {
        Menu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
        	case 1:
        		NhapGiaTri();
        		break;
        	case 2:
        		In();
        		break;
        	case 3:
        		inphantu_ogoc();
        		break;
        	case 4:
        		duongBien();
        		break;
        	case 5:
        		dcChinh_phu();
        		break;
        	case 6:
        		In_Songuyento();
        		break;
        	case 7:
        		printf("Cam on da su dung chuong trinh :>>> ");
        		return 0;
		}
    } while (choice != 7);
    return 0;
}

void Menu() {
    printf("\n ------------- Menu -------------\n");
    printf(" 1. Nhap gia tri cho mang. \n");
    printf(" 2. In cac phan tu cua mang \n");
    printf(" 3. In ra cac phan tu o goc cua mang \n");
    printf(" 4. In ra phan tu duong bien \n");
    printf(" 5. In ra duong cheo chinh va duong cheo phu \n");
    printf(" 6. So nguyen to \n");
    printf(" 7. Thoat \n");
}

void NhapGiaTri(){
	printf("Ban hay nhap so cot cho mang: ");
	scanf("%d", &n);
	printf("Ban hay nhap so hang cho mang: ");
	scanf("%d", &m);
	if(n<0 || m<0){
		printf("Khong hop le. \n");
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("Phan tu thu [%d][%d] la: ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void In(){
	if(n==0 || m==0){
		printf("Mang rong. \n");
	}else{
		printf("Mang vua nhap la: \n");
		for(int i=0; i<n; i++){
		   for(int j=0; j<m; j++){
		     	printf("%3d", arr[i][j]);
		    }
		    printf("\n");
	    }
    }
}

void inphantu_ogoc(){
	if(n==0 || m==0){
		printf("Mang rong. \n");
	}else{
		printf("%d", arr[0][0]);
	    printf("%d", arr[0][n-1]);
     	printf("%d", arr[m-1][0]);
    	printf("%d", arr[m-1][n-1]);
    }
}

void duongBien(){
	if(n==0 || m==0){
		printf("Mang rong. \n");
	}else{
		for(int i=0; i<n; i++){
		   for(int j=0; j<m; j++){
		   	if(i==0 || j==0 || i==n-1 || j==m-1){
		   		printf("%3d", arr[i][j]);
			   }
		    }
		    printf("\n");
	    }
    }
}

void dcChinh_phu(){
	if(n==0 || m==0){
		printf("Mang rong. \n");
	}else{
		printf("Duong cheo chinh la: ");
		for(int i=0; i<n; i++){
			printf("%3d", arr[i][i]);
		}
		printf("\nDuong cheo phu la: ");
		for(int i=0; i<n; i++){
			printf("%3d", arr[i][n-1-i]);
		}
	}
	
}

void In_Songuyento(){
    if (n == 0 || m == 0) {
        printf("Mang rong. \n");
    } else {
        printf("Cac so nguyen to trong mang la: \n");
        int foundPrime = -1; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int z= 2; z * z<= arr[i][j]; z++) {
                    if (arr[i][j] % z == 0) {
                        printf("%d ", arr[i][j]);
                        foundPrime = 1;
                    }
				}
            }
        }
        }
        printf("\n");
}


