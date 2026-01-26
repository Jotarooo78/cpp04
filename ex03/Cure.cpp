/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:36:47 by armosnie          #+#    #+#             */
/*   Updated: 2026/01/21 18:38:35 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &copy) {
    
    if (this != &copy) {
        this->_type = copy._type;
    }
}

Cure & Cure::operator=(const Cure &copy) {

    this->_type = copy._type;
}

void Cure::use(ICharacter &target) {

    std::cout << "*" << target.getName() << " heals his/her wounds *" << std::endl;
}
