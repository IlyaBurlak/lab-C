//
// Created by Илья Бурлак on 18.03.2023.
//

#ifndef LAB_2_APP_H
#define LAB_2_APP_H
#include "Menu.h"

namespace Service {

    class App {
    private:
        App();
        Menu* menu;
    public:
        static App* create(Menu* menu);
        int start();
    };

} // Service

#endif //LAB_2_APP_H
