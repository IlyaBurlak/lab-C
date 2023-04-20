//
// Created by Илья Бурлак on 19.04.2023.
//

#ifndef NEW_LAB_ON_C_COMPLEX_H
#define NEW_LAB_ON_C_COMPLEX_H


class Complex {
public:
    double re;
    double im;
    Complex();
    double module();
    Complex operator+ (Complex num);
    Complex operator* (double x);
    Complex operator* (Complex num);
};


#endif //NEW_LAB_ON_C_COMPLEX_H
