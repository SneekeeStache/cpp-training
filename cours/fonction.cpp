//
// Created by kyle on 02/04/23.
//
#include <iostream>
//exemple function
//cette fonction prend 2 parametre et retourne la resultat de la multiplication de ses 2 parametre
//une fonction peut prendre un type et dois retourner se type de variable ou bien on peut mettre void si ont ne peut pas que la fonction retourne quelque chose
//attention mettre la fonction en dessous du main créer une erreur de compilation
int Multiply(int a, int b)
{
    return  a * b;
}

void MultiplyAndLog(int a, int b){

    int result = Multiply(a,b);
    std::cout << result << std::endl;
}

int main(){
    //voici un exemple de comment utiliser la fonction que ont a réaliser
    int result = Multiply(3,2);
    std::cout<< result << std::endl;

    //diviser en plusieur fonction permet de mieux s'organiser mais attention a ne pas abuser et rendre le program ilisible
    //une bonne idée pour savoir si il faut créer une fonction est de se dire "est ce que je vais faire la meme chose plusieur fois"
    MultiplyAndLog(3,2);
    MultiplyAndLog(8,3);

}