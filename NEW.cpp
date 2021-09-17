#include <iostream>
#include "string"

//NEW;
//very very important to understanding memory
//used to allocate memory, on the heap, specifically.
//'new datatype' the compiler will then determine the correct allocation of memory in bytes. ex: new int
//new is finding a contiguous block of memory the size that we need. Then, gives us a pointer to this block.

//MUST USE DELETE

using String = std::string;

class Entity
{
private:
    String m_Name;
public:

    Entity() : m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

int main() {
    int a = 2;
    int* b = new int[50]; //200 bytes bc int is 4 bytes; int calls for 50 units.

    Entity* e = new Entity[50];

    delete e;
    delete[] b; //used when we allocated new WITH square brackets

    std::cin.get();
}
