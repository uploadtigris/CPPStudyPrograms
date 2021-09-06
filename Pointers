#include <iostream>

//lETS FOCUS ON POINTERS
//this focuses on raw pointers

//A pointer is an integer (number) which STORES a memory address.
//TYPES ARE ONLY THERE TO HELP, THEY DO NOT DICTATE ANYTHING ABOUT POINTERS

#define LOG(x) std::cout << x << std::endl;

int main() {
    int var = 8;
    //double* ptr = (double*)&var; //this is called "casting a type"
    int* ptr = &var;
    *ptr = 10;//'*ptr' de-referencing, or accessing the data of ptr
    LOG(var);
    std::cin.get();

    std::cout << ("=======================================") << std::endl;

    char* buffer = new char[8]; //this is asking for 8 bytes of memory
    //memset(pointer, value, size of bytes to fill)
    memset(buffer, 0, 8);

    char** dblptr = &buffer;

   LOG(&buffer);

    delete[] buffer; //deletes the buffer so the memory is no longer allocated to it
    std::cin.get();

    std::cout << ("=======================================") << std::endl;

}
