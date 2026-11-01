// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Hi There!" << std::endl;
    std::cout << "What is your name? " << std::flush;
    std::string name;
    std::cin >> name;
    std::cout << "Hi " << name << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}