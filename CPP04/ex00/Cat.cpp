/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:23:58 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 00:18:34 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Construtor Called" << std::endl;
	return ;
}
Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat Construtor<type> Called" << std::endl;
	return ;
}
Cat::Cat(Cat const& copy)
{
	*this = copy;
	std::cout << "Copy " << this->getType() << " Cat Construtor<copy> Called" << std::endl;
	return ;
}
Cat::~Cat()
{
	std::cout << "Cat Destrutor " << this->getType() << " Called" << std::endl;
	return ;
}

void		Cat::makeSound(void) const
{
	std::cout << "Animal " << this->getType() << " says Miaou" << std::endl;
	return ;
}
Cat&		Cat::operator=(Cat const& rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::ostream&		operator<<(std::ostream& ofs, Cat const& rhs)
{
	ofs << "Animal type is " << rhs.getType() << std::endl;
	return ofs;
}
