#include <stdio.h>

float average(int s[], int n) {
	int total;
	float average;
	for(int i = 0;i < n; i++) {
		total = total + s[i];
    }
    average = (float) total / n;
    printf("Trung binh cong la: %.1f", average);
}

int main(){
	int max = 5; 
	int s[max];
    printf("Nhap mang co %d phan tu\n", max);
    for(int i = 0;i < max; i++){
        scanf("%d", &s[i]);
    }
    average(s, max);
}
