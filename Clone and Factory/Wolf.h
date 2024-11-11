// Authors: Utkal Sirikonda, Ravindu Don

#ifndef WOLF_H

#include "Animal.h"

class Wolf : public Animal {
   private:
    static int count;

   public:
    Wolf(const string& n);

    unique_ptr<Animal> clone() const override;

    void introduce() const override;

    string getType() const override;

    static int getCount();

    ~Wolf();
};

#endif