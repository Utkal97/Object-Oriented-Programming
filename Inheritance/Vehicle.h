#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    static int vehicleCount;

private:
    int numberOfWheels;
    int year;
    string make;
    string color;

public:
    Vehicle();

    virtual void getDescription();

    static int getCount();

    int getYear() const;
    void setYear(int year);

    string getColor() const;
    void setColor(string color);

    string getMake() const;
    void setMake(string make);

    int getNumberOfWheels();
    void setNumberOfWheels(int count);

    friend ostream &operator<<(ostream &out, const Vehicle &vehicle);
    friend istream &operator>>(istream &in, Vehicle &vehicle);

    ~Vehicle();
};

#endif