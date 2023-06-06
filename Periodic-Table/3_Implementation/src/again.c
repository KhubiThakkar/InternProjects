#include "elements.h"

/**
 * @brief Function to enter if the process of searching needs to be repeated
 * 
 */
void again() {
	char ans1[5];
	printf("\n\nSEARCH FOR A DIFFERENT ELEMENT? : ");
	scanf("%s",ans1);
	if (tolower(ans1[0])=='y'){	// convert the first letter of the input to lower case
		search();
	} else {
		quit();
	}
	printf("\n\n");
}