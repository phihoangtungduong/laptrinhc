#include <stdio.h>
#include <stdlib.h>

int total = 0, *t;

void showMenu() {
	printf("\n1. Nhap them N phan tu");
	printf("\n2. Hien thi");
	printf("\n3. Tinh tong");
	printf("\n4. Sap xep");
	printf("\n5. Thoat");
	printf("\nChon: ");
}

void input() {
	int n, i;
	printf("\nNhap so phan tu can them: ");
	scanf("%d", &n);
	if (total == 0) {
		t = (int *) calloc(n, sizeof(int));
	} else {
		t = (int *) realloc(t, (total + n) * sizeof(int));
	}
	for(i=total;i<total + n;i++) {
		printf("\nNhap phan tu t[%d] = ", i);
		scanf("%d", t + i);
	}
	total += n;
}

void display() {
	int i;
	printf("\nDanh sach cac phan tu trong mang\n");
	for(i=0;i<total;i++) {
		printf("%d ", t[i]);
	}
	printf("\n");
}

void sum() {
	int s = 0, i;
	for(i=0;i<total;i++) {
		s += t[i];
	}
	printf("\nTong cac phan tu trong mang: %d", s);
}

void sort() {
	int i, j, n;
	for(i=0;i<total-1;i++) {
		for(j=i+1;j<total;j++) {
			if(t[i] > t[j]) {
				n = t[i];
				t[i] = t[j];
				t[j] = n;
			}
		}
	}
	printf("\nSap xep hoan thanh");
}
