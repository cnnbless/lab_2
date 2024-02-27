//
// Created by Tony on 19.02.2024.
//

#ifndef OOP_LAB2_MEMBRANE_H
#define OOP_LAB2_MEMBRANE_H
#include <iostream>

using namespace std;
class Membrane {
    private:
        string name;
        float weight;
        string typeOfMaterial;
        bool wireless;
    public:
        void setName();
        void getName();
        void setWeight();
        void getWeight();
        void setTypeOfMaterial();
        void getTypeOfmaterial();
        void setWireless();
        void getWireless();
        void printInfo();


        Membrane();
        Membrane(string Name);
        Membrane(string Name, float Weight);
        Membrane(string Name, float Weight, string TypeOfMaterial);
        Membrane(string Name, float Weight, string TypeOfMaterial, bool Wireless);
        ~Membrane();
};



#endif //OOP_LAB2_MEMBRANE_H
