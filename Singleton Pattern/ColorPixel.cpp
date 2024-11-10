#include "ColorPixel.h"

int ColorPixel::count = 0;

ColorPixel::ColorPixel() {
    cout << "Color pixel default constructor called" << endl;
    this->red = 0;
    this->green = 0;
    this->blue = 0;
    this->count += 1;
}

ColorPixel::ColorPixel(int red, int green, int blue) {
    cout << "Color pixel parameterized constructor called" << endl;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->count += 1;
}

vector<int> ColorPixel::getPixel() {
    cout << "Get pixel called" << endl;
    vector<int> pixel = {this->red, this->green, this->blue};
    return pixel;
}

int ColorPixel::getCount() {
    cout << "# Color Pixels = " << ColorPixel::count << endl;
    return ColorPixel::count;
}

ColorPixel::~ColorPixel() {
    cout << "Destructing Color pixel" << endl;
    this->count -= 1;
}