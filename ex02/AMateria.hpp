#ifndef AMATERIAS
#define AMATERIAS

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
   protected:
      std::string _type;
   public:
      AMateria(std::string const & type);
      virtual ~AMateria();
      AMateria(const AMateria &AMateriaCopy);
      AMateria & operator=(const AMateria &AMateriaCopy);

      std::string const & getType() const; //Returns the materia type
      virtual AMateria* clone() const = 0;
      virtual void use(ICharacter& target);
};

#endif