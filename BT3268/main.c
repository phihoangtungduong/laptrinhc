#include <stdio.h>
#include <stdlib.h>
#include "bt.h"

int main(int argc, char *argv[]) {
	int choose;
	do{
		showMenu();
		fflush(stdin); fflush(stdout);
		scanf("%d", &choose);
		
		switch(choose){
			case 1: {
				input();
				break;
			}
			case 2: {
				factorial();
				break;
			}
			case 3: {
				sum();
				break;
			}
			case 4: {
				compare();
				break;
			}
			case 5: {
				printf("\nThoat");
				break;
			}
			default: {
				printf("\nNhap sai!");
				break;
			}
			
		}
		
	}while(choose != 5);
	
	return 0;
}
