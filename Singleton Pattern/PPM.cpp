#include "PPM.h"

PPM::PPM() {
    this->magic_number = "P2";
    this->description = "default description";
    this->width = 10;
    this->height = 10;
    this->max_intensity = 255;
    populatePixMap();
}

void PPM::populatePixMap() {
    for (int rowIndex = 0; rowIndex < this->height; rowIndex++) {
        vector<ColorPixel> row = {};

        for (int columnIndex = 0; columnIndex < this->width; columnIndex++) {
            if (columnIndex % 2 == 0) {
                ColorPixel pixel = ColorPixel(0, 0, 0);
                row.push_back(pixel);
            } else {
                ColorPixel pixel =
                    ColorPixel(this->max_intensity, this->max_intensity,
                               this->max_intensity);
                row.push_back(pixel);
            }
        }
        this->pixmap.push_back(row);
    }

    return;
}

PPM::PPM(string magic_number, string description, int max_intensity, int height,
         int width, vector<vector<ColorPixel>> pixmap) {
    this->magic_number = magic_number;
    this->description = description;
    this->max_intensity = max_intensity;
    this->height = height;
    this->width = width;
    this->pixmap = {};
    for (int rowIndex = 0; rowIndex < this->height; rowIndex++) {
        vector<ColorPixel> row = {};
        for (int columnIndex = 0; columnIndex < this->width; columnIndex++) {
            row.push_back(pixmap[rowIndex][columnIndex]);
        }
        this->pixmap.push_back(row);
    }
}

string PPM::getMagicNumber() { return this->magic_number; };
string PPM::getDescription() { return this->description; };
vector<int> PPM::getDimensions() {
    vector<int> dimensions = {this->height, this->width};
    return dimensions;
};
int PPM::getMaxIntensity() { return this->max_intensity; };
vector<vector<ColorPixel>> PPM::getPixmap() { return this->pixmap; };

vector<vector<ColorPixel>> PPM::rotate(string direction, int angle) {
    vector<vector<ColorPixel>> newPixmap = {};
    angle = angle % 360;
    for (int row = 0; row < this->height; row++) {
    }
};