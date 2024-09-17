#include "Car.h"

int Car::carCount = 0;

Car::Car() : year(2019), color("Grey") {
    carCount += 1;
    cout << "Default Car Constructor called" << endl;
    cout << carCount << " car(s) in inventory" << endl;
}

Car::Car(int yearValue, string colorValue) : year(yearValue), color(colorValue) {
    carCount += 1;
    cout << "Parameterized Car Constructor called" << endl;
    cout << carCount << " car(s) in inventory" << endl;
}

int Car::getYear() const {
    return year;
}

string Car::getColor() const {
    return color;
}

void Car::setYear(int yearValue) {
    year = yearValue;
    return;
}

void Car::setColor(string colorValue) {
    color = colorValue;
    return;
}

Car::Car(const Car& anotherCar) : year(anotherCar.year), color(anotherCar.color) {
    carCount += 1;
    cout << "Copy Car Constructor called" << endl;
    cout << carCount << " car(s) in inventory" << endl;
}

void Car::showCarDetails() const {
    cout << "year: " << year << " color: " << color << endl;
    return;
}

int Car::getCarCount() {
    return carCount;
}

Car& Car::operator=(const Car& otherCar) {
    year = otherCar.year;
    color = otherCar.color;
    return *this;
}

bool Car::operator==(const Car& otherCar) {
    return (year == otherCar.getYear()) && 
    (color == otherCar.getColor());
}

bool Car::operator>(const Car& otherCar) const {
    return year > otherCar.year;
}

ostream& operator<< (ostream& out, const Car& car) {
    out << "Car Details: Year= " << car.year << ", Color= " << car.color;
    return out;
}

istream& operator>> (istream& in, Car& car) {
    cout << "Enter car year: ";
    in >> car.year;
    cout << "color: ";
    in >> car.color;
    return in;
}

Car::~Car() {
    carCount-=1;
    cout << "Destructing " << color << " Car" << endl;
    cout << carCount << " car(s) remaining" << endl;
    return;
}