// Authors: Utkal Sirikonda, Ravindu Don
#ifndef SERPENT_H

#include "Animal.h"

class Serpent : public Animal {
   private:
    static int count;

   public:
    Serpent(const string& n);

    unique_ptr<Animal> clone() const override;

    void introduce() const override;

    string getType() const override;

    static int getCount();

    ~Serpent();
};

#endif