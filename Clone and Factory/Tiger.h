#ifndef TIGER_H

#include "Animal.h"

class Tiger : public Animal {
   private:
    static int count;

   public:
    Tiger(const string& n);

    Animal* clone() const override;

    void introduce() const override;

    string getType() const override;

    static int getCount();

    ~Tiger();
};

#endif