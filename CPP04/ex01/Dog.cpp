/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:50:16 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/21 22:22:48 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
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
	delete this->_brain;
	return ;
}

void		Dog::makeSound(void) const
{
	std::cout << "Animal " << this->getType() << " says WoOuf" << std::endl;
	return ;
}
void		Dog::set_ideas(int index, std::string idea)
{
    this->_brain->set_ideas(index, idea);
}
std::string Dog::get_idea(int index) const
{
    return (this->_brain->get_idea(index));
}
void		Dog::get_ideas(void) const
{
	this->_brain->get_ideas();
}
Dog&		Dog::operator=(Dog const& rhs)
{
	Animal::operator=(rhs);
	return *this;
}

std::ostream&		operator<<(std::ostream& ofs, Dog const& rhs)
{
	ofs << "Animal type is " << rhs.getType() << std::endl;
	return ofs;
}
