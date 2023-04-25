//
// Created by Илья Бурлак on 21.04.2023.
//
#include "iostream"
#include <cmath>
#ifndef LAB_5_MINELEM_H
#define LAB_5_MINELEM_H

class minElem {
public:
    template<typename T>
   static T min(T a, T b){
       if (a > b){
           return b;
       }else{
           return a;
       }
   }

};

#endif //LAB_5_MINELEM_H
