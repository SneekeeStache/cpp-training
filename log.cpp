#include "log.h"
#include <iostream>
void initLog(){
    log("test");
}
void Log(const char* message){
    std::cout << message << std::endl;
}