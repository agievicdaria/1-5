#pragma once

#include "Car.h"
using namespace std;

class Lorry {
private:
    Car car;
    double payload;

public:
    void SetCar(Car car) { this->car = car; }
    void SetPayload(double payload) { this->payload = payload; }
    Car GetCar() const { return car; }
    double GetPayload() const { return payload; }

    void Init(Car car, double payload);
    void Display() const;
    void Read();
    string toString() const; 
};
