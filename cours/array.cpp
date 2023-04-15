#include <iostream> //importe depuis le system
#include <memory.h>
#include <array>
//exemple array c++/ cette version d'array a plus de risque de probleme que la version normal mais ont peut l'utiliser
class arraycpp{
public:
    std::array<int,5> testCpp;
    arraycpp(){
        for (int i=0;i < testCpp.size();i++){
            testCpp[i]=2;
        }
    }
};

int main(){
    static constexpr int size =5;// on peut utiliser une variable static avec constant expression pour la taille du array
    //array est plusieur variable dans une variable
    int example[size]; // definir un type, un nom de variable et une quantité de variable dans l'array avec []
    example[0] = 2; // pour definir une valeur dans un array il faut avoir le nom de l'array, mettre la position dans [] puis = la valeur
    example[4]=4; // un array va de 0 a la taille defini -1, par exemple si je met 5 sa fera 0,1,2,3,4
    int* ptr = example; // sa marche car un array est un pointer
    std::cout << example[0] << std::endl; //va renvoyer 2
    std::cout << example << std::endl; //va renvoyer une position memoir vue que un array fonctionne un peu comme un pointer
    int a = example[0]; // si ont depasse de la taille defini, le compiler nous donnera une erreur "memory acces violation" car ont essaye d'accédé a une partie de la memeoir qui ne nous appartien pas
    //attention le message d'erreur ne sera visible que en debug
    //la taille d'un array est fix et ne peut pas etre changer de façon conventionel
    std::cout << a << std::endl;

    for (int i = 0; i < 5; i++){ // <= consome plus de performance que un < et utilisé < 5 rend les choses plus lisible
        example[i]=2;
    }
    *(ptr +2)=6;

    int* another = new int[5]; //ceci comparer au array précédent est dans le "heap" du coup il ne se supprimera pas tant que le programme ne se termine pas ou bien que ont le termine manuellement comparé a l'autre qui se detruira a la fin du code
    for (int i = 0; i < 5; i++){
        another[i]=3;
    }
    delete[] another; // il faut rajouter [] au delete pour supprimer un array de la memoir
    //eviter de faire dans le heap si possible pour eviter la cout en performance
    //il n'y a pas de moyen de connaitre la taille d'un array en c++
    //le seul moyen de verifier depant du compiler et ne peut pas toujours etre sure
    // il est possible de le voir par contre si ont l'initialise dans le stack
    int count = sizeof(example) / sizeof(int); //voici un exemple pour le stack
    std::cout << count << std::endl;
    std::cout << sizeof(example) << std::endl;
}