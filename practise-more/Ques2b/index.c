/**
 * @file index.c
 * @author Khubi Thakkar (you@domain.com)
 * @brief To arrange the data in CSV file in an array of structure
 * alphabetically
 * @version 0.1
 * @date 2021-04-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief The structure is for every row in the CSV file
 * It has data of Name, Email ID, GitHub Link
 */
typedef struct info_t {
    char* name;
    char* email_id;
    char* git_link;
} info_t;

/**
 * @brief Function used to sort the data according to the values defined inside
 * 
 * @param p pointer of void data type
 * @param q pinter of void data type
 * @return int 
 */
int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name,((info_t*)q)->name);
}

int main(){
    int size = 4;
    FILE* fp = fopen("/home/khubithakkar/practise-more/Ques2b/data.csv", "r");
    if(fp == NULL){
        printf("Can't open the file");
    }
    else{
        /// pointer to the array of structure info_t
        info_t *ptr = (info_t *) malloc (size * sizeof(info_t));

        char buffer[1024];
        int row = 0,column = 0;
        int i = 0;

        // store the data in CSV file in the structure
        while ((fgets(buffer,1024,fp)))
        {
            column = 0;
            char *value = strtok(buffer,",");
            row++;
            if(row == 1){
                continue;
            }
            while (value != NULL)
            {
                /* code */
                if(column == 0){
                    (ptr+i)->name = strdup(value);      
                }
                if(column == 1){
                    (ptr+i)->email_id = strdup(value);    
                }
                if(column == 2){
                    (ptr+i)->git_link = strdup(value);
                }
                value = strtok(NULL, ", ");
                column++;

            }
            
            i++;
            
        }

        //Before sorting structure
        for(int i=0; i<size;i++){
            printf("%s %s %s\n",(ptr+i)->name,(ptr+i)->email_id ,(ptr+i)->git_link);
        }
        /**
         * @brief Construct a new qsort object
         * 
         */
        qsort(ptr, size, sizeof(info_t), comparator);

        // After sorting the structure
        printf("Alphabetically arranged structure: \n");
        for(int i=0; i<size;i++){
            printf("%s %s %s\n",(ptr+i)->name,(ptr+i)->email_id ,(ptr+i)->git_link);
        }
    }
}


















// // Driver Code
// int main()
// {   

//     // size++;
//     // Substitute the full file path
//     // for the string file_path
//     FILE* fp = fopen("/home/khubithakkar/practise-more/Ques2b/data.csv", "r");
    

//     int row,column;
//     info_t *ptr;
//     int size = 5;
//     ptr = calloc(5, sizeof(info_t));
  

//     if (!fp)
//         printf("Can't open file\n");

    
//     else {
//         // Here we have taken size of
//         // array 1024 you can modify it
//         char buffer[1024];
      
  
//         int row = 0;
//         int column = 0;
//         int i = 0;
//         while (fgets(buffer, 1024, fp)) {

//             column = 0;
//             row++;
//             char* value = strtok(buffer, ", ");
            
            
//             if (row == 1){
//                 continue;
//             }
                
//             // ptr = (info_t *) realloc(ptr,size * sizeof(info_t));
//             // size ++;
            
            
//             if(ptr != NULL){
//             // Splitting the data  
                
                
//                 while (value) {
                    
                    
                    
//                     if (column == 0) {
//                         printf("1\n");
//                         strcpy((ptr+i)->name,value);
//                         printf("1\n");
//                         printf("Name: %s\n", ptr[i].name);
//                     }
    
//                     if (column == 1) {
//                         strcpy((ptr+i)->email_id,value);
//                         printf("Email: %s\n", ptr[i].email_id);
//                     }
    
//                     if (column == 2) {
//                         strcpy((ptr+i)->git_link,value);
//                         printf("Github: %s\n", ptr[i].git_link);
//                     }
//                     value = strtok(NULL, ", ");
//                     column++;
//                 }
//                 i++;
                
//             }
//             else{
//                 return 0;
//             }
//         }

  
//         // Close the file
//         fclose(fp);
       
        
//     // print the structure
//     for (int i = 0; i < row-1; i++)
//     {
//         /* code */
//         printf("Before\n");
//         printf("%s %s %s\n",(ptr + i)->name,(ptr + i)->email_id,(ptr + i)->git_link);
//     }

//     // arrange the data
//     int j,k;
//     info_t temp;
//     for(j=0;j<=row-2;j++){
//         for(k=0;k<=row-2;k++){
//             if(strcmp((ptr+j)->name,(ptr+k)->name) > 0){
//                 temp = ptr[j];
//                 ptr[j] = ptr[k];
//                 ptr[k] = temp;
//             }
//         }
//     }

//     // print the structure
//     for (int i = 0; i < row-1; i++)
//     {
//         /* code */
//         printf("After:\n");
//         printf("%s %s %s\n",ptr[i].name,ptr[i].email_id,ptr[i].git_link);

//     }
    

//     }
//     free(ptr);
//     return 0;

// }