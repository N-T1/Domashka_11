#ifndef DOM_11
#define DOM_11
#include <iostream>
using namespace std;

class Transport
{
public:
    virtual void Print()
    {

    };
};

class Legk_avto : public Transport
{
public:
    void  Print();
};

class Avtobus : public Transport
{
public:
    void  Print();
};
class Bike : public Transport
{
public:
    void  Print();
};
#endif
