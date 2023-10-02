#include <stdio.h>
#include <stdlib.h>

typedef struct ST_Cinema{
	char name[25], address[35];
	int seats;
}cinema;

cinema *p;
int total;
cinema cinemaList[4];


void showMenu(){
	printf("\n1. Nhap du lieu quan ly danh sach rap chieu phim");
	printf("\n2. Hien thi danh sach rap");
	printf("\n3. Tim rap");
	printf("\n4. Luu du lieu");
	printf("\n5. Doc du lieu");
	printf("\n6. Thoat");
	printf("\nChon: ");
}

void input() {
	int i;
	for(i=0;i<4;i++) {
		printf("\nNhap ten rap chieu phim thu %d: ", i+1);
		fflush(stdin);fflush(stdout);
		gets(p[i].name);
		
		printf("\nNhap dia chi rap: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].address);
		
		printf("\nNhap so ghe: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &p[i].seats);
	}
}





