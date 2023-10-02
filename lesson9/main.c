#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ls9.h"

int main(int argc, char *argv[]) {
	int choose;
	do{
		showMenu();
		scanf("%d", &choose);
		switch (choose){
			case 1: {
				input();
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {
				
				
				break;
			}
			case 6: {
				printf("\nThoat!");
				break;
			}
			default: {
				printf("\nNhap sai!");
				break;
			}
		}
	}while(choose != 6);
	
	return 0;
}
