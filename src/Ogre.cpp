#include "Ogre.hpp"

Ogre::Ogre(int size, const std::string &name) : Monster(size, name) {}

void Ogre::eat() {
    power + 5000;
}
