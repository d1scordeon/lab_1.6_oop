//LorryC.h
#pragma once
#include <string>

using namespace std;

class LorryC
{
private:
    int capacity;
public:
    class Car {
    private:
        string brand;
        int cylinders;
        int power;
    public:

        string getBrand() const { return brand; }
        int getCylinders() const { return cylinders; }
        int getPower() const { return power; }

        void setBrand(string brand) { this->brand = brand; }
        void setCylinders(int cylinders) { this->cylinders = cylinders; }
        void setPower(int power) { this->power = power; }

        void Init(string brand, int cylinders, int power);
        void Display() const;
        void Read();
    };
    Car car;

public:
    int getCapacity() const { return capacity; }
    LorryC::Car getCar() const { return car; }

    void setCapacity(int capacity) { this->capacity = capacity; }
    void setCar(LorryC::Car car) { this->car = car; }

    void Init(int capacity, LorryC::Car car);
    void Display() const;
    void Read();
};