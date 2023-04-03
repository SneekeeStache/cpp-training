#include <iostream> //importe depuis le system
#include <memory.h>


//static a l'interieur d'une classe cette variable va partager une zone de memoire a traver tout le code pour l'utilisation de la classe

struct Entity{
    static int x,y;
    //cette methode ne peut pas appeler x,y si il ne sont pas static vue que il ne peut pas connetre une variable qui n'est pas general, ont peut rajouter des parametre pour aider en alternative
    static void print(){
        std::cout << x << "," << y << std::endl;
    }
};

int Entity::x; //definie les variable static
int Entity::y;
int main(){
    //Entity e;
    Entity::x=2;
    Entity::y=3;

    //Entity e1;
    Entity::x=5; //e1.x=5 et e1.y=8 ne servent plus a rien vue que la class est static et ont modifie la meme variable
    Entity::y=8;

    Entity::print();
    Entity::print();
}