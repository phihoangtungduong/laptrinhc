#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//typedef struct ST_infor{
//	char name[50], address[50], email[50];
//	int age,sdt;
//} INFOR;

void infor1(); 

int main(int argc, char *argv[]) {
	infor1();
	return 0;
}

 
void infor1() { 
	char name[50] , address[50], email[50], age[50], sdt[50];
	printf("\nNhap ten: ");
	fflush(stdin);fflush(stdout);
	gets(name);
	printf("\nNhap dia chi: ");
	fflush(stdin);fflush(stdout);
	gets(address);
	printf("\nNhap email: ");
	fflush(stdin);fflush(stdout);
	gets(email);
	printf("\nNhap tuoi: ");
	fflush(stdin);fflush(stdout);
	gets(age);
	printf("\nNhap sdt: ");
	fflush(stdin);fflush(stdout);
	gets(sdt);
	
	
	printf("\nTen: %s, Dia chi: %s, Email: %s, Tuoi: %s, SDT: %s", name, address, email, age, sdt);
	
	
	
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("thongtin.txt", "a");

		//B3. Ghi noi dung vao file
	fputs("\n",fp);
	fputs(name, fp);
	fputs("\n",fp);
	fputs(address, fp);
	fputs("\n",fp);
	fputs(email, fp);
	fputs("\n",fp);
	fputs(age, fp);
	fputs("\n",fp);
	fputs(sdt, fp);
	
	
	//B4. Dong file
	fclose(fp);
}
