
/**
 * @file main.c
 * @mainpage
 * @author Khubi Thakkar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "ques.h"

//To check working of cppcheck
// void f1(char *s)
// {
//  s[20] = 0;
// }
// void f2()
// {
//  char a[10];
//  if (x + y == 2) {
//  f1(a);
//  }
// }

/**
 * @brief the function performs add, sub, mul operations on complex numbers
 * 
 * @return int 
 */
int main(void)
{
    // complex_t num1, num2;
    complex_t num1 = {1, 3};
    complex_t num2 = {4, 5};
    printf("NUM1 = %f +i%f\n", num1.real, num1.imaginary);
    printf("NUM2 = %f +i%f\n", num2.real, num2.imaginary);
    complex_t M = multi(num1, num2);      //< performing the multiplication operation num1 * num2
    complex_t S = summation(num2, num1);  //< performing the summation operation num1 + num2
    complex_t D = difference(num1, num2); //< performing the difference operation num1-num2
    complex_t Di = division(num1,num2);   //< performing the division operation num1/num2
    printf("MUL = %f +i%f\n", M.real, M.imaginary);
    printf("SUM = %f +i%f\n", S.real, S.imaginary);
    printf("DIFF = %f +i%f\n", D.real, D.imaginary);
    printf("DIV = %f +i%f\n", Di.real, Di.imaginary);
}