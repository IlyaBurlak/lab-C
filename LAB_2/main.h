//
// Created by Илья Бурлак on 27.02.2023.
//
#ifndef LAB_2_MAIN_H
#define LAB_2_MAIN_H

#include <iostream>
#include "main.h"
#include <fstream>

using namespace std;

//TODO: move to Service directory
class File {
private:
    ofstream file;
    string name_f = "";
public:
    void open(string filename){
        // region TODO: to menu
        cout << "Введите название файла: ";
        cin >> name_f;
        // endregion
        file.open(name_f , ios::app);
        if (!file.is_open()) {
            throw std::exception();
        }
    };
    void close(){
        file.close();
    };
    int  open_file(){
        if (!file.is_open()){
            return -1;
        }
        else{
            return 1;
        }
    }
    void get_name(){
        if (name_f != "") {
            cout << "Name file: " << name_f << "\n";
        }else{
            cout << "Файл не открыт\n";
        }
    }
    // TODO: to App
    void write_file(){
        string s1;
        cout << "Вводите: ";
        cin >> s1;

        if (file.is_open()){
            file << s1 << endl;
        } else{
            cout << "Файл не открыт !";
        }
    }
    // TODO: to App
    void write_numbers(){
        int kol_n , n;
        if (file.is_open()) {
            cout << "Сколько цифр ? " << "\n";
            cin >> kol_n;
            for (int i = 0; i < kol_n; i++) {
                cin >> n;
                file << n << " ";
            }
            file << "\n";
        }else{
            cout << "Фаил не открыт !";
        }
    }
    void menu(){
        cout <<"Выберите пункт:" << "\n";
        cout << "1 Открытие файла." << "\n";
        cout << "2 Закрытие файла." << "\n";
        cout << "3 Получение имени файла." << "\n";
        cout << "4 Проверка, открыт ли файл." << "\n";
        cout << "5 Запись в файл строки." << "\n";
        cout << "6 Запись в файл целого числа." << "\n";
        cout << "0 Завершение программы." << "\n";
    }

    void line(){
        cout << "--------------------------------\n" ;
    }

};
#endif //LAB_2_MAIN_H
