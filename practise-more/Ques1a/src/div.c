#include "ques.h"


complex_t division(complex_t a, complex_t b){
    complex_t d;
    float den = (b.real)*(b.real) + (b.imaginary)*(b.imaginary);
    d.real = a.real * b.real + a.imaginary * b.imaginary;
    d.imaginary = a.imaginary * b.real - b.imaginary * a.real;

    d.real /= den;
    d.imaginary /= den;
    return d;
}