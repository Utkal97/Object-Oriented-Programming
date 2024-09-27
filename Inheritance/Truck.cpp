#include "Truck.h"

Truck::Truck() : Vehicle()
{
    this->setMake("Daimler");
    this->setColor("White");
    this->setYear(2010);
    this->setNumberOfWheels(8);
}

void Truck::getDescription()
{
    cout << "Truck details-" << endl
         << " Make: " << this->getMake()
         << ", Year: " << this->getYear()
         << ", Color: " << this->getColor()
         << ", Wheels: " << this->getNumberOfWheels() << endl;
}

ostream &operator<<(ostream &out, Truck &truck)
{
    out << "Overriden << by Truck " << endl
        << "Make: " << truck.getMake() << " Year: " << truck.getYear() << " Color: " << truck.getColor() << endl;
    return out;
}

istream &operator>>(istream &in, Truck &truck)
{
    int year;
    string color, make;

    cout << "Overriden >> by Truck " << endl
         << "Input truck make: ";
    in >> make;
    cout << ", Input truck color: ";
    in >> color;
    cout << ", Input truck year: ";
    in >> year;

    truck.setColor(color);
    truck.setMake(make);
    truck.setYear(year);
    truck.setNumberOfWheels(4);

    return in;
}
