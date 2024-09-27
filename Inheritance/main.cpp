#include "Car.h"
#include "Truck.h"
#include "Bike.h"

int main()
{
    Vehicle *vehicle1, *vehicle2, *vehicle3;
    // Initialize with default values
    Car car1;
    Truck truck1;
    Bike bike1;

    vehicle1 = &car1;
    vehicle2 = &truck1;
    vehicle3 = &bike1;

    // Testing overrides
    vehicle1->getDescription();
    vehicle2->getDescription();
    vehicle3->getDescription();

    // Testing operator overrides
    Car car2;
    Truck truck2;
    Bike bike2;

    cout << car2;
    cin >> car2;
    car2.getDescription();
    cout << endl;

    cout << truck2;
    cin >> truck2;
    truck2.getDescription();
    cout << endl;

    cout << bike2;
    cin >> bike2;
    bike2.getDescription();
    cout << endl;

    return 0;
}