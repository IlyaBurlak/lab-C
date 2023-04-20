//
// Created by Илья Бурлак on 19.04.2023.
//
#include <iostream>
#include "complex.h"
#include <math.h>

using namespace std;

Complex::Complex() : re(), im() {}
double Complex::module() {
    return sqrt(re * re + im * im);
}
Complex Complex::operator+ (Complex num) {
    Complex temp;
    temp.re = re + num.re;
    temp.im = im + num.im;
    return temp;
}
Complex Complex::operator*(double x) {
    Complex temp;
    temp.re = re * x;
    temp.im = im * x;
    return temp;
}
Complex Complex::operator* (Complex num) {
    Complex temp;
    temp.re = re * num.re - im * num.im;
    temp.im = re * num.im + num.re * im;
    return temp;
}
