#include "elements.h"

/**
 * @brief Function to search the .csv file using "atomic number" of element
 * 
 * @param fp 
 * @param ele 
 * @return int 
 */
int byAtNum(FILE *fp,char *ele){
	newScreen();

    char buffer[1024];
    int row = 0;        // row in the file
    int column = 0;     // column in the file

    while (fgets(buffer,1024, fp)) {    // to read the file
        column = 0;
        row++;
        if(row == 1){
            continue;
        }
        char* value = strtok(buffer, ",");     // seperate from the delimiter 
        while (value) {
        
            // Column 1
            if (column == 0) {
                strcpy(atom.anum,value);        // copy the string to the structure
            }

            // Column 2
            else if (column == 1) {
                strcpy(atom.name,value);
            }

            // Column 3
            else if (column == 2) {
                strcpy(atom.symb,value);
            }
            // Column 4
            else if (column == 3)
            {
                strcpy(atom.awgh,value);
            }
            else if (column == 4)
            {
                strcpy(atom.neutrons,value);
            }
            else if (column == 5)
            {
                strcpy(atom.protons,value);
            }
            else if (column == 6)
            {
                strcpy(atom.electrons,value);
            }
            else if (column == 7)
            {
                strcpy(atom.period,value);
            }
            else if (column == 8)
            {
                strcpy(atom.group,value);
            }
            else if (column == 9)
            {
                strcpy(atom.phase,value);
            }
            else if (column == 10)
            {
                strcpy(atom.ra,value);
            }
            else if (column == 11)
            {
                strcpy(atom.nat,value);
            }
            else if (column == 12)
            {
                strcpy(atom.metal,value);
            }
            else if (column == 13)
            {
                strcpy(atom.nonmetal,value);
            }
            else if (column == 14)
            {
                strcpy(atom.metalloid,value);
            }
            else if (column == 15)
            {
                strcpy(atom.type,value);
            }
            else if (column == 16)
            {
                strcpy(atom.rad,value);
            }
            else if (column == 17)
            {
                strcpy(atom.en,value);
            }
            else if (column == 18)
            {
                strcpy(atom.ion,value);
            }
            else if (column == 19)
            {
                strcpy(atom.den,value);
            }
            else if (column == 20)
            {
                strcpy(atom.mp,value);
            }
            else if (column == 21)
            {
                strcpy(atom.bp,value);
            }
            else if (column == 22)
            {
                strcpy(atom.iso,value);
            }
            else if (column == 23)
            {
                strcpy(atom.dis,value);
            }
            else if (column == 24)
            {
                strcpy(atom.year,value);
            }
            else if (column == 25)
            {
                strcpy(atom.heat,value);
            }
            else if (column == 26)
            {
                strcpy(atom.shell,value);
            }
            else
            {
                strcpy(atom.valence,value);
            }
            
            value = strtok(NULL, ",");  // check if that is end of column
            column++;
        }
        if(strcmp(atom.anum,ele) == 0)  // compare the string values, if they are same
        {
            printf("\n");
            printf(" Name: %s\n Atomic Number: %s\n Symbol: %s\n Atomic Weight: %s\n Neutrons: %s\n Protons: %s\n Electrons: %s\n Period: %s\n Group: %s\n Phase: %s\n Radioactive: %s\n Natural: %s\n Metal: %s\n Nonmetal: %s\n Metalloid: %s\n Type: %s\n Atomic Radius: %s\n Electronegativity: %s\n Ionization: %s\n Density: %s\n Melting point: %s\n Boiling point: %s\n Isotopes: %s\n Discoverer: %s\n Year: %s\n Specific Heat: %s\n Shell: %s\n Valence Electrons: %s\n",atom.name,atom.anum,atom.symb,atom.awgh,atom.neutrons,atom.protons,atom.electrons,atom.period,atom.group,atom.phase,atom.ra,atom.nat,atom.metal,atom.nonmetal,atom.metalloid,atom.type,atom.rad,atom.en,atom.ion,atom.den,atom.mp,atom.bp,atom.iso,atom.dis,atom.year,atom.heat,atom.shell,atom.valence);
            fclose(fp); // close the file
            return 0;
        }else if(row == 119)    // if the element is not in the file
        {
            fclose(fp);
            printf("Match not found.\n Make sure you are entering an integer value.\n");
            return 1;
        }     
    }
    
}