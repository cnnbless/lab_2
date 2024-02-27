//
// Created by Tony on 19.02.2024.
//

#ifndef OOP_LAB2_OPTICAL_H
#define OOP_LAB2_OPTICAL_H
#include <iostream>
using namespace std;

class Optical {
    private:
        string name;
        float weight;
        string typeOfMaterial;
        bool laser;
    public:
        void setName();
        void getName();
        void setWeight();
        void getWeight();
        void setTypeOfMaterial();
        void getTypeOfmaterial();
        void setLaser();
        void getLaser();
        void printInfo();

        Optical(string Name = "None", float Weight = 0, string TypeOfMaterial = "None", bool Laser = false);
        ~Optical();
};


#endif //OOP_LAB2_OPTICAL_H
