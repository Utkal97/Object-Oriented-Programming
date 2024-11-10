#include "Lemur.h"

int Lemur::count = 0;

Lemur::Lemur(const string& n) {
    name = n;
    food = "fruit";
    sound = "squeak";
    ++count;
}

Animal* Lemur::clone() const { return new Lemur(*this); }

void Lemur::introduce() const {
    cout << "I am a lemur, my name is " << name << ", I " << sound
         << ", and I eat " << food << endl;
    return;
};

string Lemur::getType() const { return "lemur"; }

int Lemur::getCount() { return count; }

Lemur::~Lemur() { --count; }