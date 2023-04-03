//
// Created by kyle on 03/04/23.
//

#include <iostream> //importe depuis le system
#include <memory.h>


//extern int s_variable; //va chercher la variable a l'exterieur du code (exterior linking)
// si la variable externe est static elle n'est pas visible par les autre cpp

//static a l'interieur d'une classe cette variable va partager une zone de memoire a traver tout le code pour l'utilisation de la classe
//static a l'exterieur d'une classe = variables locales de durée statique
//utiliser static quand ont a pas besoin que la variable et la fonction soit global

static int s_Variable = 5; // "s_" est une convention pour designer une variable statique
int main(){

}