//
// Created by ecole on 10/01/2024.
//

#include "headers/Mammal.h"

Mammal::Mammal(string &name, string &color, string &diet, string &habitat, string &sounds, bool isPet, int age,
               double weight, double height, string &furColor):
        Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), furColor(furColor){}

Mammal::Mammal(const Mammal& other) : Animal(other), furColor(other.furColor) {}
/*
 * Constructeur de copie qui va prendre un animal, copier ses caractéristiques
 * auquel on va ajouter la couleur de fourrure furColor
 * ce qui donnera un Mammal
 */


const string &Mammal::getFurColor() const {
    return furColor;
}

void Mammal::setFurColor(const string &furColor) {
    Mammal::furColor = furColor;
}

void Mammal::printInfo() {
    // Animal::printInfo(); // plus simple mais ne correspond par à l'output voulu
    string name = Animal::getName();
    string color = Animal::getColor();
    string _furColor = Mammal::getFurColor();
    string diet = Animal::getDiet();
    string habitat = Animal::getHabitat();
    // string sounds = Animal::getSounds(); // not used now
    bool isPet = Animal::isPetFunc();
    int age = Animal::getAge();
    double weight = Animal::getWeight();
    double height = Animal::getHeight();

    cout << endl << "Animal of type Mammal:";
    cout << endl << "Name : " << name;
    cout << endl << "Color : " << color;
    cout << endl << "Fur Color : " << _furColor;
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
}
