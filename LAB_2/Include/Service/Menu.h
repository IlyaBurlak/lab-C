//
// Created by Илья Бурлак on 18.03.2023.
//

#ifndef LAB_2_MENU_H
#define LAB_2_MENU_H

namespace Service {

    class Menu {
    private:
        int option;
    public:
        void requestOption();
        int getOption() const;

        void setOption(int option);
        // void display();

    };

} // Service

#endif //LAB_2_MENU_H
