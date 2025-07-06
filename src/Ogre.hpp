#ifndef CPP_DATASTRUCTURES_AND_ALGORITHMS_OGRE_HPP
#define CPP_DATASTRUCTURES_AND_ALGORITHMS_OGRE_HPP


#include "Monster.hpp"

class Ogre: public Monster {
public:
    Ogre(int size, const std::string &name);

    void eat() override;
};


#endif
