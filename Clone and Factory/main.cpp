#include <iostream>
#include <string>

#include "AnimalFactory.h"
#include "Zoo.h"

int Tiger::count = 0;
int Wolf::count = 0;
int Lemur::count = 0;
int Kangaroo::count = 0;
int Serpent::count = 0;

int main() {
    Zoo* zoo = Zoo::getInstance();

    string type;
    int count;

    while (cin >> type >> count) {
        for (int i = 0; i < count; ++i) {
            string name = type + to_string(i + 1);
            Animal* animal = AnimalFactory::createAnimal(type, name);
            if (animal) {
                zoo->addAnimal(animal);
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
