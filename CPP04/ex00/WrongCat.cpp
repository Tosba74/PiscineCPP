/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:23:58 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 21:48:29 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Construtor Called" << std::endl;
	return ;
}
WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
	std::cout << "Copy " << this->getType() << " Construtor Called" << std::endl;
	return ;
}
WrongCat::~WrongCat()
{
	std::cout << "Destrutor " << this->getType() << " Called" << std::endl;
	return ;
}

void			WrongCat::makeSound(void) const
{
	std::cout << "Animal " << this->getType() << " says Miaou" << std::endl;
	return ;
}
WrongCat&		WrongCat::operator=(WrongCat const& rhs)
{
	this->type = rhs.getType();
	return *this;
}

std::ostream&	operator<<(std::ostream& ofs, WrongCat const& rhs)
{
	ofs << "Animal type is " << rhs.getType() << std::endl;
	return ofs;
}
