//
// Created by Tony on 19.02.2024.
//
#include "Membrane.h"
void Membrane::setName() {
    cout << "Введіть назву: ";
    string NAME;
    cin >> NAME;
    name = NAME;
}
void Membrane::getName() {
    cout << "Name is:" << name << endl;
}
void Membrane::setTypeOfMaterial() {
    cout << "Введіть тип матеріалу клавіатури: ";
    string TYPE;
    cin >> TYPE;
    typeOfMaterial = TYPE;
}
void Membrane::getTypeOfmaterial() {
    cout << "Material" << typeOfMaterial << endl;
}
void Membrane::setWeight() {
    float WEIGHT;
    cout << "enter the weight: ";
    cin >> WEIGHT;
    weight = WEIGHT;
}
void Membrane::getWeight() {
    cout << "weight of keyboard: "<< weight<< "kg" << endl;
}
void Membrane::setWireless() {
    int wirelessness;
    cout << "enter if u need wirelesness(1-yes, 2-no): ";
    cin >> wirelessness;
    if (wirelessness==1){
        wireless = true;
    } else {
        wireless = false;
    }
}
void Membrane::getWireless() {
    if (wireless== true){
        cout << "it is wireless" << endl;

    } else {
        cout << "it needs wire"<< endl;
    }
}
void Membrane::printInfo() {
    cout << "Name: " << name << endl << "Material: " << typeOfMaterial << endl << "Weight: " << weight << endl << "Wireless: " << wireless << endl << endl;

}
Membrane::Membrane(){
    name="None";
    weight=0;
    typeOfMaterial="None";
    wireless= false;
}
Membrane::Membrane(std::string NameOfKeyboard): Membrane(){
    name=NameOfKeyboard;
}
Membrane::Membrane(std::string NameOfKeyboard, float Weight):Membrane(NameOfKeyboard){
    weight=Weight;
}
Membrane::Membrane(std::string NameOfKeyboard, float Weight, std::string NameTypeOfMaterial):Membrane(NameOfKeyboard,  Weight) {
    typeOfMaterial=NameTypeOfMaterial;
}
Membrane::Membrane(std::string NameOfKeyboard, float Weight, std::string NameTypeOfMaterial, bool Wireless):Membrane(NameOfKeyboard,  Weight,  NameTypeOfMaterial) {    wireless=Wireless;
}
Membrane::~Membrane() {
    cout<<"called destructor"<<endl;
}