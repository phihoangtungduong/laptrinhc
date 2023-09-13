#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a,b,tong,hieu,tich,thuong;
	printf("Nhap so a = ");
	scanf("%f", &a);
	printf("Nhap so b = ");
	scanf("%f", &b);
	printf("\na^2 = %f",pow(a,2));
	printf("\na^3 = %f",pow(a,3));
	printf("\na^4 = %f",pow(a,4));
	tong = a + b;
	hieu = a - b;
	tich = a*b;
	thuong = a/b;
	printf("\nTong la = %f", tong);
	printf("\nHieu la = %f", hieu);
	printf("\nTich la = %f", tich);
	printf("\nThuong la = %f\n", thuong);
	fflush(stdin);
	fflush(stdout);
	int ngay,thang,nam;
	printf("Nhap ngay: ");
	scanf("%02d",&ngay);
	printf("Nhap thang: ");
	scanf("%02d",&thang);
	printf("Nhap nam: ");
	scanf("%04d",&nam);
	printf("Ngay thang nam la: %02d/%02d/%04d",ngay,thang,nam);
	char rollno[16],name[50],address[100];
	int age;
	fflush(stdin);fflush(stdout);
	printf("\nNhap ten: ");
	scanf("%s",&name);
	fflush(stdin);fflush(stdout);
	printf("Nhap tuoi: ");
	scanf("%d",&age);
	fflush(stdin);fflush(stdout);
	printf("Nhap MaSV: ");
	scanf("%s",&rollno);
	fflush(stdin);fflush(stdout);
	printf("Nhap Dia chi: ");
	scanf("%s",&address);
	address = gets();
	printf("\n=================================================");
	printf("\n|Ten    |Tuoi    |MaSV       |Dia chi           |");
	printf("\n=================================================");
	printf("\n|%s              |%d      |%s|%s|",name,age,rollno,address);
	printf("\n=================================================");
	fflush(stdin);fflush(stdout);
	float bankinh,chieudai,chieurong,chuvi,dientich;
	printf("\nNhap chieu dai hcn: ");
	scanf("%f", &chieudai);
	printf("Nhap chieu rong hcn: ");
	scanf("%f", &chieurong);
	chuvi = (chieudai+chieurong)*2;
	dientich = chieudai*chieurong;
	printf("Chu vi HCN = %f",chuvi);
	printf("\nDien tich HCN = %f",dientich);
	printf("\nNhap ban kinh: ");
	scanf("%f", &bankinh);
	chuvi = 2*bankinh*3.14;
	dientich = 3.14*pow(bankinh,2);
	printf("Chu vi hinh tron: %f", chuvi);
	printf("\nDien tich hinh tron: %f",dientich);
 	int n,s;
 	printf("\nNhap n: ");
 	scanf("%d",&n);
 	s = n*(n+1)/2;
 	printf("Tong cua cac so tu 1 toi n la: %d",s);
	
	
	
	return 0;
}
