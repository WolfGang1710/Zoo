//
// Created by ecole on 10/01/2024.
//

#include "headers/Bird.h"

Bird::Bird(string &name, string &color, string &diet, string &habitat, string &sounds, bool isPet, int age,
               double weight, double height, double wingspan):
        Animal(name, color, diet, habitat, sounds, isPet, age, weight, height), wingspan(wingspan){}

Bird::Bird(const Bird& other) : Animal(other), wingspan(other.wingspan) {}
/*
 * Constructeur de copie qui va prendre un animal, copier ses caractéristiques
 * auquel on va ajouter la couleur de fourrure furColor
 * ce qui donnera un Mammal
 */



void Bird::printInfo() {
    // Animal::printInfo(); // plus simple mais ne correspond par à l'output voulu
    string name = Animal::getName();
    string color = Animal::getColor();
    double _wingspan = Bird::getWingspan();
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
    cout << endl << "Wingspan : " << _wingspan << "cm";
}

double Bird::getWingspan() const {
    return wingspan;
}

void Bird::setWingspan(double wingspan) {
    Bird::wingspan = wingspan;
}
