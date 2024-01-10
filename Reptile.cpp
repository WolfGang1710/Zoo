//
// Created by ecole on 10/01/2024.
//

#include "headers/Reptile.h"

Reptile::Reptile(string &name, string &color, string &diet, string &habitat, string &sounds, bool isPet, int age,
                 double weight, double height, string &_scalePattern):
                 Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), scalePattern(_scalePattern){}

Reptile::Reptile(const Reptile &other) : Animal(other), scalePattern(other.scalePattern) {}

const string &Reptile::getScalePattern() const {
    return scalePattern;
}

void Reptile::setScalePattern(const string &_scalePattern) {
    Reptile::scalePattern = _scalePattern;
}

void Reptile::printInfo() {
    string name = Animal::getName();
    string color = Animal::getColor();
    string _scalePattern = Reptile::getScalePattern();
    string diet = Animal::getDiet();
    string habitat = Animal::getHabitat();
    // string sounds = Animal::getSounds(); // not used now
    bool isPet = Animal::isPetFunc();
    int age = Animal::getAge();
    double weight = Animal::getWeight();
    double height = Animal::getHeight();

    cout << endl << "Animal of type Reptile:";
    cout << endl << "Name : " << name;
    cout << endl << "Color : " << color;
    cout << endl << "Diet" << diet;
    cout << endl << "Habitat" << habitat;
    cout << endl << "Age : " << age << "'s old";
    if(isPet){
        cout << endl << "This animal is a pet";
    } else {
        cout << endl << "This animal is not a pet";
    }
    cout << endl << "Weight : " << weight << "kg";
    cout << endl << "Height : " << height << "cm";
    cout << endl << "Wingspan : " << _scalePattern;
}