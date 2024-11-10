#ifndef LEMUR_H

#include "Animal.h"

class Lemur : public Animal {
   private:
    static int count;

   public:
    Lemur(const string& n);

    Animal* clone() const override;

    void introduce() const override;

    string getType() const override;

    static int getCount();

    ~Lemur();
};

#endif