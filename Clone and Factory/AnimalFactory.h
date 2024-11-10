#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include <memory>
#include <string>

#include "Animal.h"

class Tiger : public Animal {
   private:
    static int count;

   public:
    Tiger(const string& n) {
        name = n;
        food = "meat";
        sound = "roar";
        ++count;
    }
    ~Tiger() { --count; }
    Animal* clone() const override { return new Tiger(*this); }
    void introduce() const override {
        cout << "I am a tiger, my name is " << name << ", I " << sound
             << ", and I eat " << food << endl;
    }
    string getType() const override { return "tiger"; }
    static int getCount() { return count; }
};

class Wolf : public Animal {
   private:
    static int count;

   public:
    Wolf(const string& n) {
        name = n;
        food = "chicken";
        sound = "growl";
        ++count;
    }
    ~Wolf() { --count; }
    Animal* clone() const override { return new Wolf(*this); }
    void introduce() const override {
        cout << "I am a wolf, my name is " << name << ", I " << sound
             << ", and I eat " << food << endl;
    }
    string getType() const override { return "wolf"; }
    static int getCount() { return count; }
};

class Lemur : public Animal {
   private:
    static int count;

   public:
    Lemur(const string& n) {
        name = n;
        food = "fruit";
        sound = "squeak";
        ++count;
    }
    ~Lemur() { --count; }
    Animal* clone() const override { return new Lemur(*this); }
    void introduce() const override {
        cout << "I am a lemur, my name is " << name << ", I " << sound
             << ", and I eat " << food << endl;
    }
    string getType() const override { return "lemur"; }
    static int getCount() { return count; }
};

class Kangaroo : public Animal {
   private:
    static int count;

   public:
    Kangaroo(const string& n) {
        name = n;
        food = "carrots";
        sound = "click";
        ++count;
    }
    ~Kangaroo() { --count; }
    Animal* clone() const override { return new Kangaroo(*this); }
    void introduce() const override {
        cout << "I am a kangaroo, my name is " << name << ", I " << sound
             << ", and I eat " << food << endl;
    }
    string getType() const override { return "kangaroo"; }
    static int getCount() { return count; }
};

class Serpent : public Animal {
   private:
    static int count;

   public:
    Serpent(const string& n) {
        name = n;
        food = "mice";
        sound = "hiss";
        ++count;
    }
    ~Serpent() { --count; }
    Animal* clone() const override { return new Serpent(*this); }
    void introduce() const override {
        cout << "I am a serpent, my name is " << name << ", I " << sound
             << ", and I eat " << food << endl;
    }
    string getType() const override { return "serpent"; }
    static int getCount() { return count; }
};

class AnimalFactory {
   public:
    static Animal* createAnimal(const string& type, const string& name) {
        if (type == "tiger") return new Tiger(name);
        if (type == "wolf") return new Wolf(name);
        if (type == "lemur") return new Lemur(name);
        if (type == "kangaroo") return new Kangaroo(name);
        if (type == "serpent") return new Serpent(name);
        return nullptr;
    }
};

#endif  // ANIMAL_FACTORY_H
