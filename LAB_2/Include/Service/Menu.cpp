//
// Created by Илья Бурлак on 18.03.2023.
//

#include "Menu.h"

namespace Service {
    void Menu::requestOption() {
        cout << "Enter option" << '\n';
    }
    int Menu::getOption() const {
        cin >> oprion;
        return option;
    }

    void Menu::setOption(int option) {
        Menu::option = option;
    }
} // Service