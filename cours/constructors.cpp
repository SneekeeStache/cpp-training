#include <iostream>

class Entity
{
public:
    float X,Y;
    //un constructeur ce lance a chaque fois que ont instancie une classe
    //un classe crée par defaut un constructeur, il est juste vide
    //comparé a des langage comme java, il faut manuelement initialiser les type primitive
    Entity(){
        X=0;
        Y=0;
    }
    //ont peut faire plusieur constructeur du moment que il y a des parametre different
    Entity(float x,float y){
        X=x;
        Y=y;
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


int main(){
    Log::Write();
    //Log l; // ceci ne marchera pas avec un constructeur privé ou bien delete
    //ont ne peut pas initialiser Log normalement car le constructeur est privé ou delete

    Entity e(10.0f,5.0f);
    e.print();
}