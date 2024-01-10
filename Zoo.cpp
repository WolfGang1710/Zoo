//
// Created by ecole on 10/01/2024.
//

#include "headers/Zoo.h"

Zoo::Zoo(const string &_name) : name(_name) {}

Zoo::Zoo(Zoo &other) {
    name = other.name;
    animals = other.animals;
}

const string &Zoo::getName() const {
    return name;
}

void Zoo::setName(const string &_name) {
    Zoo::name = _name;
}
