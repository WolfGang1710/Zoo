//
// Created by ecole on 10/01/2024.
//

#include "headers/Animal.h"

Animal::Animal(string &_name, string &_color, string &_diet, string &_habitat, string &_sounds, bool _isPet, int _age,
               double _weight, double _height):
               name(_name), color(_color), diet(_diet), habitat(_habitat), sounds(_sounds),
               isPet(_isPet),
               age(_age), weight(_weight), height(_height)
{
}

Animal::Animal(const Animal &other) {
    name = other.name;
    color = other.color;
    diet = other.diet;
    habitat = other.habitat;
    sounds = other.sounds;
    isPet = other.isPet;
    age = other.age;
    weight = other.weight;
    height = other.height;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &_name) {
    Animal::name = _name;
}

const string &Animal::getColor() const {
    return color;
}

void Animal::setColor(const string &_color) {
    Animal::color = _color;
}

const string &Animal::getDiet() const {
    return diet;
}

void Animal::setDiet(const string &_diet) {
    Animal::diet = _diet;
}

const string &Animal::getHabitat() const {
    return habitat;
}

void Animal::setHabitat(const string &_habitat) {
    Animal::habitat = _habitat;
}

const string &Animal::getSounds() const {
    return sounds;
}

void Animal::setSounds(const string &_sounds) {
    Animal::sounds = _sounds;
}

bool Animal::isPetFunc() const {
    return isPet;
}

void Animal::setIsPet(bool _isPet) {
    Animal::isPet = _isPet;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int _age) {
    Animal::age = _age;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double _weight) {
    Animal::weight = _weight;
}

double Animal::getHeight() const {
    return height;
}

void Animal::setHeight(double _height) {
    Animal::height = _height;
}

void Animal::printInfo() {
    string _name = Animal::getName();
    string _color = Animal::getColor();
    string _diet = Animal::getDiet();
    string _habitat = Animal::getHabitat();
    // string sounds = Animal::getSounds(); // not used now
    bool _isPet = Animal::isPetFunc();
    int _age = Animal::getAge();
    double _weight = Animal::getWeight();
    double _height = Animal::getHeight();

    cout << endl << "Animal of unknown type:";
    cout << endl << "Name : " << _name;
    cout << endl << "Color : " << _color;
    cout << endl << "Diet" << _diet;
    cout << endl << "Habitat" << _habitat;
    cout << endl << "Age : " << _age << "'s old";
    if(isPet){
        cout << endl << "This animal is a pet";
    } else {
        cout << endl << "This animal is not a pet";
    }
    cout << endl << "Weight : " << _weight;
    cout << endl << "Height : " << _height;
}
