#include <iostream>

//"enumeration",
//a way to give a name to a value.
//really good when you need to represent a group a values numerically.

enum Example // : type ..... to allocate a certain type to this enum
{
    A, B, C
};

class Log //(to access Error of Level we would need to use Log::Error)
{
public:
    enum Level // this level isn't really a namespace so we cannot use it as one.
    {
        Error = 0, Warning, Info
    };
};

//if you don't specify the exact values, the letters will increment.
//ex: if the enum body's A = 6 then B will be 7.
int a = 0;
int b = 1;
int c = 2;

int main()
{
    Example value = B;

    if (value == B)
    {

    }

    std::cin.get();
}
