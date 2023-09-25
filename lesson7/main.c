#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tinhtong(float a, float b ){
	float tong = 0;
	tong = a + b;
	printf("\nTong = %f",tong);
}
void tinhhieu(float a, float b ){
	float hieu = 0;
	hieu = a - b;
	printf("\nHieu = %f",hieu);
}
void tinhtich(float a, float b ){
	float tich = 0;
	tich = a*b;
	printf("\nTich = %f",tich);
}
void tinhthuong(float a, float b ){
	float thuong = 0;
	thuong = a/b;
	printf("\nThuong = %f",thuong);	
}
void ShowInFor(char name[100],int age,char address[100],char email[100],int sdt){
	printf("\nNhap ten: "); 
	gets(name);
	printf("\nTuoi: ");
	scanf("%d",&age);
	printf("\nNhap dia chi: ");
	fflush(stdin);fflush(stdout);
	gets(address);
	printf("\nNhap email: ");
	gets(email);
	printf("\nSDT: ");
	scanf("%d",&sdt);
	fflush(stdin);
	fflush(stdout);
}
void showMessage(int msg){
	printf("\nHello msg!");
}
void giaithua(int n){
	int i,tinhgiaithua = 1;
	for(i=1;i<=n;i++){
		tinhgiaithua *= i;
	}
	printf("\nGiai thua cua %d! = %d",n,tinhgiaithua);
}
void tinhtongdenN(int N) {
	int i, sum = 0;
	for(i=1;i<=N;i++) {
		sum += i;
	}
	printf("\nTong 1 -> %d: %d", N, sum);
}
//int sosanh(int ss){
//	return ss;
//}
void arr(char str[50]){
	int length = strlen(str);
	int i;
	for(i=0;i<length;i++){
		printf("\n%c",str[i]);
	}
}
int main(int argc, char *argv[]) {
//	float a, b;
	char name[100], address[100], email[100];
	int age,sdt;
//	printf("\nNhap a va b: ");
//	scanf("%f%f",&a, &b);
//	tinhtong(a,b);
//	tinhhieu(a,b);
//	tinhtich(a,b);
//	tinhthuong(a,b);
	ShowInFor(name,age,address,email,sdt);
//	int msg;
//	showMessage(1);
//	showMessage(2);
//	showMessage(3);
//	int n,N;
//	printf("\nNhap n: ");
//	scanf("%d",&n);
//	giaithua(n);
//	giaithua(5);
//	printf("\nNhap N: ");
//	scanf("%d",&N);
//	tinhtongdenN(N);
//	tinhtongdenN(10);
//	int s1 = giaithua(5);
//	int s2 = tinhtongdenN(10);
//	if(s1 < s2){
//		printf("\ngiaithua(5) < tinhtongdenN(10)");
//	}else {
//		printf("\ngiaithua(5) > tinhtongdenN(10)");
//	}
//	char s1[50] = "Hello ";
//	char s2[50] = "World";
//	strcat(s1, s2);
//	printf("\n%s", s1);
	char str[50];
	printf("\nNhap str: ");
	gets(str);
//	int length = strlen(str);
//	int i;
//	for(i=0;i<length;i++){
//		printf("\n%c",str[i]);
//	}
	arr(str);
	return 0;
}
