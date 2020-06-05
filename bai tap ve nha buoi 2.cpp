#include <stdio.h>
int main(){
	int a, b, c;
	printf("nhap so A: ");
	scanf("%d", &a);
	printf("nhap so B: ");
	scanf("%d", &b);
	printf("nhap so C: ");
	scanf("%d", &c);
	if (a > b) {
		if(a>c){
			printf("max A");
		
		} else {
			printf("mac C");
		}
	} else {
		if(b > c){
			printf("max B");
		} else {
			printf("max C");
		}
	}	
	
	
}

