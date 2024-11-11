// Authors: Utkal Sirikonda, Ravindu Don

#include "Kangaroo.h"

int Kangaroo::count = 0;

Kangaroo::Kangaroo(const string& n) {
    name = n;
    food = "carrots";
    sound = "click";
    ++count;
}

unique_ptr<Animal> Kangaroo::clone() const {
    return unique_ptr<Animal>(new Kangaroo(*this));
}

void Kangaroo::introduce() const {
    cout << "I am a kangaroo, my name is " << name << ", I " << sound
         << ", and I eat " << food << endl;

    return;
}

string Kangaroo::getType() const { return "kangaroo"; }

int Kangaroo::getCount() { return count; }

Kangaroo::~Kangaroo() { --count; }