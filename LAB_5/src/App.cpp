//
// Created by Илья Бурлак on 25.04.2023.
//

#include "App.h"
#include "iostream"

int arr[]{1 ,2 , 4 ,9};

void App::run() {
    std::cout << maxElem::max(arr) << std::endl;
    std::cout << minElem::min(6 ,8) << std::endl;

}