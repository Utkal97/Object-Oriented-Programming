#include "Vehicle.h"

class Bike : public Vehicle
{
public:
    Bike();

    void getDescription() override;

    friend ostream &operator<<(ostream &out, const Bike &bike);
    friend istream &operator>>(istream &in, Bike &bike);
};