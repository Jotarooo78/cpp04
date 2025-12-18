#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "Animal.hpp"

class WrongCat : public Animal {

    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &WrongCatCopy);
        WrongCat &operator=(const WrongCat &WrongCatCopy);

        void makeSound() const;
};

#endif