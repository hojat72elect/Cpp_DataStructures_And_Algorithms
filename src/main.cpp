#include <iostream>
#include "Zombie.hpp"

int main() {

    Zombie zombie1(100, "Bob");
    std::string zombie1_name = zombie1.getName();

    std::cout << "Right now, the name of our zombie is this : " << zombie1_name << std::endl;
    zombie1.setName("Zed");
    zombie1_name = zombie1.getName();
    std::cout << "But after renaming, the name of our zombie is this : " << zombie1_name << std::endl;

    return 0;

}