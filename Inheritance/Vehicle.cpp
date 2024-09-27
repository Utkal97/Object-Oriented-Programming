#include "Vehicle.h"

int Vehicle::vehicleCount = 0;

Vehicle::Vehicle()
{
    this->year = 2024;
    this->make = "Unknown";
    this->color = "Any";
    this->numberOfWheels = 0;
    Vehicle::vehicleCount += 1;
    cout << "Default constructor creating Vehicle" << endl;
    cout << getCount() << " vehicles in inventory" << endl;
}

int Vehicle::getCount()
{
    return vehicleCount;
}

void Vehicle::getDescription()
{
    cout << "This method will be overriden" << year << endl;
}

string Vehicle::getMake() const
{
    return this->make;
}

string Vehicle::getColor() const
{
    return this->color;
}

int Vehicle::getYear() const
{
    return this->year;
}

int Vehicle::getNumberOfWheels()
{
    return this->numberOfWheels;
}
void Vehicle::setNumberOfWheels(int count)
{
    this->numberOfWheels = count;
    return;
}

void Vehicle::setColor(string color)
{
    this->color = color;
    return;
}

void Vehicle::setYear(int year)
{
    this->year = year;
    return;
}

void Vehicle::setMake(string make)
{
    this->make = make;
    return;
}

ostream &operator<<(ostream &out, const Vehicle &vehicle) // Marked vehicle as const
{
    out << "Color: " << vehicle.getColor() << ", Year: " << vehicle.getYear() << endl;
    return out;
}

istream &operator>>(istream &in, Vehicle &vehicle)
{
    string color, make;
    int year;

    cout << "Enter Vehicle color: ";
    in >> color;
    cout << endl
         << "year: ";
    in >> year;
    cout << "make: ";
    in >> make;

    vehicle.setColor(color);
    vehicle.setYear(year);
    vehicle.setMake(make);

    return in;
}

Vehicle::~Vehicle()
{
    Vehicle::vehicleCount--;
}