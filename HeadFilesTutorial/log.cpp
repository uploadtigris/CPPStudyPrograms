#include "common.h"
#include "header.h"

#include <stdlib.h> //files in the C stdlib usally have a .h at the end
#include <iostream> //files in the C++ stdlib usally have a .h at the end
#

// <> only for compiler include paths
// quotes are for EVERYTHING

void InitLog(){
    Log("Initializing Log");
}

void Log(const char* message){
    std::cout << message << std::endl;
}

