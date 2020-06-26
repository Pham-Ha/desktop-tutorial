#include <stdio.h>
 
int main(){
	int arr[4];
	int soChanCuoiCung;
	int nsoChanCuoiCung = 0;
    printf("Nhap mang co 4 phan tu: ");
    for(int i = 0;i < 4; i++){
        printf("\nNhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 4; i++) {
    	if (arr[i] % 2 == 0) {
    		soChanCuoiCung = arr[i];
    		nsoChanCuoiCung = nsoChanCuoiCung + 1;
    	}
	}
	if(nsoChanCuoiCung < 1) {
		printf("\nkhong co so chan cuoi cung");
	} else {
		printf("\nsoChanCuoiCung: %d", soChanCuoiCung);
	}
}
