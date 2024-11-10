#ifndef PPM_H
#define PPM_H

#include "ColorPixel.h"

class PPM {
   private:
    string magic_number;
    string description;
    int width;
    int height;
    int max_intensity;
    vector<vector<ColorPixel>> pixmap;

   public:
    PPM();
    PPM(string magic_number, string description, int max_intensity, int height,
        int width, vector<vector<ColorPixel>> pixmap);

    void populatePixMap();

    string getMagicNumber();
    string getDescription();
    vector<int> getDimensions();
    int getMaxIntensity();
    vector<vector<ColorPixel>> getPixmap();

    vector<vector<ColorPixel>> rotate(string direction, int angle);

    ~PPM();
};

#endif