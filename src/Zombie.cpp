#include "Zombie.hpp"

Zombie::Zombie(int size, const std::string &name) : Monster(size, name) {}

void Zombie::eat() {
    power += 10000;
}

void Zombie::fight() {
    power -= size * 3;
}
