/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:50:16 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 00:20:13 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Construtor Called" << std::endl;
	return ;
}
Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog Construtor<type> Called" << std::endl;
	return ;
}
Dog::Dog(Dog const& copy)
{
	*this = copy;
	std::cout << "Copy " << this->getType() << " Dog Construtor<copy> Called" << std::endl;
	return ;
}
Dog::~Dog()
{
	std::cout << "Destrutor " << this->getType() << " Called" << std::endl;
	return ;
}

void		Dog::makeSound(void) const
{
	std::cout << "Animal " << this->getType() << " says WoOuf" << std::endl;
	return ;
}
Dog&		Dog::operator=(Dog const& rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::ostream&		operator<<(std::ostream& ofs, Dog const& rhs)
{
	ofs << "Animal type is " << rhs.getType() << std::endl;
	return ofs;
}
