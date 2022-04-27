#include <iostream>
#include <string>
#include "dom_11.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Legk_avto legk_avto;
    Avtobus avtobus;
    Bike bike;
    Transport* FF = &bike;
    FF->Print();
    legk_avto.Print();
    avtobus.Print();

}