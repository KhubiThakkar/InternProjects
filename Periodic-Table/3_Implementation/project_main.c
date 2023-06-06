/**
 * @file project_main.c
 * @author Khubi Thakkar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "elements.h"

int main() {
	newScreen();
	printf("1 -> EXPLORE\n");
	printf("2 -> QUIT\n\n\n\n");
	/// The variable for the function to perform: search OR quit OR main
	int choice1;	
	printf("YOUR CHOICE : ");
	scanf("%d",&choice1);
	if (choice1==1){
		search();
	} else if (choice1==2){
		quit();
	} else {
		main();
	}
	return 0;
}