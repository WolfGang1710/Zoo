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
    int size; // Choix pour vérifier que la capacité du Zoo n'est pas dépassée
    vector<Animal*> animals; // Vecteur d'animaux de la class `Animal`.
public:
    Zoo();
    Zoo(const string &name);
    Zoo(Zoo &other);

    const string &getName() const;
    void setName(const string &name);

    void addAnimal(Animal newAnimal);
    size_t searchAnimalByName(string name); // size_t est choisie pour des questions d'utilisation de mémoire
    void removeAnimalByName(string name);
    void listAnimals();
    double averageAgeForType(string type); // int ou double, dépend de la précision voulue

};


#endif //ZOO_ZOO_H
