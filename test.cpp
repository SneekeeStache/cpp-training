#include <iostream>
#include <string>
int main()
{
    //permet d'afficher du text
    std::cout << "hello world" << std::endl;
    //variable int
    int monInt(15);
    //variable String
    // pour rajouter un / ou un " dans un string il faut faire // et /"
    std::string monString("test");
    //affiche mon int et mon string
    std::cout << "mon int:" << monInt << " mon String:" << monString << std::endl;
    //reference mon int
    int& maReferenceInt(monInt);
    std::cout << "mon int comme reference:" << maReferenceInt << std::endl;
    

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
    return 0;
}
