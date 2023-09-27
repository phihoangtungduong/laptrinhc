#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ST_SinhVien {
	char name[50], rollno[20];
	int age;
} SinhVien;

SinhVien *p;
int total = 0;

void showMenu();
void input();
void display();
void sort();

int main(int argc, char *argv[]) {
	/**int n, i;
	printf("\nNhap so sinh vien can them: ");
	scanf("%d", &n);
	
	SinhVien stdList[n];
	
	for(i=0;i<n;i++) {
		printf("\nNhap ten: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].name);
		printf("\nNhap msv: ");
		fflush(stdin);fflush(stdout);
		gets(stdList[i].rollno);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &stdList[i].age);
	}
	
	printf("\nHien thi thong tin sinh vien");
	for(i=0;i<n;i++) {
		printf("\nTen: %s, msv: %s, tuoi: %d", stdList[i].name, stdList[i].rollno, stdList[i].age);
	}
	*/
	SinhVien sv;
	printf("\nNhap ten: ");
	fflush(stdin);fflush(stdout);
	gets(sv.name);
	printf("\nNhap msv: ");
	fflush(stdin);fflush(stdout);
	gets(sv.rollno);
	printf("\nNhap tuoi: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &sv.age);
	
	printf("\nTen: %s, msv: %s, tuoi: %d", sv.name, sv.rollno, sv.age);
	
	SinhVien *q;
	q = &sv;
	
	printf("\nTen: %s, msv: %s, tuoi: %d", q->name, q->rollno, q->age);
	
	//De bai: khai bao mang sinh vien p
	//Yeu cau: Xay dung menu
	//1. Them N sinh vien
	//2. Hien thi thong tin sinh vien
	//3. Sap xep theo ten A-Z
	//4. Thoat
	/**int choose;
	
	do {
		showMenu();
		scanf("%d", &choose);
		
		switch(choose) {
			case 1: {
				input();
				break;
			}
			case 2: {
				display();
				break;
			}
			case 3: {
				sort();
				break;
			}
			case 4: {
				printf("\nThoat!!!");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	} while(choose != 4);
	*/
	return 0;
}

void showMenu() {
	printf("\n1. Them N sinh vien");
	printf("\n2. Hien thi");
	printf("\n3. Sap xep");
	printf("\n4. Thoat");
	printf("\nChon: ");
}

void input() {
	int i, n;
	printf("\nNhap so phan tu can them: ");
	scanf("%d", &n);
	if(total == 0) {
		p = (SinhVien *) calloc (n, sizeof(SinhVien));
	} else {
		p = (SinhVien *) realloc(p, (total + n) * sizeof(SinhVien));
	}
	for(i=total;i<total + n;i++) {
		printf("\nNhap ten: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].name);
		printf("\nNhap msv: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].rollno);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &p[i].age);
	}
	total += n;
}

void display() {
	int i;
	printf("\nHien thi thong tin sinh vien");
	for(i=0;i<total;i++) {
		printf("\nTen: %s, msv: %s, tuoi: %d", p[i].name, p[i].rollno, p[i].age);
	}
}

void sort() {
	int i, j, cmp;
	SinhVien tmp;
	
	for(i=0;i<total - 1;i++) {
		for(j=i+1;j<total;j++) {
			//name: string (go gi cung dc)
			cmp = strcmp(p[i].name, p[j].name);
			if(cmp > 0) {
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	
	display();
}
