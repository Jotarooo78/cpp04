/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:12:24 by armosnie          #+#    #+#             */
/*   Updated: 2025/12/18 14:12:52 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {

    std::cout << "Default WrongCat constructor has been called" << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << "WrongCat Destructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCatCopy) : Animal(WrongCatCopy) {

    std::cout << "WrongCat copy assignator has been called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCatCopy) {
    
    if (this != &WrongCatCopy)
        Animal::operator=(WrongCatCopy);
    return *this;
}

void WrongCat::makeSound() const {
    
    std::cout << "MIIIIIAAAAaaaaaaAAaaaAIIWDiwfiwioOOOOOUuuuwgUFDBWUYYuYUUUUUUUU" << std::endl;
}