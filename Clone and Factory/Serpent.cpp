#include "Serpent.h"

int Serpent::count = 0;

Serpent::Serpent(const string& n) {
    name = n;
    food = "mice";
    sound = "hiss";
    ++count;
}

Animal* Serpent::clone() const { return new Serpent(*this); }

void Serpent::introduce() const {
    cout << "I am a serpent, my name is " << name << ", I " << sound
         << ", and I eat " << food << endl;

    return;
}

string Serpent::getType() const { return "serpent"; }

int Serpent::getCount() { return count; }

Serpent::~Serpent() { --count; }