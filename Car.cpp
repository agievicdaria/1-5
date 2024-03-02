#include "Car.h"
#include <iostream>
#include <sstream>
using namespace std;

void Car::Init(const string& brand, int cylinders, double power) {
    SetBrand(brand);
    SetCylinders(cylinders);
    SetPower(power);
}

void Car::Display() const {
    cout << endl;
    cout << "brand = " << brand << endl;
    cout << "cylinders = " << cylinders << endl;
    cout << "power = " << power << endl;
}

void Car::Read() {
    string brand;
    int cylinders;
    double power;

    cout << endl;
    cout << "brand = ? "; cin >> brand;
    cout << "cylinders = ? "; cin >> cylinders;
    cout << "power = ? "; cin >> power;
    Init(brand, cylinders, power);
}

string Car::toString() const {
    stringstream sout;
    sout << "Brand: " << brand << ", Cylinders: " << cylinders << ", Power: " << power << endl;
    return sout.str();
}
