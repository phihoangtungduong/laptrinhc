#include <stdio.h>
#include <stdlib.h>

int N;

void showMenu(){
	printf("\n1. Nhap N");
	printf("\n2. Tinh N!");
	printf("\n3. Tinh tong tu 1 -> N");
	printf("\n4. So sanh N! va Tong 1- > N");
	printf("\n5. Thoat");
	printf("\nChon: ");
	
}

void input(){
	printf("\nNhap N: ");
	scanf("%d",&N);
}

void factorial(){
	int i,giaithua = 1;
	for(i=1;i<=N;i++){
		giaithua *= i;
	}
	printf("\nGiai thua cua %d! = %d\n",N,giaithua);
}

void sum(){
	int i, s = 0;
	for(i=1;i<=N;i++) {
		s += i;
	}
	printf("\nTong 1 -> %d = %d\n", N, s);
}

void compare(){
	int i,giaithua = 1;
	for(i=1;i<=N;i++){
		giaithua *= i;
	}
	int s = 0;
	for(i=1;i<=N;i++) {
		s += i;
	}
	if(giaithua < s){
		printf("\nTong N! < Tong 1 -> N!\n");
	}else if (giaithua = s) {
		printf("\nTong N! = Tong 1 -> N\n");
	}else {
		printf("\nTong N! > Tong 1 -> N\n");
	}
}





