/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:50:16 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 18:58:32 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Construtor Called" << std::endl;
	return ;
}
Dog::Dog(Dog const& copy) : Animal(copy)
{
	std::cout << "Copy " << this->getType() << " Construtor Called" << std::endl;
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
