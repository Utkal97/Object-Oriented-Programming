#include "Car.h"

Car::Car() : Vehicle()
{
    this->setMake("Lexus");
    this->setColor("Grey");
    this->setYear(2020);
    this->setNumberOfWheels(4);
}

void Car::getDescription()
{
    cout << "Car details-" << endl;
    cout << " Make: " << this->getMake()
         << ", Year: " << this->getYear()
         << ", Color: " << this->getColor()
         << ", Wheels: " << this->getNumberOfWheels() << endl;
    return;
}

ostream &operator<<(ostream &out, const Car &car)
{
    out << "Overriden << by Car " << endl
        << "Make: " << car.getMake() << " Year: " << car.getYear() << " Color: " << car.getColor() << endl;
    return out;
}

istream &operator>>(istream &in, Car &car)
{
    int year;
    string color, make;

    cout << "Overriden >> by Car " << endl
         << "Enter car make: ";
    in >> make;
    cout << ", Enter car color: ";
    in >> color;
    cout << ", Enter car year: ";
    in >> year;

    car.setColor(color);
    car.setMake(make);
    car.setYear(year);
    car.setNumberOfWheels(4);

    return in;
}
