#include <iostream>
//REFERENCES are really just pointers
//REFERENCES are a way to reference an existing variable

//references MUST be intialized!

#define LOG(x) std::cout << x << std::endl

void refIncrement(int& value){
    value++;
}
void Increment(int* value){ //int* now takes in a int pointer as its value
    (*value)++;//must *dereference this value so we can write to the memory
             //if we DO NOT dereference then the value ++ would increment on an ADDRESS, NOT a value.
             //order of operations would increment first and then dereference. so,
             //we must use the parentheses to dereference first.
}

int main() {
    //creating an alias
    int b = 69;
    int& ref = b;
    ref = 4;
    LOG(b);

    std::cout << ("=======================================") << std::endl;

    int c = 4;
    Increment(&c);
    LOG(c);

    std::cout << ("=======================================") << std::endl;

    //this part of the code block does this more effectively than the previous
    int a = 5;
    refIncrement(a); //&a now holds the memory address of a
    LOG(a);

    std::cout << ("=======================================") << std::endl;

    int z = 5;
    int y = 8;

    int* exRef = &z;
    *exRef = 2; //must dereference the pointer FIRST before it can start working upon the value.
    exRef = &y;
    *exRef = 1;

    LOG(z);
    LOG(y);


}
