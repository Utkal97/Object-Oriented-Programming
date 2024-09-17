#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<string>
using namespace std;

class Car {
  private:
    int year;
    string color;

  protected:
  	static int carCount;

  public:
		Car();	//Default constructor

		Car(int yearValue, string colorValue);	//Parameterized Constructor

		Car(const Car& anotherCar);	//Copy Constructor

		int getYear() const;	//Method
		string getColor() const; //Method

		void setYear(int yearValue);
		void setColor(string colorValue);

		void showCarDetails() const;	//Method

		static int getCarCount();	//Static Method

		Car& operator=(const Car& otherCar);	//Operator '=' overloading

		bool operator==(const Car& otherCar);	//Operator '==' overloading

		bool operator>(const Car& otherCar) const;	//Operator '>' overloading

		friend ostream& operator<< (ostream &out, const Car& car);	//Operator '<<' overloading

		friend istream& operator>> (istream &in, Car& car);	//Operator '>>' overloading

		~Car();	//Destructor
};

#endif