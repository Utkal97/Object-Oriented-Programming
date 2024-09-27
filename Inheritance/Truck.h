#include "Vehicle.h"

class Truck : public Vehicle
{
public:
    Truck();

    void getDescription() override;

    friend ostream &operator<<(ostream &out, Truck &truck);
    friend istream &operator>>(istream &in, Truck &truck);
};