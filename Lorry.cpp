#include "Lorry.h"
#include <iostream>
#include <sstream>
using namespace std;

void Lorry::Init(Car car, double payload) {
    SetCar(car);
    SetPayload(payload);
}

void Lorry::Display() const {
    cout << endl;
    cout << "car = " << endl;
    car.Display();
    cout << "payload = " << payload << endl;
}


void Lorry::Read() {
    double payload;
    Car c;
    cout << endl;
    cout << "Car = ? " << endl;
    c.Read();
    cout << "payload = ? "; cin >> payload;
    Init(c, payload);
}

string Lorry::toString() const {
    stringstream sout;
    sout << "Car Information: " << GetCar().toString() << ", Payload: " << payload << endl;
    return sout.str();
}
