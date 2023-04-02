//
// Created by kyle on 02/04/23.
//
// pour faire un pointer il faut rajouter un * apres le type | exemple | bool* variable = false;
#include <iostream>
#include <memory.h>
#define log(x) std::cout << x << std::endl

void IncrementPoint(int* value)
{
    (*value)++;
    //dereference de l'adresse pour pas incrementré l'adresse mais la valeur
}

int main(){
    int var =8;
    int* ptr= &var;
    // dans le code "int* ptr= &var;" le & permet d'avoir l'adresse memoire de la vartiable,
    //void* ptr=0; // pour un pointer 0 est null ont peut aussi utiliser nullptr | ceci est un exemple
    //si le pointer est sur void il sera difficile de modifier la valeur vue que l'ordinateur ne saura pas gerer le type de variable
    *ptr = 10;
    log(var);

    //definire un emplacement de memoire pour quelque chose que l'ont souhaite

    char* buffer = new char[8]; //donne 8 bit de memoir pour se pointer
    memset(buffer,0,8); //rempli un bloc de memoir avec un pointer, une valeur qui sera rentré dans la memoire et une taille
    char** ptrP = &buffer; // pointer d'un pointer | peu de risque d'utilisation en c++
    delete[] buffer; // supprime les valeur dans la memoire
    return 0;
}
