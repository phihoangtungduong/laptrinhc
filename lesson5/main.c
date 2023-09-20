#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
//	int m[5][4], i, j;
//	for(i=0;i<5;i++){
//		for(j=0;j<4;j++){
//			printf("Nhap m[%d][%d]: ",i,j);
//			scanf("%d",&m[i][j]);
//		}
//	}
//	for(i=0;i<5;i++){
//		for(j=0;j<4;j++){
//			printf("\nNhap m[%d][%d] = %d ",i,j,m[i][j]);
//		}
//	}
//	printf("\nNhap theo kieu ma tran: ");
//	for(i=0;i<5;i++){
//		for(j=0;j<4;j++){
//			printf("%d ",m[i][j]);
//			}
//			printf("\n");		
//	}
	char str[100];
	printf("\nNhap chuoi str: ");
	gets(str);
	printf("\n%s",&str);
	char s1[50] = "Hello ";
	char s2[50] = "World";
	//Cau 1: Lam sao de noi 2 chuoi s1, s2 lai thanh: Hello World
	strcat(s1, s2);
	printf("\n%s", s1);
	printf("\n%s", s2);
	*/
	//sort by: ung dung mang khi hoc structure (bai so structure)
	char s1[3] = "abc";
	char s2[50] = "Xin Chao";
	//cmp = 0 -> s1 & s2: giong nhau
	//cmp = -1 -> s2 xep sau chuoi s1
	//cmp = 1 -> s2 dung truoc chuoi s1
	int cmp = strcmp(s1, s2);
	printf("\nCMP = %d", cmp);
	
	//Lay do dai thuc te cua s1 va s2
	printf("\nDo dai s1 = %d", strlen(s1));
	
	//sao chep noi dung s2 -> sang -> s1: Phep gan string
	strcpy(s1, s2);
	printf("\n%s", s1);
	
	return 0;
}
