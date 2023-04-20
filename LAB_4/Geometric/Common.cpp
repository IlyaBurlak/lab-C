//
// Created by Илья Бурлак on 20.04.2023.
//
#include <cmath>
#include <iostream>
#include "Common.h"

using namespace std;
void Common::menu(){

    cout << " 1 - Суммарная площадь всех фигур."<< endl;
    cout << " 2 - Суммарный периметр всех фигур." << endl;

};
void Common::line(){
    cout << "--------------------------------\n" ;
}

void Common::start() {
    Geometric_fig x;
    bool While = true;
    while (While) {
        menu();
        cin >> a;
        switch (a) {
            case 1:
                line();
                x.common_square();
                line();
                break;
            case 2:
                line();
                x.common_per();
                line();
                break;
            case 0:
                line();
                cout << "The program has been closed.\nGood luck!\n";
                line();
                While = false;
                break;
            default:
                line();
                cout << "Нет такой команды.\n";
                line();
                break;

        }
    }
}
int a_triangle , a_Hexagon;
void Common::input_triangle(){
    cout << "Введите сторону треугольника ";
    cin >> a_triangle;
};
void Common::input_Hexagon(){
    cout << "Введите сторону Шестиугольника";
    cin >> a_Hexagon;

};