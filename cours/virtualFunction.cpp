#include <iostream>
//les virtual functions ont des inconvenient
//sa utilise plus de memoir car il faut mettre dans la memoir un vtable et sa demande un pointer
//a chaque fois que ont appele une fonction virtuel ont dois passé par le tableau virtuel ce qui est un coup aditionel en performance
//le coup en performance n'est pas tres haut sur nos machine actuel mais si ont utilise sa sur une machine moins puissante, il serait peut etre mieux d'éviter

class Entity{
public:
    virtual std::string GetName() { return "Entity";} //virtual permet que si ont utilise cette fonction avec une autre classe qui hérite de celle la, alors la classe overwrite la fonction avec c'elle de la classe qui hérite
};

class Player : public Entity{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
            : m_Name(name){}

    std::string GetName() override{ return m_Name;} // override nous donnera une erreur si ont oublie virtual et est un bonne indicateur pour ce reperer mais pas obligatoir
};

void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}


int main(){
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;
    PrintName(e);

    Player* p = new Player("kyle");
    std::cout << p->GetName() << std::endl;
    PrintName(p);
}