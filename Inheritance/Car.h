#include "Vehicle.h"

class Car : public Vehicle
{
public:
    Car();

    void getDescription() override;

    friend ostream &operator<<(ostream &out, const Car &car);

    friend istream &operator>>(istream &in, Car &car);
};
