//
// Created by kyle on 02/04/23.
//
#include <iostream>

int main(){
    // "+" addition
    // "-" soustraction
    // "*" multiplication
    // "/" division
    // "%" modulo

    int const maConstante(10);
    std::cout <<"ceci est une constante elle restera toujours pareille:" << maConstante << std::endl;

    int monIncrementation(5);
    std::cout <<"mon int est actuellement a :"<< monIncrementation << std::endl;
    std::cout <<"incrementation avec ++" << std::endl;
    monIncrementation++;
    //utilise ++monIncrementation pour faire une post incrementation
    // par exemple
    //a=10
    //b=a++
    // le resultat de a sera 11 et b sera a 10
    // mais si ont fait
    //a = 10
    //b = ++a
    //le resultat de a sera 11 et b sera 11
    std::cout <<"mon int incrementé est actuellement a :"<< monIncrementation << std::endl;
    // le c++ supporte les +=, -=, *=, /=, %=
}