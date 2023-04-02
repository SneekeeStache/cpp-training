#include <iostream>
// les class sont fait pour du rangement et rendre notre vie plus facile
//la difference entre une classe vs une stucts est que une classe par default est privé et un stuct est public
//struct est principalement utiliser pour la compatibilité avec C
//l'utilisation du struct depend du dev
//exemple quelqu'un utilise struct pour du POD "plain old data":

/*
    PDO:
    int, char, wchar_t, bool, float, double are PODs, as are long/short and signed/unsigned versions of them.
    pointers (including pointer-to-function and pointer-to-member) are PODs,
    enums are PODs
    a const or volatile POD is a POD.
*/
class Player{
    //public permet d'avoir accès aux variables
public:
    int x, y;
    int speed;
    //ont peut mettre une fonction dans une classe on les appelle des methodes
    void Move( int xa,int ya){
        x += xa * speed;
        y += ya * speed;
    }
};// une classe se termine par ;



int main(){

    Player player;
    player.Move(1,-1);

}