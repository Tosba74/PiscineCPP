/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:23:58 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/22 01:51:03 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Aanimal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Construtor Called" << std::endl;
	return ;
}
Cat::Cat(Cat const& copy) : Aanimal(copy)
{
	std::cout << "Copy " << this->getType() << " Construtor Called" << std::endl;
	return ;
}
Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destrutor " << this->getType() << " Called" << std::endl;
	return ;
}

void		Cat::makeSound(void) const
{
	std::cout << "Aanimal " << this->getType() << " says Miaou" << std::endl;
	return ;
}
void		Cat::set_ideas(int index, std::string idea)
{
    this->_brain->set_ideas(index, idea);
}
std::string Cat::get_idea(int index) const
{
    return (this->_brain->get_idea(index));
}
void		Cat::get_ideas(void) const
{
	this->_brain->get_ideas();
}
Cat&		Cat::operator=(Cat const& rhs)
{
	this->type = rhs.getType();
	this->_brain = rhs._brain;
	return *this;
}

std::ostream&		operator<<(std::ostream& ofs, Cat const& rhs)
{
	ofs << "Aanimal type is " << rhs.getType() << std::endl;
	return ofs;
}
