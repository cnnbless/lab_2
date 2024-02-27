//
// Created by Tony on 19.02.2024.
//

#include "Mechanic.h"
void Mechanic::setName() {
    cout << "Введіть назву: ";
    string NAME;
    cin >> NAME;
    name = NAME;
}
void Mechanic::getName() {
    cout << "Name is:" << name << endl;
}
void Mechanic::setTypeOfMaterial() {
    cout << "Введіть тип матеріалу клавіатури: ";
    string TYPE;
    cin >> TYPE;
    typeOfMaterial = TYPE;
}
void Mechanic::getTypeOfmaterial() {
    cout << "Material" << typeOfMaterial << endl;
}
void Mechanic::setRgb() {
    int rgb;
    cout << "Підствіка(1-yes, 2-no): ";
    cin >> rgb;
    if (rgb == 1){
        RGB=true;
    }
    else  {
        RGB  = false;
    }
}
void Mechanic::getRgb() {
    if (RGB == true){
        cout << "rgb-yes"<<endl;
    }
    else {
        cout << "rgb no"<< endl;
    }
}
void Mechanic::setWeight() {
    float WEIGHT;
    cout << "enter the weight: ";
    cin >> WEIGHT;
    weight = WEIGHT;
}
void Mechanic::getWeight() {
    cout << "weight of keyboard: "<< weight<< "kg" << endl;
}
void Mechanic::printInfo() {
    cout << "Name: " << name << endl << "Material: " << typeOfMaterial << endl << "Weight: " << weight << endl << "RGB: " << RGB << endl << endl;

}
Mechanic::Mechanic() {
    name = "none";
    weight = 0;
    typeOfMaterial = "none";
    RGB = false;
}
Mechanic::Mechanic(string &&Name) {
    name = Name;
    weight = 0;
    typeOfMaterial = "none";
    RGB = false;
}
Mechanic::Mechanic(string &&Name, float Weight)
{
    name = Name;
    weight = Weight;
    typeOfMaterial = "none";
    RGB = false;
}
Mechanic::Mechanic(std::string &&Name, float Weight, string &&TypeOfMaterial)
{
    name = Name;
    weight = Weight;
    typeOfMaterial = TypeOfMaterial;
    RGB = false;
}
Mechanic::Mechanic(std::string &&Name, float Weight, std::string &&TypeOfMaterial, bool Rgb)
{
    name = Name;
    weight = Weight;
    typeOfMaterial = TypeOfMaterial;
    RGB = Rgb;
}
Mechanic::~Mechanic(){
    cout<<"called destructor"<<endl;
}