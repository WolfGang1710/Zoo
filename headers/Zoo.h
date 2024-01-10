//
// Created by ecole on 10/01/2024.
//

#ifndef ZOO_ZOO_H
#define ZOO_ZOO_H


#include <vector>
#include "Animal.h"

class Zoo {
private:
    string name; // Nom du Zoo
    static int MAX_CAPACITY; // la capacite maximale du Zoo
    vector<Animal*> animals; // Vecteur d'animaux de la class `Animal`.
public:
    Zoo() = default;
    explicit Zoo(const string &name);
    Zoo(Zoo &other);

    const string &getName() const;
    void setName(const string &name);


};


#endif //ZOO_ZOO_H
