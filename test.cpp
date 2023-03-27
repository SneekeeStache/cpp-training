#include <iostream>
#include <string>
int main()
{
    //permet d'afficher du text
    std::cout << "hello world" << std::endl;
    //variable int
    int monInt(15);
    //variable String
    std::string monString("test");
    //affiche mon int et mon string
    std::cout << "mon int:" << monInt << " mon String:" << monString << std::endl;
    //reference mon int
    int& maReferenceInt(monInt);
    std::cout << "mon int comme reference:" << maReferenceInt << std::endl;
    return 0;
}
