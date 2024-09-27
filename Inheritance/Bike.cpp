#include "Bike.h"

Bike::Bike() : Vehicle()
{
    this->setMake("Honda");
    this->setColor("Black");
    this->setYear(2015);
    this->setNumberOfWheels(2);
}

void Bike::getDescription()
{
    cout << "Bike details-" << endl;
    cout << " Make: " << this->getMake()
         << ", Year: " << this->getYear()
         << ", Color: " << this->getColor()
         << ", Wheels: " << this->getNumberOfWheels() << endl;
    return;
}

ostream &operator<<(ostream &out, const Bike &bike)
{
    out << "Overriden << by Bike " << endl
        << "Make: " << bike.getMake() << " Year: " << bike.getYear() << " Color: " << bike.getColor() << endl;
    return out;
}

istream &operator>>(istream &in, Bike &bike)
{
    int year;
    string color, make;

    cout << "Overriden >> by Bike " << endl
         << "Input Bike make: ";
    in >> make;
    cout << ", Input Bike color: ";
    in >> color;
    cout << ", Input Bike year: ";
    in >> year;

    bike.setColor(color);
    bike.setMake(make);
    bike.setYear(year);
    bike.setNumberOfWheels(4);

    return in;
}
