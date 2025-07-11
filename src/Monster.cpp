#include "Monster.hpp"

Monster::Monster(int size, const std::string &name) : size(size), name(name) {}

int Monster::getSize() const {
    return size;
}

void Monster::setSize(int size) {
    Monster::size = size;
}

const std::string &Monster::getName() const {
    return name;
}

void Monster::setName(const std::string &name) {
    Monster::name = name;
}

bool Monster::operator<(const Monster &rhs) const {
    return std::tie(size, power, name) < std::tie(rhs.size, rhs.power, rhs.name);
}

bool Monster::operator>(const Monster &rhs) const {
    return rhs < *this;
}

bool Monster::operator<=(const Monster &rhs) const {
    return !(rhs < *this);
}

bool Monster::operator>=(const Monster &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const Monster &monster) {
    os << "size: " << monster.size << " power: " << monster.power << " name: " << monster.name;
    return os;
}
