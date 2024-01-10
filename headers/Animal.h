//
// Created by ecole on 10/01/2024.
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <iostream>
#include <string>
using namespace std;


class Animal {
private:
    string name; // nom de l'animal
    string color; // couleur de l'animal
    string diet; // regime alimentaire de l'animal
    string habitat; // habitat de l'animal
    string sounds; // son de l'animal
    bool isPet; // si l'animal est considéré comme animal de compagnie
    int age; // son age
    double weight; // son poids
    double height; // sa taille
public:
    Animal()=default;
    Animal(string &name, string &color, string &diet, string &habitat, string &sounds,
           bool isPet, int age, double weight, double height);
    Animal(const Animal &other); // Constructeur de copie

    const string &getName() const;
    void setName(const string &name);

    const string &getColor() const;
    void setColor(const string &color);

    const string &getDiet() const;
    void setDiet(const string &diet);

    const string &getHabitat() const;
    void setHabitat(const string &habitat);

    const string &getSounds() const;
    void setSounds(const string &sounds);

    bool isPetFunc() const;
    void setIsPet(bool isPet);

    int getAge() const;
    void setAge(int age);

    double getWeight() const;
    void setWeight(double weight);

    double getHeight() const;
    void setHeight(double height);

    virtual void printInfo();
};


#endif //ZOO_ANIMAL_H
