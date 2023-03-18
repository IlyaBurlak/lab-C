//
// Created by Илья Бурлак on 18.03.2023.
//

#include "App.h"


namespace Service {
    int App::start(Menu* menu) {
        menu->requestOption();
        auto option = menu->getOption();
        menu->setOption(option)

        while (true) {
            menu();
            line();
           // cin >> a;
            switch (option){
                case 1:
                    open();
                    line();
                    break;
                case 2:
                    line();
                    close();
                    line();
                    break;
                case 3:
                    line();
                    get_name();
                    line();
                    break;
                case 4:
                    line();
                    open_file();
                    line();
                    break;
                case 5:
                    line();
                    write_file();
                    line();
                    break;
                case 6:
                    line();
                    write_numbers();
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
        return 0;
    }

    App* App::create() {
        return new App();
    }
} // Service