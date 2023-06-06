/**
 * @file elements.h
 * @author Khubi Thakkar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __heading_h__		// if not defined only then define the header
#define __heading_h__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * @brief Structure to save the data about the element fetched from the .csv file
 * 
 */
typedef struct element{
		/// name
		char name[25];	
		/// atomic number
		char anum[4];	
		/// symbol
		char symb[3];	
		/// atomic weight
		char awgh[6];	
		/// number of neutrons
		char neutrons[3];	
		/// number of protons
		char protons[3];
		/// number of electrons	
		char electrons[3];	
		/// period of element
		char period[3];		
		/// group of element
		char group[3];	
		/// phase of element	
		char phase[10];		
		/// radioactive
		char ra[5];		
		/// naturally occuring	
		char nat[5];		
		/// metallic nature
		char metal[5];		
		/// non metallic nature
		char nonmetal[5];	
		/// metalloid nature
		char metalloid[5];	
		/// type of element
		char type[20];		
		/// atomic radius
		char rad[5];		
		/// first ionization
		char ion[10];		
		/// electronegativity
		char en[5];			
		/// density
		char den[10];		
		/// melting point
		char mp[10];		
		/// boiling point
		char bp[10];		
		/// number of isotopes
		char iso[3];		
		///	discoverer
		char dis[20];		
		/// year of discovery
		char year[4];		
		/// specific heat
		char heat[7];		
		/// number of shells
		char shell[2];		
		/// number of valence
		char valence[2];	
	    }elements;

/**
 * @brief variable atom of structure elements used in the program to extract the data form .csv file
 * 
 */
elements atom;
int i;

// All the functions used in the project
/**
 * @brief function to set up a New display screen
 * 
 */
void newScreen();


/**
 * @brief main function
 * 
 * @return int 
 */
int main();

/**
 * @brief function to quit the system
 * 
 */
void quit();

/**
 * @brief function to select the search the element by: name OR symbol OR atomic number
 * 
 */
void search();

/**
 * @brief function to repeat the process of searching
 * 
 */
void again();

/**
 * @brief function to search element by Atomic Number
 * 
 * @param FILE *f 
 * @param char *ele 
 * @return int 
 */
int byAtNum(FILE *f, char *ele);

/**
 * @brief function to search element by Symbol
 * 
 * @param FILE *f 
 * @param char *ele 
 * @return int 
 */
int bySym(FILE *f,char *ele);

/**
 * @brief function to search element by Name
 * 
 * @param FILE *f 
 * @param char *ele 
 * @return int 
 */
int byName(FILE *f,char *ele);

#endif