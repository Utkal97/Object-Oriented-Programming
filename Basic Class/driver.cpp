#include "Car.h"

int main() {
    // Default constructed car
    Car defaultCar;
    defaultCar.showCarDetails();
    cout << endl;

    // Parameterized Constructor
    Car parameterizedCar(2023, "Red");
    parameterizedCar.showCarDetails();
    cout << endl;

    // Dummy car for copying
    Car anotherCar(2020, "Orange");
    anotherCar.showCarDetails();
    cout << endl;

    // Initialized with Copy Constructor
    Car copiedCar = anotherCar;
    copiedCar.showCarDetails();
    cout << endl;

    // '=' operator overloading
    bool isEqual = copiedCar == anotherCar ;
    cout << "Is copied car and another car equal? " << isEqual << endl;
    cout << endl;

    // '>' operator overloading
    bool isParameterizedCarGreaterThanDefaultCar = parameterizedCar > defaultCar ;
    cout << "Is Parameterized car newer than Default car: " << isParameterizedCarGreaterThanDefaultCar << endl;

    // Static function
    cout << "Total cars in inventory: " << Car::getCarCount() << endl;

    copiedCar.showCarDetails();
    cout << copiedCar << endl;
    cin >> copiedCar;
    copiedCar.showCarDetails();

    return 0;
}