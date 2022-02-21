/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:53:29 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 15:21:38by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}
Brain::Brain(std::string idea)
{
	ideas[0] = idea;
	std::cout << "Brain constructor<idea> called" << std::endl;
	return ;
}
Brain::Brain(Brain const& copy)
{
	*this = copy;
	std::cout << "Brain constructor<copy> called" << std::endl;
	return ;

}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain&		Brain::operator=(Brain const& rhs)
{
	if (this != &rhs)
	{
		for (unsigned int i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdea(i);
	}
	return *this;

}
std::string	Brain::getIdea(int index) const
{
	return this->ideas[index];
}
void		Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}

std::ostream&		operator<<(std::ostream& ofs, Brain const& inst)
{
	for (unsigned int i = 0; i < 100; i++)
		ofs << " [" << i << "] " << inst.getIdea(i) << std::endl;
	return ofs;
}