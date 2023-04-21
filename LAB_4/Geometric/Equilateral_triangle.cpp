//
// Created by Илья Бурлак on 20.04.2023.
//

#include "Equilateral_triangle.h"
#include "Common.cpp"
#include "Equilateral_triangle.h"
float Equilateral_triangle::Square(){
    float square_tringl =  a_triangle * a_triangle * sqrt(3)/4;
    return square_tringl;
};
float Equilateral_triangle::perimeter(){
    float per_tingle = pow(a_triangle , 3);
    return per_tingle;
};