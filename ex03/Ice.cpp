/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:28:04 by armosnie          #+#    #+#             */
/*   Updated: 2026/01/26 14:57:32 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("Ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &copy) {
    
    this->_type = copy._type;
}

Ice & Ice::operator=(const Ice &copy) {

    if (this != &copy) {
        this->_type = copy._type;
    }
    return *this;
}

void Ice::use(ICharacter &target) {

    std::cout << "*Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const {

    return new Ice(*this);
}

