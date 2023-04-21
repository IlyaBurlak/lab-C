//
// Created by Илья Бурлак on 17.03.2023.
//
#include <iostream>
#include "Geometric/Common.h"
#include "Geometric/Equilateral_triangle.h"
#include "Geometric/Hexagon.h"

using namespace std;

int main(int argc, char *argv[]){
    if (argc == 0){
        (new Common())->run();
    }
    else if (argc == 1){
        std::string filename = argv[0];
        (new Common())->run();
    }
    return 0;
}