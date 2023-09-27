#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ST_HCN{
	float dientich, chieudai, chieurong;
} HCN;

void rectangle(){
	HCN hcnList[5];
	int i;
	float s = 0;
	for(i=0;i<5;i++){
		printf("\nNhap thong tin hinh chu nhat %d: ", i + 1);
		printf("\nNhap chieu dai: ");
		scanf("%f", &hcnList[i].chieudai);
		printf("\nNhap chieu rong: ");
		scanf("%f", &hcnList[i].chieurong);
		
		hcnList[i].dientich = hcnList[i].chieudai*hcnList[i].chieurong;
		
		s += hcnList[i].dientich;
		
	}
	for(i=0;i<5;i++){
		printf("\nThong tin HCN:Chieu dai = %0.2f, Chieu rong = %0.2f, Dien tich = %0.2f",hcnList[i].chieudai,hcnList[i].chieurong, hcnList[i].dientich);
	}printf("\nTong cua Dien tich cac HCN la: %0.2f", s);
	
}

void bai1(){
	int N[5], i, j, s = 0;
	for(i=0; i<5; i++){
		printf("\nNhap so nguyen: ");
		scanf("%d", &N[i]);
		if(N[i] % 5 == 0){
			s += N[i];
		}
	}printf("\nTong cac phan tu chia het cho 5 = %d", s);
	for(i=0; i<5; i++){
		printf("\nSo chinh phuong la: %d", N[i]*N[i]);
	}
	printf("\nMang duoc sap xep la: ");
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(N[i] % 2 != 0){
		  		int t = N[i];
		 		N[i] = N[j];
		  		N[j] = t;
			}
		}
	}	
	for(i=0;i<5;i++){
		printf("%d ",N[i]);
	}		
}
typedef struct ST_Student{
	char name[50], rollno[50];
	int age;
} Student;

void bai2(){
	int N,i;
	printf("\nNhap so sinh vien: ");
	scanf("%d", &N);
	Student studentList[100];
	for(i=0;i<N;i++){
		printf("\nNhap thong tin sinh vien %d: ",i + 1);
		printf("\nNhap ten sinh vien: ");
		fflush(stdin);fflush(stdout);
		gets(studentList[i].name);
		printf("\nNhap ma SV: ");
		fflush(stdin);fflush(stdout);
		gets(studentList[i].rollno);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&studentList[i].age);
	}
	printf("\nHien thi thong tin sinh vien: ");
	for(i=0;i<N;i++){
		printf("\nTen: %s, Ma SV: %s, Tuoi: %d\n",studentList[i].name,studentList[i].rollno,studentList[i].age);
	}
	printf("\nSinh vien co so tuoi la so chinh phuong: ");
	for(i=0;i<N;i++){
		if(sqrt(studentList[i].age)*sqrt(studentList[i].age) == studentList[i].age ){
			printf("\nTen sinh vien la: %s",studentList[i].name);
			fflush(stdin);fflush(stdout);
			printf("\nMa SV la: %s",studentList[i].rollno);
			fflush(stdin);fflush(stdout);
			printf("\nTuoi la: %d", studentList[i].age);
			fflush(stdin);fflush(stdout);
		}
	}
}



