#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Cinema_ST {
	char name[25], address[35];
	int seats;
} Cinema;

void showMenu();
void input(Cinema *p);
void sort(Cinema *p);
void display(Cinema *p);
void drawLine();
void search(Cinema *p);
void saveFile(Cinema *p);
void readFile(Cinema *p);

int main(int argc, char *argv[]) {
	//Khai bao mang struct
	Cinema cinemaList[4];
	int choose;
	
	//Kien thuc moi
	//Tim hieu cau truc
	/**Cinema cinema;
	Cinema *p = &cinema;
	
	printf("\nTen rap chieu phim: ");
	fflush(stdin); fflush(stdout);
	gets(cinema.name);
	
	printf("\nTen: %s", cinema.name);
	printf("\nTen: %s", p->name);
	
	p = cinemaList;
	printf("\nTen rap chieu phim 1: ");
	fflush(stdin); fflush(stdout);
	gets(cinemaList[0].name);
	printf("\nDia chi: ");
	fflush(stdin); fflush(stdout);
	gets(p[0].address);
	printf("\nSo ghe: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &p->seats);
	
	printf("\nTen rap chieu phim 2: ");
	fflush(stdin); fflush(stdout);
	gets((p+1)->name);
	printf("\nDia chi: ");
	fflush(stdin); fflush(stdout);
	gets((cinemaList + 1)->address);
	
	printf("\nTen: %s, %s, %d", cinemaList[0].name, cinemaList[0].address, cinemaList[0].seats);
	printf("\nTen: %s, %s, %d", p[0].name, p[0].address, p[0].seats);
	printf("\nTen: %s, %s, %d", p->name, p->address, p->seats);
	
	Cinema *q;
	q = (Cinema *) malloc (5 * sizeof(Cinema));//Luu y => cap phat bo nho.
	
	//Luu du lieu
	*/
	
	do {
		showMenu();
		scanf("%d", &choose);
		
		switch(choose) {
			case 1:
				input(cinemaList);
				break;
			case 2:
				sort(cinemaList);
				display(cinemaList);
				break;
			case 3:
				search(cinemaList);
				break;
			case 4:
				saveFile(cinemaList);
				break;
			case 5:
				readFile(cinemaList);
				break;
			case 6:
				printf("\nGoodbye!!!");
				break;
			default:
				printf("\nNhap sai!!!");
				break;
		}
	} while(choose != 6);
	
	return 0;
}

void showMenu() {
	printf("\n1. Nhap du lieu");
	printf("\n2. Hien thi");
	printf("\n3. Tim theo so ghe nho nhat");
	printf("\n4. Luu");
	printf("\n5. Doc du lieu");
	printf("\n6. Thoat");
	printf("\nChon: ");
}

void input(Cinema *p) {
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

void sort(Cinema *p) {
	int i, j, cmp;
	
	for(i=0;i<3;i++) {
		for(j=i+1;j<4;j++) {
			cmp = strcmp(p[i].name, p[j].name);
			if(cmp > 0) {
				//swap
				Cinema tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}

void display(Cinema *p) {
	int i;
	drawLine();
	printf("\n|%-20s|%-20s|%-10s|", "Name", "Address", "Seats");
	drawLine();
	for(i=0;i<4;i++) {
		printf("\n|%-20s|%-20s|%-10d|", p[i].name, p[i].address, p[i].seats);
		drawLine();
	}
}

void drawLine() {
	int i;
	printf("\n");
	for(i=0;i<54;i++) {
		printf("-");
	}
}

void search(Cinema *p) {
	printf("\nNhap so ghe toi thieu can tim: ");
	int seats, count = 0, i;
	scanf("%d", &seats);
	
	for(i=0;i<4;i++) {
		if(p[i].seats >= seats) {
			//tim thay 1 rap chieu phim phu hop
			if(count == 0) {
				drawLine();
				printf("\n|%-20s|%-20s|%-10s|", "Name", "Address", "Seats");
				drawLine();
			}
			count++;
			printf("\n|%-20s|%-20s|%-10d|", p[i].name, p[i].address, p[i].seats);
			drawLine();
		}
	}
	
	if(count == 0) {
		printf("\nKhong co rap nao phu hop");
	}
}

void saveFile(Cinema *p) {
	//Luu duoi dang file -> binary
	//B1. Mo ket noi toi File
	FILE *fp = fopen("cinema.dat", "wb");
	
	//B2. Luu du lieu
	fwrite(p, sizeof(Cinema), 4, fp);
	
	//B3. Dong ket noi
	fclose(fp);
	
	//Luu duoi dang file -> text
	//B1. Mo ket noi toi File
//	FILE *fp = fopen("cinema.txt", "a");
	/**FILE *fp = fopen("cinema.txt", "w");
	
	//B2. Luu du lieu
	int i = 0;
	fputs("Nam,Address,Seats", fp);
	for(i=0;i<4;i++) {
		fprintf(fp, "\n%s,%s,%d", p[i].name, p[i].address, p[i].seats);
	}
	fputs("\n", fp);
	//B3. Dong ket noi
	fclose(fp);*/
}


void readFile(Cinema *p) {
	//Luu duoi dang file -> binary
	//B1. Mo ket noi toi File
	FILE *fp = fopen("cinema.dat", "rb");
	
	//B2. Luu du lieu
	fread(p, sizeof(Cinema), 4, fp);
	
	//B3. Dong ket noi
	fclose(fp);
	
	/**FILE *fp = fopen("cinema.txt", "r");
	
	//B2. Luu du lieu
	char str[100];
	fgets(str, 100, fp);
	puts(str);
	printf("\nLength: %d", strlen(str));
	
	//B3. Dong ket noi
	fclose(fp);*/
}
