//
// Created by Tony on 19.02.2024.
//
#include <iostream>

using namespace std;
#ifndef OOP_LAB2_MECHANIC_H
#define OOP_LAB2_MECHANIC_H
class Mechanic{

private:
    string name;
    float weight;
    string typeOfMaterial;
    bool RGB;

public:
    void setName();
    void getName();
    void setTypeOfMaterial();
    void getTypeOfmaterial();
    void setRgb();
    void getRgb();
    void setWeight();
    void getWeight();
    void printInfo();

    Mechanic();
    Mechanic(string &&Name);
    Mechanic(string &&Name, float Weight);
    Mechanic(string &&Name, float Weight, string &&TypeOfMaterial);
    Mechanic(string &&Name, float Weight, string &&TypeOfMaterial, bool Rgb);
    ~Mechanic();

};
#endif //OOP_LAB2_MECHANIC_H
