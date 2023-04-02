//
// Created by kyle on 02/04/23.
//
#include <iostream>
#define log(x) std::cout << x << std::endl

void Increment(int& value)
{
    value++;
    //dereference de l'adresse pour pas incrementré l'adresse mais la valeur
}

int main(){
    // pour fait une reference il faut rajouter & apres le type | voir exemple au dessus|
    //reference mon int
    int monInt=3;
    int& maReferenceInt(monInt);
    std::cout << "mon int comme reference:" << maReferenceInt << std::endl;

    //une reference permet d'éviter de créer de nouvelle variable en fonction et bien plus

    int a =5;
    int& ref=a;
    Increment(ref);
    log(ref);
    //le & suit le type, dans ce cas la est une ref elle ne donne pas l'adresse memoire mais créer une ref
    // une fois une reference créer ont ne peut pas changer ce quel reference a moins de touché a la memoire
    // une reference ne peut pas etre null
    //exemple d'utilisation de pointer pour changer ref
    int i = 5;
    int y = 8;

    int* reference= &i;
    reference= &y;
    log(i);
    log(y);
    log(*reference);
}