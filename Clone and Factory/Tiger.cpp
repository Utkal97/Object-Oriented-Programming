// Authors: Utkal Sirikonda, Ravindu Don

#include "Tiger.h"

int Tiger::count = 0;

Tiger::Tiger(const string& n) {
    name = n;
    food = "meat";
    sound = "roar";
    ++count;
}

unique_ptr<Animal> Tiger::clone() const {
    return unique_ptr<Animal>(new Tiger(*this));
}

void Tiger::introduce() const {
    cout << "I am a tiger, my name is " << name << ", I " << sound
         << ", and I eat " << food << endl;
}

string Tiger::getType() const { return "tiger"; }

int Tiger::getCount() { return count; }

Tiger::~Tiger() { --count; }