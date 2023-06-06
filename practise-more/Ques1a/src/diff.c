#include "ques.h"


/**
 * @brief difference of two complex numbers
 * 
 * @param a is structure of complex type
 * @param b is structure of complex type
 * @return complex_t is structure of complex type
 */

complex_t difference(complex_t a, complex_t b){
    complex_t d;
    d.real = a.real - b.real;
    d.imaginary = a.imaginary - b.imaginary;
    return d;
}