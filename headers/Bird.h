//
// Created by ecole on 10/01/2024.
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "Animal.h"

class Bird : public Animal {
private:
    double wingspan; // envergure
public:
    Bird()=default;
    Bird(string &name, string &color, string &diet, string &habitat, string &sounds,
    bool isPet, int age, double weight, double height, double wingspan);
    Bird(const Bird &other); // constructeur de copie

    double getWingspan() const;
    void setWingspan(double wingspan);

    virtual void printInfo() override;
};


#endif //ZOO_BIRD_H
