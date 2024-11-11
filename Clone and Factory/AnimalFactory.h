// Authors: Utkal Sirikonda, Ravindu Don

#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include <memory>
#include <string>

#include "Animal.h"
#include "Kangaroo.h"
#include "Lemur.h"
#include "Serpent.h"
#include "Tiger.h"
#include "Wolf.h"

using namespace std;

class AnimalFactory {
   public:
    static unique_ptr<Animal> createAnimal(const string& type,
                                           const string& name) {
        if (type == "tiger")
            return unique_ptr<Animal>(new Tiger(name));
        else if (type == "wolf")
            return unique_ptr<Animal>(new Wolf(name));
        else if (type == "lemur")
            return unique_ptr<Animal>(new Lemur(name));
        else if (type == "kangaroo")
            return unique_ptr<Animal>(new Kangaroo(name));
        else if (type == "serpent")
            return unique_ptr<Animal>(new Serpent(name));

        return nullptr;
    }
};

#endif
