
/*
 enum peut servire a groupé des int et definir des valeur specifique qui ne peuvent seulment etre les valeur groupé.
*/

enum Example : char {
    A=5, B, C //les valeur s'incremente automatiquement si ont ne donnent pas de valeur et commence par 0 si la premiere valeur n'est pas donné
};

int j =0;
int k = 1;
int l = 2;


int main() {
    Example value = B;
    if (value == 1) {
        //do something here
    }
}