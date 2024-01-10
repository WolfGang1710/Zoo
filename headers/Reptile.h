//
// Created by ecole on 10/01/2024.
//

#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H


#include "Animal.h"

class Reptile : public Animal {
private:
    string scalePattern; // Motif d'ecailles du reptile.
public:
    Reptile()=default;
    Reptile(string &name, string &color, string &diet, string &habitat, string &sounds,
    bool isPet, int age, double weight, double height, string &scalePattern);
    Reptile(const Reptile &other); // constructeur de copie

    const string &getScalePattern() const;
    void setScalePattern(const string &scalePattern);

    virtual void printInfo() override;
};


#endif //ZOO_REPTILE_H
