#ifndef COLORPIXEL_H
#define COLORPIXEL_H

#include <iostream>
#include <vector>
using namespace std;

class ColorPixel {
   private:
    int red;
    int green;
    int blue;
    static int count;

   public:
    ColorPixel();
    ColorPixel(int red, int green, int blue);

    vector<int> getPixel();

    static int getCount();

    ~ColorPixel();
};

#endif