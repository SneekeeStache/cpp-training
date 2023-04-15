//la visibilité dans le code permet de s'organiser et de savoir qui peut voir le code
//on retrouve private, protected, public

//mettre tout en public est une mauvaise pratique en developement, ça n'affecte pas les performance ou autre
// c'est principalement de l'organisation
// utiliser private c'est juste pour dire "hey tu devrais pas avoir accès a sa en dehors de la classe, je ne devrais pas y touché a l'exterieur"
//c'est un message pour dire au autre dev que ont ne devrais pas l'appeler pour ne pas tout cassé


class Entity{
    //par defaut dans une class, ont est sur du private, dans un struct c'est public
    //private veut dire que seul ce qu'il y a dans la classe peut accédé a ce qui est privé, il y a une exception avec ce que l'ont appele "friend"
private:
    int X,Y;
public:// toute fonction ou variable dans public peuvent etre accécible a l'exterieur
    Entity(){
        X=0;
    }
};

class Player : public Entity{
    //meme si elle hérite de entity, la classe player ne peut pas accédé aux variable et fonctions privé de entity
public:
    Player(){
        //X=0; ne marchera pas
    }
};
int main(){
    //X=0; ne marchera pas
}