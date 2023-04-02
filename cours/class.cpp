class Player{
    //public permet d'avoir accès aux variables
public:
    int x, y;
    int speed;
    //ont peut mettre une fonction dans une classe on les appelle des methodes
    void Move( int xa,int ya){
        x += xa * player.speed;
        y += ya * player.speed;
    }
};// une classe se termine par ;



int main(){

    Player player;
    player.Move(1,-1);

}