#include "elements.h"

/**
 * @brief Function to input based on which parameter: name, symbol, atomic number the searching is to be 
 * done
 */
void search() {
    char ele[20];
	newScreen();
	printf("SREACH BY :- \n\n");
	printf("\t1 -> NAME\n");
	printf("\t2 -> SYMBOL\n");
	printf("\t3 -> ATOMIC NUMBER\n\n");
	int choice2;
	printf("YOUR CHOICE : ");
	scanf("%d",&choice2);
    /// pointer to the data.csv file
    FILE *fp = fopen("./src/data.csv", "r");    
    if (!fp){       // if fopen is not successful
        printf("Can't open file\n");
    }else{          // if fopen is successful
        if (choice2==1){    // to search by name
            printf("ENTER THE ELEMENT'S NAME : ");
            scanf("%s",ele);
            byName(fp,ele);
            again();
        } else if (choice2==2){     // to search by symbol
            printf("ENTER THE ELEMENT'S SYMBOL : ");
            scanf("%s",ele);
            bySym(fp,ele);
            again();
        } else if (choice2==3){     // to search by atomic number
            printf("ENTER THE ELEMENT'S ATOMIC NUMBER : ");
            scanf("%s",ele);
            byAtNum(fp,ele);
            again();
        } else {        // for incorrect entry
            search();
        }
    }
}