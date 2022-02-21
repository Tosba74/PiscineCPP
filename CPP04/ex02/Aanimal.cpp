/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:06:25 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 00:09:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"

Aanimal::Aanimal()
{
	this->type = "undefined";
	std::cout << "Aanimal(" << this->type << ") Constructor called" << std::endl;
}
Aanimal::Aanimal(std::string type) : type(type)
{
	std::cout << "Aanimal(" << this->type << ") Constructor called" << std::endl;
}
Aanimal::Aanimal(Aanimal const& copy)
{
	*this = copy;
	std::cout << "Aanimal(" << this->getType() << ") Constructor called" << std::endl;
}
Aanimal::~Aanimal()
{
	std::cout << "Aanimal(" << this->type << ") Destructor called" << std::endl;
}

void				Aanimal::makeSound(void) const
{
	std::cout << "This Aanimal is mute !?" << std::endl;
}
std::string			Aanimal::getType(void) const
{
	return this->type;
}
Aanimal&				Aanimal::operator=(Aanimal const& rhs)
{
	this->type = rhs.getType();
	return *this;	
}
		
std::ostream&		operator<<(std::ostream& ofs, Aanimal const& rhs)
{
	ofs << "Type = " << rhs.getType() << std::endl;
	return ofs;
}
