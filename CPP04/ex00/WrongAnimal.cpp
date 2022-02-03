/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:06:25 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 21:49:00 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "undefined";
	std::cout << "WrongAnimal(" << this->type << ") Constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	this->type = copy.getType();
	std::cout << "WrongAnimal(" << this->getType() << ") Constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal(" << this->type << ") Destructor called" << std::endl;
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "This WrongAnimal is mute !?" << std::endl;
}
std::string		WrongAnimal::getType(void) const
{
	return this->type;
}
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	this->type = rhs.getType();
	return *this;	
}
		
std::ostream&	operator<<(std::ostream& ofs, WrongAnimal const& rhs)
{
	ofs << "Type = " << rhs.getType() << std::endl;
	return ofs;
}
