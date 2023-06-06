#include "ques.h"

/**
 * @brief sum of two complex numbers
 * 
 * @param a is structure of complex nummber
 * @param b is structure of complex number
 * @return complex_t is structure of complex type
 */
complex_t summation(complex_t a, complex_t b)
{
    complex_t s;
    s.real = a.real + b.real;
    s.imaginary = a.imaginary + b.imaginary;

    if (a.real > 10)
    {
        complex_t x={0,0};
        return x;
    }
    return s;
}