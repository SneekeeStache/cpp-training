#include <iostream>
//inheritance permet d'etendre une classe existance et donnée des fonctionalité a une classe

class Entity{

public:
    float X,Y;
    void Move(float xa, float ya){
        X +=xa;
        Y +=ya;
    }
};

class Player : public Entity{ //player hérite de Entity
public:
    const char* Name;
    void print(){
        std::cout<< Name << std::endl;
    }
};
int main(){


    Player player;
    player.Move(5,5); // ont appele des fonction de entity avec player qui hérite de entity
    player.X=2;
}