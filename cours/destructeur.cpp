#include <iostream>

class Entity
{
public:
    float X,Y;
    //un constructeur ce lance a chaque fois que ont instancie une classe
    //un classe crée par defaut un constructeur, il est juste vide
    //comparé a des langage comme java, il faut manuelement initialiser les type primitive
    Entity(){
        X=1;
        Y=2;
        std::cout << "Constructed Entity" << std::endl;
    }
    //ont peut faire plusieur constructeur du moment que il y a des parametre different

    //ceci est un destructeur;
    ~Entity(){
        std::cout << "Destroyed Entity !" << std::endl;
    }
    void print(){
        std::cout << X << "," << Y << std::endl;
    }
};

class Log{
    /*
private:
    Log(){

    }
     */
    Log() = delete; //ceci permet de dire au compiler de ne pas faire de constructeur
public:
    static void Write(){

    }
};

void function(){
    Entity e;
    e.print();
    e.~Entity(); // ont peut appeler le déconstructeur, n'utiliser que dans des rare cas sinon a eviter.
}
int main(){
    function();
    std::cin.get();
}