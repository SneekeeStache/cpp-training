//
// Created by kyle on 02/04/23.
//
#include <iostream>

int main(){
    // les type de variables primitive
    // char 1bit | design un caractère "A" par exemple qui du coup a un identifier qui dans ce cas la est 65 donc sit mon char est egale a 65 au lieu de A il me retournera "A" a la compilation
    // int 4bits | un nombre entier
    // float 4 bits | nombre a virgule avec precision a 7 decimale | exemple de float | float variable = 5.5f;
    // double 8 bits | nombre a virgule avec precision a 15 decimale | exemple de double | double var = 5.2;
    // bool 1 bits | true ou false donc vrai ou faux equivalent a 1 pour true et 0 pour false| exemple de bool | bool variable = false;
    //modificateur de variable
    // short 2bits | un nombre entier entre -32768 et 32767
    // long 4 bits | valeur entre -2147483647 et 2147483647 | peut etre utiliser sur plusieur type comme un int ou un float
    // long long 8 bits | plus grande valeur
    // unsign number est toujours positif et il permet d'avoir un bit de plus en enlevant les nombre negatif
    // exemple: unsign int uneVariable = 8;
    //sizeof(type) permet de voir le nombre de bits utiliser par un type



    int numUtilisateur;
    std::cout <<"entrer un numero" << std::endl;
    //recupere une entré utilisateur dans le terminal
    std::cin >> numUtilisateur;
    std::cout <<"votre numero:" << numUtilisateur << std::endl;
    //a placer si ont utilise getline apres un cin
    std::cin.ignore();
    std::cout <<"entrer un String" << std::endl;
    std::string stringUtilisateur;
    std::getline(std::cin,stringUtilisateur);
    std::cout <<"votre String:" << stringUtilisateur << std::endl;
}