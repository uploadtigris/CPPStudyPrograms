#include <iostream>
#define LOG(x) std::cout << x << std::endl

//creating class is creating a new variable TYPE
//variables made for class types are called OBJECTS
//a new object variable is called and instance

//FUNCTIONS inside classes are called METHODS
//anything that you can do with classes, you can do without classes.

class Player{
public: //allows us to access these variables outside of this class
    int x, y;
    int speed;

    void Move(int xa, int ya) { //a function to manipulate Player's variables
       x += xa * speed;
       y += ya * speed;
    };
};

int main() {
    Player player;//INSTANTIATED a new player object
    player.x = 5;
    player.Move(1, -1);


    std::cin.get();
};
