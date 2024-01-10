//
// Created by ecole on 10/01/2024.
//

#include "headers/Zoo.h"

Zoo::Zoo() : name(""), size(0) {}

Zoo::Zoo(const string &_name) : name(_name) {
    size = 0;
}

Zoo::Zoo(Zoo &other) {
    name = other.name;
    animals = other.animals;
    size=other.size;
}

const string &Zoo::getName() const {
    return name;
}

void Zoo::setName(const string &_name) {
    Zoo::name = _name;
}

void Zoo::addAnimal(Animal newAnimal) {
    /*
     * Attention :
     * - le zoo ne doit pas être plein
     * -deux animaux ne peuvent avoir un même nom dans le Zoo
     */
    if(size >= MAX_CAPACITY){
        cout << endl << "Erreur : le Zoo est déjà plein !";
    } else {
        if(searchAnimalByName(newAnimal.getName())==-1) {
            cout << endl << "Erreur : un animal possède déjà ce nom dans le Zoo";
        } else {
            lower_bound() //https://en.cppreference.com/w/cpp/algorithm/lower_bound
        }
    }
}
