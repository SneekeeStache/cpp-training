//#include "log.h" //importe dans les fichier du programe
#include <iostream> //importe depuis le system
#include <memory.h>
#define log(x) std::cout << x << std::endl
int main(){
    /*
    int var =8;
    int* ptr= &var;
    //void* ptr=0; // pour un pointer 0 est null ont peut aussi utiliser nullptr | ceci est un exemple
    //si le pointer est sur void il sera difficile de modifier la valeur vue que l'ordinateur ne saura pas gerer le type de variable
    *ptr = 10;
    log(var);
    */
    //definire un emplacement de memoire pour quelque chose que l'ont souhaite
    /*
    char* buffer = new char[8]; //donne 8 bit de memoir pour se pointer
    memset(buffer,0,8); //rempli un bloc de memoir avec un pointer, une valeur qui sera rentré dans la memoire et une taille
    char** ptr = &buffer; // pointer d'un pointer | peu de risque d'utilisation en c++
    delete[] buffer; // supprime les valeur dans la memoire
    return 0;
     */
}