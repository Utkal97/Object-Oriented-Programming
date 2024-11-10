#ifndef KANGAROO_H

#include "Animal.h"

class Kangaroo : public Animal {
   private:
    static int count;

   public:
    Kangaroo(const string& n);

    Animal* clone() const override;

    void introduce() const override;

    string getType() const override;

    static int getCount();

    ~Kangaroo();
};

#endif