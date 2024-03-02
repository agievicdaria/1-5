#include "Car.h"
#include "Lorry.h"
#include <iostream>

int main() {
    Car c;
    c.Read();
    cout << c.toString();

    Lorry l;
    l.Read();
    cout << l.toString();

    const int lorrySize = 2;
    Lorry lorries[lorrySize];
    for (int i = 0; i < lorrySize; ++i) {
        lorries[i].Read();
    }
    for (int i = 0; i < lorrySize; ++i) {
        lorries[i].Display();
    }

}