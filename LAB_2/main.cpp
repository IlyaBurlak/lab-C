#include <iostream>
#include "main.h"
#include "Include/Service/App.h"
#include "Include/Service/Menu.h"
#include <fstream>

using namespace std;

int main(){
    //(new File) -> start();
    return Service::App::create(new Service::Menu())->start();
}