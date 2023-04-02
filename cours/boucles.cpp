//
// Created by kyle on 02/04/23.
//
#include <iostream>

int main(){
    int i(0);
    while (i < 3)
    {
        std::cout << i << std::endl;
        i++;
    }
// exemple do while
// dans ce cas la, la condition est tester que a la fin

int y(0);
do
{
    std::cout << y << std::endl;
    y++;
}while (y < 3);


//exemple boucle for
//for(initialisation ; condition ; incrementation)

int compteur(0);
for(compteur=0;compteur < 10; compteur++){
    std::cout << compteur << std::endl;
}
}