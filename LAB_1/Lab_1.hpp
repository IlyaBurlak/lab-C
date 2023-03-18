//
//  Lab_1.hpp
//  Lab C++
//
//  Created by Илья Бурлак on 13.02.2023.
//

#ifndef Lab_1_hpp
#define Lab_1_hpp
#include "Lab_1.hpp"
#include <cmath>
#include <iostream>

using namespace std;

// 3 Изменяет большую из двух переменных на её остаток от деления на вторую переменную.

int per , ftor , temp;

void ostREF(){
    cout << "Введите первое число ";
    cin >> per;
    cout << "Введите второе число ";
    cin >> ftor;

    int &b1 = per;
    int &b = ftor;

    if (b1 > b){
        temp = b1 % b;
        b1 = temp;
        cout <<  b1 << endl;
    }else{
        temp = b % b1;
        b = temp;
        cout << b << endl;
    }
}

void ostPointer(){
    cout << "Введите первое число ";
    cin >> per;
    cout << "Введите второе число ";
    cin >> ftor;

    int *b1 = &per;
    int *b = &ftor;

    if (*b1 > *b){
        temp = *b1 % *b;
        *b1 = temp;
        cout << *b1 << endl;
    }else{
        temp = *b % *b1;
        *b = temp;
        cout << *b << endl;
    }

}

void ostTest(){
    int a = 45;
    int b = 4;
    if (45 % 4 == 1){
        cout << "---------------------------------------" << endl;
        cout << "\nTEST MODULE - FIRST MODULE CORRECT \n" << endl;
        cout << "---------------------------------------" << endl;
    }else{
        cout << "\nTEST MODULE - FIRST MODULE NOT CORRECT \n" << endl;
    }
}
// 6 Округляет вещественное число.
class Circle {
public:

}

void ceilREF(){
    int otv;
    float a;
    cout << "Введите число для его округления ";
    cin >> a;

    float &pa = a;
    otv = ceil(pa);
    cout << otv << endl;
}
void ceilPointer (){
    int otv;
    float a;
    cout << "Введите число для его округлкния ";
    cin >> a;

    float &pa = a;
    otv = ceil(pa);
    cout << otv << endl;

}
void ceilTest(){
    float a = 45.464646;
    int otv = ceil(a);
    if ( otv == 46){
        cout << "-----------------------------------------" << endl;
        cout << "\nTEST MODULE - SECOND MODULE  CORRECT \n" << endl;
        cout << "-----------------------------------------" << endl;
    }else{
        cout << "\nTEST MODULE - SECOND MODULE NOT CORRECT \n" << endl;
    }
}

// 11 Уменьшает радиус окружности на заданное число.
void DecremRadiusREF(){
    float a , b;
    cout << "Введите радиус ";
    cin >> a;
    cout << "На сколько уменьшить ";
    cin >> b;

    float &radius = a;
    float &x = b;
    if (radius >= x){
        radius = radius - x;
        cout << radius << endl;
    }else{
        cout << "Число слишком большое чтобы отнять \n" << endl;
    }
}

void DecremRadiusPointer(){
    int a , b;
    cout << "Введите радиус ";
    cin >> a;
    cout << "На сколько уменьшить ";
    cin >> b;

    int *radius = &a; int *x = &b;
    if (*radius >= *x){
        *radius = *radius - *x;
        cout << *radius << endl;
    }


    cout << *radius << endl;
}
void DecremRadiusTest(){
    int radius = 80;
    int x = 3;
    radius -= x;
    if (radius == 77){
        cout << "---------------------------------------" << endl;
        cout << "\nTEST MODULE - TREE MODULE CORRECT \n" << endl;
        cout << "---------------------------------------" << endl;
    }else{
        cout << "\nTEST MODULE - TREE MODULE NOT CORRECT \n" << endl;
    }
}
// 14 Транспонирует квадратную матрицу 3x3.


void TranspMatrixREF(){

    // на векторах

    cout << "Введите матрицу 3 на 3 " << endl;
        int i ,j, a[3][3],arr [3][3];
        for (int i = 0; i < 3 ; i++){
            for (int j = 0; j < 3; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 3 ; i++){
            for (int j = 0; j < 3; j++){
                arr[i][j] = a[j][i];
            }
        }

    cout << "Транспонированная матрица: " << endl;

        for (int i = 0; i < 3 ; i++){
            for (int j = 0; j < 3; j++){
                cout << arr[i][j] << " " ;
            }
            cout << endl;
        }

    }

#endif /* Lab_1_hpp */
