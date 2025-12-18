/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:12:24 by armosnie          #+#    #+#             */
/*   Updated: 2025/12/18 14:12:52 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

    std::cout << "Default Cat constructor has been called" << std::endl;
}

Cat::~Cat() {

    std::cout << "Cat Destructor has been called" << std::endl;
}

Cat::Cat(const Cat &CatCopy) : Animal(CatCopy) {

    std::cout << "Cat copy assignator has been called" << std::endl;
}

Cat &Cat::operator=(const Cat &CatCopy) {
    
    if (this != &CatCopy)
        Animal::operator=(CatCopy);
    return *this;
}

void Cat::makeSound() const {
    
    std::cout << "MIIIIIAAAAaaaaaaAAaaaAIIWDiwfiwioOOOOOUuuuwgUFDBWUYYuYUUUUUUUU" << std::endl;
}