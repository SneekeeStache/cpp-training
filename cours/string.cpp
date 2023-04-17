#include <iostream>
/*
// ne pas faire cela car ce qu'il y a dans la () est une copie
void PrintString(std::string string){
    string += "h"; // si on utilise sa actuellement cela n'affectera pas le string passé dans la fonction car c'est une copie
    std::cout << string << std::endl;
    //faire une copie fait que ont alloue sa sur la heap et du coup ce n'est pas optimiser et lent
    //si c'est du read only il faut mettre const et une reference
}
*/
//exemple read only
void PrintString(const std::string& string){
    std::cout << string << std::endl;
}


int main() {
    //const char* name = "kyle"; //un char est immutable, il a une taille fix, ont peut modifier les character mais ont ne peut pas le modifier car il a une taille fix
    //const fait que ont ne peut pas modifier les character de ce char
//7:18
    // dans la memoir la fin d'un char ce definie par 00
    // si ont crée une chaine de character dans un array et que ont la printe sans mettre 0 a la fin, le print affichera d'autre caractere qui sont dans la memoir car il ne sait pas ou s'arreter
    std::string name = "kyle";
    //les string ont l'avantage d'avoir plusieur fonction pour simplifier sont utilisation comparé a des char
    // ont ne peut pas faire std::string name = "kyle" + "pru"
    // mais pour ajouter ensenble 2 string ont peut faire
    std::string name2 = std::string("kyle") +"pru";
    name2.find("pru"); // permet de trouver du du texte dans un string ont peut du coup faire des condition
    // ont peut alors faire une condition comme
    bool contains = name.find("pr") != std::string::npos; // ceci permet de verifier si il contien les char rechercher, il check si il n'est pas egal a une illegal position pour savoir si il est contenu dans le mot

}