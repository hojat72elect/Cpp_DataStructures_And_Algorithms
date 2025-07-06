#ifndef CPP_DATASTRUCTURES_AND_ALGORITHMS_ZOMBIE_HPP
#define CPP_DATASTRUCTURES_AND_ALGORITHMS_ZOMBIE_HPP


#include "Monster.hpp"

class Zombie: public Monster{
public:
    Zombie(int size, const std::string &name);

    void eat() override;
};


#endif
