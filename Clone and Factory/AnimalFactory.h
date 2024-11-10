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

class AnimalFactory {
   public:
    static Animal* createAnimal(const string& type, const string& name) {
        if (type == "tiger")
            return new Tiger(name);
        else if (type == "wolf")
            return new Wolf(name);
        else if (type == "lemur")
            return new Lemur(name);
        else if (type == "kangaroo")
            return new Kangaroo(name);
        else if (type == "serpent")
            return new Serpent(name);
        return nullptr;
    }
};

#endif  // ANIMAL_FACTORY_H
