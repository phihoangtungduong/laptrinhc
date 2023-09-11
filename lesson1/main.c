#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	printf("Hello World\n");
	printf("\nHo ten: Phi Hoang Tung Duong\nTuoi: 21\nDia chi: Luong Dinh Cua\nemail: tungduong041102@gmail.com\nsdt: 0869265618\n");
	int a=1,b=2,c=3,d=4,e=5,f=6;
	int x = pow(a,6) + b*c*d + e*f;
	int y = pow(a,3)*pow(b,2) + a*b*d*e*f;
	printf("\nGia tri x = %d, \nGia tri y = %d\n",x,y);
	printf("\n*\n**\n***\n****\n*****");
	printf("\n==============================");
	printf("\n| STT | Ho Ten       | Tuoi |Gioi tinh  |");
	printf("\n| 01  |Nguyen Van A  |20    | Nam       |");
	printf("\n| 01  |Nguyen Van B  |22    | Nam       |");
	printf("\n| 01  |Nguyen Van C  |26    | Nam       |\n");
	d = 10*a*a + 5*b*c + c*c;
	printf("\nGia tri cua d = %d",d);
	return 0;
}
