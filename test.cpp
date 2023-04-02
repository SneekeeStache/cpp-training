#include <iostream>
#include <string>
#include <cmath>

/*

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

*/
//int main()
//{
    /*
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

    // pour faire un pointer il faut rajouter un * apres le type | exemple | bool* variable = false;
    // pour fait une reference il faut rajouter & apres le type | voir exemple au dessus|


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

    */

    /*
     // fonction math
     std::cout << "fonction math" << std::endl;
     std::cout << "la racine de 16 est:" << std::sqrt(16) << std::endl;
     // racine carré sqrt(x)
     // sinus| sin(x)
     // cosinus| cos(x)
     // tangente| tan(x)
     // exponentiel| exp(x)
     // Logarithme népérien| log(x)
     // Logarithme en base 10| log10(x)
     // valeur absolue| fabs()
     // arrondi vers le bas| floor()
     // arrondi vers le haut| ceil()
     // pour faire 4⁵| pow(4,5)

     */
    /*
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
    */

    // exemple switch
    /*
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
     */
    // combiner des condition:
    /*
     && veut dire "et"
     || veut dire "ou"
     ! veut dire "non"

     "et" veut dire que les 2 condition doivent etre valide
     "ou" veut dire que une des condition doit etre valide
     "non" veut dire que la condition ne doit pas etre valide
    */

    // exemple while
    /*
    int i(0);
    while (i < 3)
    {
        std::cout << i << std::endl;
        i++;
    }
    */
    // exemple do while
    // dans ce cas la, la condition est tester que a la fin
    /*
    int i(0);
    do
    {
        std::cout << i << std::endl;
        i++;
    }while (i < 3);
    */

    //exemple boucle for
    //for(initialisation ; condition ; incrementation)
    /*
    int compteur(0);
    for(compteur=0;compteur < 10; compteur++){
        std::cout << compteur << std::endl;
    }
    */
    /*
    //voici un exemple de comment utiliser la fonction que ont a réaliser
    int result = Multiply(3,2);
    std::cout<< result << std::endl;

    //diviser en plusieur fonction permet de mieux s'organiser mais attention a ne pas abuser et rendre le program ilisible
    //une bonne idée pour savoir si il faut créer une fonction est de se dire "est ce que je vais faire la meme chose plusieur fois"
    MultiplyAndLog(3,2);
    MultiplyAndLog(8,3);
    */
    //return 0;

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
//}

