/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:31:03 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:31:36 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

}
AMateria::AMateria(std::string const& type)
{
	this->type = type;
}
AMateria::AMateria(const AMateria& src)
{
	*this = src;
}
AMateria::~AMateria()
{
	
}

AMateria&				AMateria::operator=(AMateria const& rhs)
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}
std::string const&	AMateria::getType() const
{
	return(this-> type);
}

void AMateria::use(ICharacter& target)
{
	if(this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
	if(this->type == "cure")
		std::cout << "* heals " << target.getName() <<"'s wounds *" << std::endl;
}

std::ostream&			operator<<(std::ostream& ofs, AMateria const& inst)
{
	ofs << "type = " << inst.getType();
	return ofs;
}
