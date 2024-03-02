#pragma once

#include <string>
using namespace std;

class Car {
private:
    string brand;
    int cylinders;
    double power;

public:
    const string& GetBrand() const { return brand; }
    int GetCylinders() const  { return cylinders; }
    double GetPower() const { return power; }

    void SetBrand(const string& brand) { this->brand = brand; }
    void SetCylinders(int cylinders) { this->cylinders = cylinders; }
    void SetPower(double power) { this->power = power; }

    void Init(const string& brand, int cylinders, double power);
    string toString() const;
    void Read();
    void Display() const;
};
