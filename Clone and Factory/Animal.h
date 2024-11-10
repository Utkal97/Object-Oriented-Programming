#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal {
   protected:
    string name;
    string food;
    string sound;

   public:
    virtual ~Animal() = default;
    virtual Animal* clone() const = 0;
    virtual void introduce() const = 0;
    virtual string getType() const = 0;
    string getName() const { return name; }

    friend ostream& operator<<(ostream& os, const Animal& animal) {
        animal.introduce();
        return os;
    }
};

#endif  // ANIMAL_H
