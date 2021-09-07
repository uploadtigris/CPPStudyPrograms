#include <iostream>
using namespace std;

//#define struct class

//structs and classes are essentially the same
//structs contents are able to be used at a larger scope\
//C language has structs yet no classes

//when inheritance is used, we don't use structs.

struct Player {
    int x, y;
    int speed;

    void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }
};

int main() {
    Player player;
    player.Move(1, -1);

    std::cin.get();
}
