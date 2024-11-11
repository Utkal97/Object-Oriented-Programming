// Authors: Utkal Sirikonda, Ravindu Don

#include "Wolf.h"

int Wolf::count = 0;

Wolf::Wolf(const string& n) {
    name = n;
    food = "chicken";
    sound = "growl";
    ++count;
}

unique_ptr<Animal> Wolf::clone() const {
    return unique_ptr<Animal>(new Wolf(*this));
}

void Wolf::introduce() const {
    cout << "I am a wolf, my name is " << name << ", I " << sound
         << ", and I eat " << food << endl;
    return;
}

string Wolf::getType() const { return "wolf"; }

int Wolf::getCount() { return count; }

Wolf::~Wolf() { --count; }