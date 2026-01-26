/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:47:09 by armaunito         #+#    #+#             */
/*   Updated: 2026/01/21 15:09:12 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) {
   
   _type = type;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &copy) {

   _type = copy._type;
}

AMateria & AMateria::operator=(const AMateria &copy) {
   
      if (this != &copy) {
      _type = copy._type;
   }
}

std::string const & AMateria::getType() const {
   
   return _type;
}

void AMateria::use(ICharacter& target) {}