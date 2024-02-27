//
// Created by Tony on 19.02.2024.
//

#include "Optical.h"
void Optical::setName() {
    cout << "Введіть назву: ";
    string NAME;
    cin >> NAME;
    name = NAME;
}
void Optical::getName() {
    cout << "Name is:" << name << endl;
}
void Optical::setTypeOfMaterial() {
    cout << "Введіть тип матеріалу клавіатури: ";
    string TYPE;
    cin >> TYPE;
    typeOfMaterial = TYPE;
}
void Optical::getTypeOfmaterial() {
    cout << "Material" << typeOfMaterial << endl;
}
void Optical::setWeight() {
    float WEIGHT;
    cout << "enter the weight: ";
    cin >> WEIGHT;
    weight = WEIGHT;
}
void Optical::getWeight() {
    cout << "weight of keyboard: "<< weight<< "kg" << endl;
}
void Optical::setLaser() {
    int laserness;
    cout << "enter if u need wirelesness(1-yes, 2-no): ";
    cin >> laserness;
    if (laserness==1){
        laser = true;
    } else {
        laser = false;
    }
}
void Optical::getLaser() {
    if (laser== true){
        cout << "it is wireless" << endl;

    } else {
        cout << "it needs wire"<< endl;
    }
}
void Optical::printInfo() {
    cout << "Name: " << name << endl << "Material: " << typeOfMaterial << endl << "Weight: " << weight << endl << "Laser: " << laser << endl << endl;

}
Optical::Optical(std::string Name, float Weight, std::string TypeOfMaterial, bool Laser): name(Name), weight(Weight), typeOfMaterial(TypeOfMaterial), laser(Laser){
    cout << "called constructor default"<< endl;
}
Optical::~Optical() {
    cout << "destructor was calles"<< endl;
};