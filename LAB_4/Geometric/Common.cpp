//
// Created by Илья Бурлак on 20.04.2023.
//
#include <cmath>
#include <iostream>
#include "Common.h"
#include "Equilateral_triangle.h"
#include "Hexagon.h"

using namespace std;

void Common::run() {
    bool hasNextAction = true;
    while (hasNextAction) {
        try {
            start();
            hasNextAction = start();
        }
        catch (const std::exception& e) {
            std::cout << "Error while processing user action\n" << e.what();
        }
    }
};

void Common::input_triangle(){
    cin >> a_triangle;
};
void Common::input_Hexagon(){
    cin >> a_Hexagon;
};


void Common::menu(){

    cout << " 1 - Суммарная площадь всех фигур."<< endl;
    cout << " 2 - Суммарный периметр всех фигур." << endl;

};
void Common::line(){
    cout << "--------------------------------\n" ;
}

void Common::common_square(){
    Equilateral_triangle x;
    Hexagon y;
    float common_square = x.Square() + y.Square();
    return common_square;
}

void Common::common_per(){
    Equilateral_triangle x;
    Hexagon y;
    float common_per = x.perimeter() + y.perimetr();
    return comon_per;
}


void Common::getActoin(){
    cin >> action;
}
void Common::start() {
    bool While = true;
    while (While) {
        menu();
        switch (action) {
            case 1:
                line();
                common_square();
                line();
                break;
            case 2:
                line();
                common_per();
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

