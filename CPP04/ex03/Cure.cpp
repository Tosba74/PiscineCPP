/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:33:52 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:35:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :AMateria("cure")
{

}
Cure::Cure( const Cure & src )
{
	*this = src;
}
Cure::~Cure()
{
}

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
		this->type = rhs.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	return(new Cure(*this));
}
void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::ostream&			operator<<(std::ostream& ofs, Cure const& inst)
{
	ofs << "Type = " << inst.getType();
	return ofs;
}
