#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
//	int y[100],i,s;
//	
//	for(i=0;i<10;i++){
//		printf("\nNhap y[%d]: ", i);
//		scanf("%d", &y[i]);
//	}
//	s = 0;
//	for(i=0;i<10;i++){
//		s+=y[i];
//	}printf("\nTong cac phan tu = %d",s);
//	s = 0;
//	for(i=0;i<10;i++){
//		if(y[i] % 3 == 0){
//			s += y[i];
//		}
//	}printf("\nTong chia het cho 3 = %d",s);
	//B1
//	int n;
//	printf("\nNhap n: ");
//	scanf("%d",&n);
//	if(n % 2 == 0){
//		printf("\nn la so chan!");
//	}else {
//		printf("\nn la so le!");
//	}
//	
//	if(n % 2 == 0 && n % 7 == 0){
//		printf("\nn la so chia het cho 2 va 7!");
//	} else{
//		printf("\nn khong chia het cho 2 va 7!");
//	}
//	
//	if(n % 1 == 0 && n % n == 0){
//		printf("\nn la so nguyen to!");
//	}else {
//		printf("\nn khong phai la so nguyen to!");
//	}
	//B2
//	int a,b,i;
//	printf("\nNhap a, b: ");
//	scanf("%d%d", &a, &b);
//	int s = 0;
//	if(a < b){
//	for(i=a+1;i<b;i++){
//		s += i;
//		}
//	} else{
//		for(i=b+1;i<a-1;i++){
//			s += i;
//		}
//	}
//	printf("\nTong la  = %d ", s);
//2.2
//	int N,i,j,uoc;
//	printf("\nNhap N : ");
//	scanf("%d",&N);
//	printf("Cac so nguyen to tu 1 den n la:");
//	int s = 0;
//	for(i = 2;i<=N; i++){
//		uoc = 0;
//		for(j = 2;j <= i-1;j++){
//			if(i%j==0){
//				uoc++;
//			}
//		}
//		if(uoc==0){
//			printf("%d ",i);
//			s += i;
//			}
//	}printf("\nTong S = %d",s);
	//B3	
	int t[10], i;
	for(i=0;i<10;i++){
		printf("\nNhap t[%d]: ", i);
		scanf("%d",&t[i]);
	}
	int s = 0;
	for(i=0;i<10;i++){
		s += t[i];
	}
 	printf("\nTong s = %d", s);
 	s = 0;
 	for(i=0;i<10;i++){
 		if(t[i] % 6 == 0){
 			s += t[i];
		 }
	 }printf("\nTong s = %d", t[i]);
	 s = 0;
	 for(i=0;i<10;i++){
	 	if(t[i] % 3 == 0 && t[i] % 7 == 0){
	 		s += t[i];
		 }
	 }printf("\nTong s = %d", s);
	
	int K[10];
	int j, uoc, index = 0;
	for(i = 2;i<10; i++){
		uoc = 0;
		for(j = 2;j < t[i];j++){
			if(t[i]%j==0){
				uoc++;
			}
		}
		if(uoc==0){
				K[index++] = t[i];
			}
	}
	printf("\nDay cac so nguyen to la\n");
	for(i=0;i<index;i++){
		printf("%d ",K[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
