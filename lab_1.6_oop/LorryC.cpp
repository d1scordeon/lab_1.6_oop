//LorryC.cpp
#include "LorryC.h"
#include <iostream>

using namespace std;

void LorryC::Init(int capacity, LorryC::Car car) {
	setCapacity(capacity);
	setCar(car);
}

void LorryC::Display() const {
	cout << endl;
	cout << "car " << endl;
	car.Display();
	cout << "capacity =" << capacity << endl;
}

void LorryC::Read() {
	int capacity = 0;
	LorryC::Car c;
	cout << endl;
	cout << "Car" << endl;
	c.Read();
	cout << "Capacity:"; cin >> capacity;
	Init(capacity, c);
}

void LorryC::Car::Init(string brand, int cylinders, int power) {
	setBrand(brand);
	setCylinders(cylinders);
	setPower(power);

}

void LorryC::Car::Display() const
{
	cout << endl;
	cout << "Brand = " << this->brand << endl;
	cout << "Cylinders =" << this->cylinders << endl;
	cout << "Power =" << this->power << endl;
}

void LorryC::Car::Read() {
	string brand;
	int cylinders;
	int power;

	cout << endl;
	cout << "Brand: "; cin >> brand;
	cout << "Cylinders: "; cin >> cylinders;
	cout << "Power: "; cin >> power;

	Init(brand, cylinders, power);
}