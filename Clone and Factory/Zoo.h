// Authors: Utkal Sirikonda, Ravindu Don

#ifndef ZOO_H
#define ZOO_H

#include <memory>
#include <vector>

#include "Animal.h"
#include "AnimalFactory.h"

using namespace std;

class Zoo {
   private:
    static Zoo* instance;
    static int totalAnimals;

    vector<unique_ptr<Animal>> animals;
    vector<unique_ptr<Animal>> clones;

    Zoo();

   public:
    static Zoo* getInstance();

    void addAnimal(unique_ptr<Animal> animal);

    void cloneAnimal(const string& originalName);

    void printZooStatus() const;
};

#endif
