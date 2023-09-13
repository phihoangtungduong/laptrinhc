#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
//B1
//	int a,b,c,d;
//	printf("Nhap a: ");
//	scanf("%d", &a);
//	printf("Nhap b: ");
//	scanf("%d", &b);
//	printf("Nhap c: ");
//	scanf("%d", &c);
//	printf("Nhap d: ");
//	scanf("%d", &d);
//	if(a<=b && a<=c && a<=d){
//		printf("GTNN la: %d",a);
//	}else if(b<=a && b <=c && b<=d){
//		printf("GTNN la: %d",b);
//	}else if(c<=a && c<=b && c<=d){
//		printf("GTNN la: %d",c);
//	}else{
//		printf("GTNN la: %d",d);
//	}
//	if(a>=b && a>=c && a>=d){
//		printf("\nGTLN la: %d",a);
//	}else if(b>=a && b >=c && b>=d){
//		printf("\nGTLN la: %d",b);
//	}else if(c>=a && c>=b && c>=d){
//		printf("\nGTLN la: %d",c);
//	}else{
//		printf("\nGTLN la: %d",d);
//	}



//B2
//	float m,n;
//	printf("\nNhap m: ");
//	scanf("%f",&m);	
//	printf("\nNhap n: ");
//	scanf("%f",&n);	
//	if(m!=0){
//		if(n==0){
//			printf("Phuong trinh vo so nghiem!");
//		}else {
//			printf("Phuong trinh co nghiem x = %f",(-n/m));
//		}
//	}else{
//		printf("Phuong trinh vo nghiem!");
//	}



//B3
//	float x,y,z,delta,x1,x2;
//	printf("\nNhap x: ");
//	scanf("%f",&x);
//	printf("Nhap y: ");
//	scanf("%f",&y);
//	printf("Nhap z: ");
//	scanf("%f",&z);
//	delta = y*y - 4*x*z;
//	x1 = (-y+sqrt(delta))/(2*x);
//  x2 = (-y-sqrt(delta))/(2*x);
//	if(x == 0) {
//        if(y == 0) {
//            if (z == 0) {
//                printf("\nPhuong trinh vo so nghiem");
//            } else {
//                printf("\nPhuong trinh vo nghiem");
//            }
//        } else {
//            printf("\nPhuong trinh co nghiem la: %f\n",-z/y);
//        }
//    } else {
//        if(delta > 0) {
//            printf("\nNghiem x1 = %f",x1);
//            printf("\nNghiem x2 = %f",x2);
//        } else if ( delta == 0) {
//            printf("\nPhuong trinh co nghiem kep: x1 = x2 = %f\n",-y/2*x);
//        } else {
//            printf("\nPhuong trinh vo nghiem\n");
//        }
//    }



//B4
//	int n,i = 1;
//	float tong;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	tong = 0;
	//1
//	while(i<=n){
//		tong = tong + i;
//		i++;
//	}
//	printf("Tong = %f",tong);
//	
//	do{
//		tong = tong + i;
//		i++;
//	}while(i<=n);
//	printf("\nTong = %f",tong);
	//2
//	while(i<=n){
//		tong = tong + i*i;
//		i++;
//	}
//	printf("Tong = %f",tong);
//	do{
//		tong = tong + i*i;
//		i++;
//	}while(i<=n);
//	printf("Tong = %f",tong);
	//3
//	while(i<=n){
//		tong = tong + 1.0 / i;
//		i++;
//	}
//	printf("Tong = %f",tong);
//	do{
//		tong = tong + 1.0 / i;
//		i++;
//	}while(i<=n);
//	printf("Tong = %f",tong);
	//4
//	while(i<=n){
//		tong = tong + 1.0 / (2*i);
//		i++;
//	}
//	printf("Tong = %f",tong);
//	do{
//		tong = tong + 1.0 / (2*i);
//		i++;
//	}while(i<=n);
//	printf("Tong = %f",tong);
	//5
//	while(i<=n){
//		tong = tong + 1.0 / (2*i - 1);
//		i++;
//	}
//	printf("Tong = %f",tong);
//	do{
//		tong = tong + 1.0 / (2*i - 1);
//		i++;
//	}while(i<=n);
//	printf("Tong = %f",tong);




//B5
//	int a1, b1, c1, a2, b2, c2;
//    float D, Dx, Dy, x, y;
//    printf("a1*x + b1*y = c1\n");
//    printf("a2*x + b2*y = c2\n");
//    printf("\nNhap a1: "); 
//	scanf("%d", &a1);
//    printf("\nNhap b1: "); 
//	scanf("%d", &b1);
//    printf("\nNhap c1: "); 
//	scanf("%d", &c1);
//    printf("\nNhap a2: "); 
//	scanf("%d", &a2);
//    printf("\nNhap b2: "); 
//	scanf("%d", &b2);
//    printf("\nNhap c2: "); 
//	scanf("%d", &c2);
//    D = a1 * b2 - a2 * b1;
//    Dx = c1 * b2 - c2 * b1;
//    Dy = a1 * c2 - a2 * c1;
//    if (D == 0) {
//        if (Dx + Dy == 0)
//            printf("He phuong trinh co vo so nghiem");
//        else
//            printf("He phuong trinh vo nghiem");
//    }
//    else {
//        x = Dx / D;
//        y = Dy / D;
//        printf("He phuong trinh co nghiem (x, y) = (%f, %f)", x, y);
//    }
	return 0;
}
