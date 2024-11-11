// Authors: Utkal Sirikonda, Ravindu Don

#ifndef LEMUR_H

#include "Animal.h"

class Lemur : public Animal {
   private:
    static int count;

   public:
    Lemur(const string& n);

    unique_ptr<Animal> clone() const override;

    void introduce() const override;

    string getType() const override;

    static int getCount();

    ~Lemur();
};

#endif