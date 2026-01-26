/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:36:47 by armosnie          #+#    #+#             */
/*   Updated: 2026/01/26 15:44:47 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &copy) {
    
    if (this != &copy) {
        this->_type = copy._type;
    }
}

Cure & Cure::operator=(const Cure &copy) {

    if (this != &copy)
        this->_type = copy._type;
    return *this;
}

void Cure::use(ICharacter &target) {

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const {

    return new Cure(*this);
}