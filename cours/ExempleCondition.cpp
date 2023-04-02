//
// Created by kyle on 02/04/23.
//
#include <iostream>

int main(){
    // exemple condition
    int monNumeroCondition;
    std::cout << "taper un numero" << std::endl;
    std::cin >> monNumeroCondition;
    if (monNumeroCondition > 4)
    {
        std::cout << "mon numero est superieur a 4" << std::endl;
    }
    else if (monNumeroCondition < 4)
    {
        std::cout << "mon numero est inferieur a 4" << std::endl;
    }
    else
    {
        std::cout << "mon numero est 4" << std::endl;
    }

    // combiner des condition:
    /*
     && veut dire "et"
     || veut dire "ou"
     ! veut dire "non"

     "et" veut dire que les 2 condition doivent etre valide
     "ou" veut dire que une des condition doit etre valide
     "non" veut dire que la condition ne doit pas etre valide
    */


    // exemple switch
    int monNumeroSwitch;
     std::cout << "taper un numero" << std::endl;
     std::cin >> monNumeroSwitch;
     switch (monNumeroSwitch)
     {
     case 0:
          std::cout << "votre num est 0" << std::endl;
         break;
     case 1:
          std::cout << "votre num est 1" << std::endl;
         break;
     case 2:
          std::cout << "votre num est 2" << std::endl;
         break;
     default:
         std::cout << "votre num est en dehors des choix" << std::endl;
         break;
     }


}