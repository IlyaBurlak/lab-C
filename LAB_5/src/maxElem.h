//
// Created by Илья Бурлак on 21.04.2023.
//

#ifndef LAB_5_MAXELEM_H
#define LAB_5_MAXELEM_H
#include "iostream"

class maxElem {
private:
     int arr;
public:
   static void get_arr();

    template<typename T>
   static T max(T *arr){

        int len_arr = sizeof(arr);
        int max_el = 0;

        for(int i = 0; i < len_arr ; i++){
            if (arr[i] > arr[i+1])
                max_el = arr[i];

        }
        return max_el;
   }

};


#endif //LAB_5_MAXELEM_H
