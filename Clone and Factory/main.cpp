// Authors: Utkal Sirikonda, Ravindu Don

#include <iostream>
#include <string>

#include "AnimalFactory.h"
#include "Zoo.h"

int main() {
    Zoo* zoo = Zoo::getInstance();

    string type;
    int count;

    while (cin >> type >> count) {
        for (int i = 0; i < count; ++i) {
            string name = type + to_string(i + 1);
            unique_ptr<Animal> animal = AnimalFactory::createAnimal(type, name);
            if (animal) {
                zoo->addAnimal(move(animal));
            }
        }
    }
    zoo->printZooStatus();

    // Clone animals
    zoo->cloneAnimal("tiger1");
    zoo->cloneAnimal("wolf1");

    zoo->printZooStatus();

    return 0;
}
