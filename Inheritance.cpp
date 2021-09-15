#include <iostream>
//Inheritance;
//extends an existing class and provide functionality to an existing base class.

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};
                            //Player is now a sub-class of entity
                            //Player is now a "super-set" of entity, having all entity has and more.
class Player : public Entity//Player now has everything that entity has.
{                           //Player class is now everything entity is plus more.
public:
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main() {
    std::cout << sizeof(Player) << std::endl;

    Player player;
    player.Move(5, 5);
    player.X = 2;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
