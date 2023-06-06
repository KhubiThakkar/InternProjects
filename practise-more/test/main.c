#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct element
{
    char name[25];
    char anum[5];
    char symb[3];
    char awgh[10];
    // int neutrons;
    // int protons;
    // int electrons;
    // int period;
    // int group;
    // char phase[10];
    // char ra[5];
    // char nat[5];
    // char metal[5];
    // char nonmetal[5];
    // char metalloid[5];
    // char type[20];
    // float rad;
    // float en;
    // char den[10];
    // float mp;
    // float bp;
    // int iso;
    // char dis[20];
    // int year;
    // int shell;
    // int valence;
} elements;


// void newScreen();
// void clrscr();
// void quit();
// void search();
// void byAtWgh(FILE *f);
// void byAtNum(FILE *f);
// void again();
// void bySym(FILE *f);
// void byName(FILE *f);

int main()
{
    

    char ele[25] = "Hydrogen";
    printf("ENTER THE ELEMENT'S NAME : ");
    // scanf("%s",ele);
  
    FILE *fp = fopen("/home/khubithakkar/practise-more/test/data.csv", "r");
    if (!fp)
    {
        printf("Can't open file\n");
    }
    else
    {
       

        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1024];
        

        int row = 0;
        int column = 0;
        elements atom;
        while (fgets(buffer,1024, fp)) {
            column = 0;
            row++;
            if(row == 1){
                continue;
            }
            char* value = strtok(buffer, ",");
            // while (value) {
            while (column < 4){
            
                // Column 1
                if (column == 0) {
                    strcpy(atom.anum,value);
                }
  
                // Column 2
                if (column == 1) {
                    strcpy(atom.name,value);
                }
  
                // Column 3
                if (column == 2) {
                    strcpy(atom.symb,value);
                }

                if (column == 3)
                {
                    strcpy(atom.awgh,value);
                }
                
                value = strtok(NULL, ",");
                column++;
            }
            printf("%s %s %s %s",atom.name,atom.symb,atom.anum,atom.awgh);
            printf("\n");
            
        }

        // while (fscanf(fp, "%d,%[^,],%[^,],%f",&atom.anum, atom.name,25, atom.symb,3, &atom.awgh) != EOF)
        // {
            
        //     printf("%s\n", atom.name);
        //     printf("%s\n", ele);
        //     if (strcmp(atom.name, ele))
        //     {
        //         printf("\n\n\tELEMENT : %s\n", atom.name);
        //         // printf("3\n");
        //         printf("\n\n\tSYMBOL : %s\n", atom.symb);
        //         // printf("4\n");
        //         printf("\n\n\tATOMIC NUMBER : %d\n", atom.anum);
        //         // printf("5\n");
        //         printf("\n\n\tATOMIC WEIGHT : %f\n", atom.awgh);
        //         // printf("6\n");
        //         break;
        //     }
        // }

        // Close the file
        fclose(fp);

        // while( fscanf(fp,"%s,%d,%s,%f,%d,%d,%d,%d,%d,%s,%s,%s,%s,%s,%s,%s,%f,%f,%s,%f,%f,%d,%s,%d,%d,%d\n",atom.name,&atom.anum,atom.symb,&atom.awgh,&atom.neutrons,&atom.protons,&atom.electrons,&atom.period,&atom.group,atom.phase,atom.ra,atom.nat,atom.metal,atom.nonmetal,atom.metalloid,atom.type,&atom.rad,&atom.en,atom.den,&atom.mp,&atom.bp,&atom.iso,atom.dis,&atom.year,&atom.shell,&atom.valence) > 0){
        //     printf("111\n");
        //     printf("%s,%d,%s,%f,%d,%d,%d,%d,%d,%s,%s,%s,%s,%s,%s,%s,%f,%f,%s,%f,%f,%d,%s,%d,%d,%d\n",atom.name,atom.anum,atom.symb,atom.awgh,atom.neutrons,atom.protons,atom.electrons,atom.period,atom.group,atom.phase,atom.ra,atom.nat,atom.metal,atom.nonmetal,atom.metalloid,atom.type,atom.rad,atom.en,atom.den,atom.mp,atom.bp,atom.iso,atom.dis,atom.year,atom.shell,atom.valence);
        //     printf("1\n");
        //     if (strcmp(atom.name,ele)==0){
        //         printf("2\n");
        //         printf("\n\n\tELEMENT : %s\n",atom.name);
        //         printf("3\n");
        //         printf("\n\n\tSYMBOL : %s\n",atom.symb);
        //         printf("4\n");
        //         printf("\n\n\tATOMIC NUMBER : %d\n",atom.anum);
        //         printf("5\n");
        //         printf("\n\n\tATOMIC WEIGHT : %f\n",atom.awgh);
        //         printf("6\n");
        //         break;
        //     }
        // }
    }
}