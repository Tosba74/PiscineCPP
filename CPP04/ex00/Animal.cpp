/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:06:25 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 00:09:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "undefined";
	std::cout << "Animal(" << this->type << ") Constructor called" << std::endl;
}
Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal(" << this->type << ") Constructor called" << std::endl;
}
Animal::Animal(Animal const& copy)
{
	*this = copy;
	std::cout << "Animal(" << this->getType() << ") Constructor called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal(" << this->type << ") Destructor called" << std::endl;
}

void				Animal::makeSound(void) const
{
	std::cout << "This animal is mute !?" << std::endl;
}
std::string			Animal::getType(void) const
{
	return this->type;
}
Animal&				Animal::operator=(Animal const& rhs)
{
	this->type = rhs.getType();
	return *this;	
}
		
std::ostream&		operator<<(std::ostream& ofs, Animal const& rhs)
{
	ofs << "Type = " << rhs.getType() << std::endl;
	return ofs;
}
