/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:38:29 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:38:30 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
}
Ice::Ice(const Ice& src)
{
	*this = src;
}
Ice::~Ice()
{
}

Ice &				Ice::operator=(Ice const & rhs)
{
	if ( this != &rhs )
		this->type = rhs.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	return(new Ice(*this));
}
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::ostream &			operator<<(std::ostream& ofs, Ice const& inst)
{
	ofs << "Type = " << inst.getType();
	return ofs;
}
