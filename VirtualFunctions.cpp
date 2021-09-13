#include <iostream>
#include <string>


//In layman's terms: if you want to overwrite a function, you need to mark the base class a virtual.
//cost additional memory for vtable
//we also need to go through the table to figure out which function we can map to....
//so, there are cost associated
//yet, these cost are next to null.

class Entity
{
public: //this virtual keyboard creates a vtable.
        //uses "dynamic dispatch."
    virtual std::string GetName() { return "Entity"; }
};  //A method called GetName which returns a string.

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
    : m_Name(name) { }
    std::string GetName() override { return m_Name; }
                            //using override helps us keep track of which functions were overriden
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    //Entity* entity = p; //what we want is for this to return the Player sub-classes get name.
    //std::cout << entity->Getname() << std::endl;

    std::cin.get();
}
