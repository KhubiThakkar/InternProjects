/**
 * @file ques.h
 * @author Khubi Thakkar
 * @brief  header file for all the functions for complex numbers
 * @version 0.1
 * @date 2021-04-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __ques_h__      // if the header file is not defined then..
#define __ques_h__      // define the header file

/**
 * @brief redefining the structure name
 *  the structure for complex number
 */
typedef struct complex_t
{
    float real;     //< the real part of complex number
    float imaginary;    //< the imaginary part of complex number
} complex_t;


complex_t summation(complex_t a, complex_t b);

complex_t difference(complex_t a, complex_t b);

complex_t multi(complex_t a, complex_t b);

complex_t division(complex_t a, complex_t b);

#endif      //end the if condition