#include "header.h"
#include <iostream>

int main()
{
    DecartCS p1(10, 20);
    PolarCS p2(1, 50);

    p1.print();
    cout << endl;

    p2.print();
    cout << endl;

    p1.convert().print();
    cout << endl;
    p1.convert().convert().print();
    cout << endl;

    DecartCS a(1, 1);
    DecartCS b(4, 4);

    cout << "Distance between "
         << a.to_string() << " and "
         << b.to_string() << " is "
         << distance(&a, &b) << endl;

    return 0;
}
