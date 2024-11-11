// Authors: Utkal Sirikonda, Ravindu Don

#include "Zoo.h"
using namespace std;

Zoo* Zoo::instance = nullptr;
int Zoo::totalAnimals = 0;

Zoo* Zoo::getInstance() {
    if (instance == nullptr) {
        instance = new Zoo();
    }
    return instance;
}

Zoo::Zoo() {}

void Zoo::addAnimal(unique_ptr<Animal> animal) {
    animals.push_back(move(animal));
    ++totalAnimals;
}

void Zoo::cloneAnimal(const string& originalName) {
    for (const auto& animal : animals) {
        if (animal->getName() == originalName) {
            string cloneName = "Clone_of_" + animal->getName();
            unique_ptr<Animal> clonedAnimal = animal->clone();
            clonedAnimal->setName(cloneName);
            cout << animal->getType() << " " << animal->getName()
                 << " was cloned, and his clone is named " << cloneName << endl
                 << endl;
            clones.push_back(move(clonedAnimal));
            ++totalAnimals;
            break;
        }
    }
}

void Zoo::printZooStatus() const {
    cout << "Wild Things Zoo has " << totalAnimals << " animals:" << endl;

    cout << " tigers: " << Tiger::getCount() << ", wolves: " << Wolf::getCount()
         << ", lemurs: " << Lemur::getCount()
         << ", kangaroos:" << Kangaroo::getCount()
         << " and serpents:" << Serpent::getCount() << endl
         << endl;

    cout << "Our animals would like to introduce themselves:" << endl;
    for (const auto& animal : animals) {
        cout << *animal;
    }

    if (!clones.empty()) {
        cout << "\nZoo has some cloned animals:\n";
        for (const auto& clone : clones) {
            cout << *clone;
        }
    }
    cout << endl;
}