#include <stdio.h>
int main(){
	int a, b, c;
	printf("Nhap so A: "); //in ra man hinh chuoi: Nhap vao so a
	scanf("%d", &a); //nhap vao so a
	printf("Nhap so B: ");
	scanf("%d", &b);
	printf("Nhap so C: ");
	scanf("%d", &c);
	if(a < b){//xet dieu kien a< b
		if(a < c){
			printf("min A");
		}else{//ngc lai dieu kien a < c
			printf("min C");
		}
	}else{
		if(b < c){
			printf("min B");
		}else{
			printf("min C");
		}
		
	}
	
	
}


