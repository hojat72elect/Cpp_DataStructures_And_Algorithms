#ifndef CPP_DATASTRUCTURES_AND_ALGORITHMS_MONSTER_HPP
#define CPP_DATASTRUCTURES_AND_ALGORITHMS_MONSTER_HPP


#include <string>
#include <ostream>

class Monster {
    std::string name;

protected:
    int power = 100;
    int size;
public:
    Monster(int size, const std::string &name);

    int getSize() const;

    void setSize(int size);

    const std::string &getName() const;

    void setName(const std::string &name);

    bool operator==(const Monster &rhs) const {
        return std::tie(size, power, name) == std::tie(rhs.size, rhs.power, rhs.name);
    }

    bool operator!=(const Monster &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Monster &rhs) const;

    bool operator>(const Monster &rhs) const;

    bool operator<=(const Monster &rhs) const;

    bool operator>=(const Monster &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Monster &monster);

    virtual void eat() = 0;
};


#endif
