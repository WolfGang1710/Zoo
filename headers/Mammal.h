//
// Created by ecole on 10/01/2024.
//

#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H


#include "Animal.h"

class Mammal : public Animal {
private:
    string furColor; // couleur de la fourrure
public:
    Mammal()=default;
    Mammal(string &name, string &color, string &diet, string &habitat, string &sounds,
    bool isPet, int age, double weight, double height, string &furColor);
    Mammal(const Mammal &other); // constructeur de copie

    const string &getFurColor() const;
    void setFurColor(const string &furColor);

    virtual void printInfo() override;
};


#endif //ZOO_MAMMAL_H
