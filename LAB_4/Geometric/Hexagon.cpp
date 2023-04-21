//
// Created by Илья Бурлак on 20.04.2023.
//

#include "Hexagon.h"
#include "Common.h"
#include "math.h"
using namespace std;

float Hexagon::Square() {
   float square_Hexagon = ((3 * sqrt(3)) / 2 * pow(a, 2));
    return square_Hexagon ;
}

    float Hexagon::perimetr() {
       float per_Hexagon = a_Hexagon * 6;
        return per_Hexagon;
    }

};