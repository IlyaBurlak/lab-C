//
// Created by Илья Бурлак on 17.03.2023.
//

#ifndef LAB_4_MAIN_H
#define LAB_4_MAIN_H

#include <cmath>
#include <iostream>

using namespace std;

int a;
class Geometric_fig{
public:

   static double square_tringl , square_Hexagon;

    int a_triangle , a_Hexagon , per_tingle , per_Hexagon ;


    void input_triangle(){
        cout << "Введите сторону треугольника ";
        cin >> a_triangle;
    };
    void input_Hexagon(){
        cout << "Введите сторону Шестиугольника";
        cin >> a_Hexagon;

    };

    class Equilateral_triangle{
    public:
        float Square(){
            square_tringl =  a_triangle * a_triangle * sqrt(3)/4;
            return square_tringl;
        };
        float perimeter(){
            per_tingle = pow(a_triangle , 3);
            return per_tingle;
        };

    };

    class Hexagon {
    public:
        float Square() {
            square_Hexagon = ((3 * sqrt(3)) / 2 * pow(a, 2));
            return square_Hexagon ;
        }

        float perimetr() {
            per_Hexagon = a_Hexagon * 6;
             return per_Hexagon;
        }

    };

    void common_per(){
        Hexagon ap;
        Equilateral_triangle ax;
        cout << ax.perimeter() + ap.perimetr() << endl;
    }
    void common_square(){
        Hexagon ap;
        Equilateral_triangle ax;
        cout << ap.Square() + ax.Square() << endl;
    }

};


void menu(){
    cout << " 1 - Суммарная площадь всех фигур."<< endl;
    cout << " 2 - Суммарный периметр всех фигур." << endl;

};
void line(){
    cout << "--------------------------------\n" ;
}

void start() {
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


#endif //LAB_4_MAIN_H