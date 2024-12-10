#include<stdio.h>

int arr[100];
int number=0;

void displayMenu(){
	printf("\n                  MENU                 \n");
	printf("\n 1. Nhap phan tu va cac gia tri cua phan tu trong mang.\n");
	printf("\n 2. In ra mang vua nhap.\n");
	printf("\n 3. Them mot phan tu vao vi tri chi dinh.\n");
	printf("\n 4. Sua mot phan tu tai vi tri chi dinh.\n");
	printf("\n 5. Xoa mot phan tu tai vi tri chi dinh.\n");
	printf("\n 6. Sap xep cac phan tu.\n");
	printf("\n 7. Tim kiem phan tu nhap vao.\n");
	printf("\n 8. Thoat.\n");
}
int main(){
	int choice;
	do{
		displayMenu();
		printf("\nLua chon cua ban la: ");
    	scanf("%d", &choice);
		switch(choice){
			case 1:
				nhapMang();
			break;
			case 2:
				inMang();
			break;
			case 3:
				themMang();
			break;
			case 4:
				suaMang();
			break;
			case 5:
				xoaMang();
			break;
			case 6:
			break;
			case 7:
			break;
			case 8:
				printf("\nThoat chuong trinh.\n");
				return 0;
			break;
			default:
				printf("\nLua chon khong hop le. Vui long chon lai!\n");
		}
	}while(choice!= 8);
	return 0;
}	
// Khai bao logic ham
void nhapMang(){
	printf("Moi ban nhap so phan tu mang: ");
	scanf("%d", &number);
	if(number<=0 || number>100){
		printf("So phan tu khong hop le.");
	} else {
		printf("Moi ban nhap gia tri cac phan tu.\n"); 
	}
	for(int i=0;i<number;i++){
		printf("Phan tu arr[%d] = ", i+1);
		scanf("%d", &arr[i]);
	}
}

void inMang(){
	printf("Gia tri cac phan tu dang quan ly: ");
	for(int i=0;i<number;i++){
		printf("  arr[%d]=%d  ", i+1 , arr[i]); 
	}
	printf("\n"); 
} 

void themMang(){
	int position, value; 
	printf("Nhap vi tri muon them moi phan tu: ");
	scanf("%d",&position);
	printf("Nhap gia tri muon them moi vao mang: ");
	scanf("%d",&value);
	if(position<0 || position > number){
		printf("Vi tri ban nhap khong hop le\n");
		return; 
	}else {
	    for (int i = number; i > position; i--) {
			arr[i] = arr[i - 1];
		}
		arr[position]=value;
		number++;
	}
	printf("Mnag sau khi them: "); 
	for(int i =0; i<number;i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
} 

void suaMang(){
	int position, value; 
	printf("Nhap vi tri muon sua phan tu: ");
	scanf("%d",&position);
	printf("Nhap gia tri moi vao mang: ");
	scanf("%d",&value);
	if(value<0 || value > number){
		printf("Vi tri ban nhap khong hop le\n");
		return; 
	}
	printf("Mnag sau khi sua: ");
	arr[position]=value; 
	for(int i =0; i<number;i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
} 

void xoaMang(){
	int position; 
	printf("\nNhap vao vi tri ban muon xoa: ");
	scanf("%d", &position);
	if(position <0 || position>number){
		printf("So ban nhap khong hop le. Vui long thu lai!");
	}
	for(int i =position; i<number-1;i++){
		arr[i]=arr[i+1];
	}
	number--;
	printf("Mang sau khi xoa: "); 
	for(int i =0; i<number;i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void sapsepMang(){
	printf("Ban hay lua chon A hoac B\n");
	printf("- A : Giam dan.\n");
	printf("- B : Tang dan.\n");
	printf("Lua chon : ");
	scanf("%c", )
}
