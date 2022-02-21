/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:50:16 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 16:43:58 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog Construtor Called" << std::endl;
	return ;
}
Dog::Dog(std::string type) : Animal(type)
{
	this->_brain = new Brain();
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
	delete this->_brain;
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
	if (this->_brain)
		delete _brain;
	this->_brain = new Brain(rhs.getBrain());
	return *this;
}
Brain&		Dog::getBrain(void) const
{
	return *this->_brain;
}

std::ostream&		operator<<(std::ostream& ofs, Dog const& rhs)
{
	ofs << "Animal type is " << rhs.getType() << std::endl;
	return ofs;
}
