// Authors: Utkal Sirikonda, Ravindu Don

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Animal {
   protected:
    string name;
    string food;
    string sound;

   public:
    virtual ~Animal() = default;
    virtual unique_ptr<Animal> clone() const = 0;
    virtual void introduce() const = 0;
    virtual string getType() const = 0;
    string getName() const { return name; }
    void setName(string newName) { name = newName; }
    friend ostream& operator<<(ostream& os, const Animal& animal) {
        animal.introduce();
        return os;
    }
};

#endif  // ANIMAL_H
