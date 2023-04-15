//pure virtual functions ou bien interfaces dans d'autre langage
// une classe interface sert un peu comme un template, les classe qui l'hérite devront forcement integrer leur methode pour que cela marche
#include <iostream>
class Printable{
public:
    virtual std::string GetClassName()=0;
};

class Entity : public Printable{
public:
    virtual std::string GetName()  {return "Entity";} // le =0 fait que avec le virtual cela devient une pure virtual function
    std::string GetClassName() override { return "Entity";}
};

class Player : public Entity{ // pour rajouter une classe en héritage il suffit de faire ,NomDeClasse
private:
    std::string m_Name;
public:
    Player(const std::string& name)
            : m_Name(name){}

    std::string GetName() override{ return m_Name;}
    std::string GetClassName() override { return "Player";}
};

void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

void print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

int main(){
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;
    print(e);


    Player* p = new Player("kyle");
    std::cout << p->GetName() << std::endl;
    PrintName(p);
    print(p);
}