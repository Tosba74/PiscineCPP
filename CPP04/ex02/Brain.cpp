/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:01:03 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/21 18:09:46 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Contructor Called" << std::endl;
	return ;	
}
Brain::Brain(Brain const& rhs)
{
	*this = rhs;
	std::cout << "Brain Contructor Copy Called" << std::endl;
	return ;	
}
Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
	return ;	
}

void		Brain::get_ideas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->get_idea(i) << std::endl;
}
std::string	Brain::get_idea(int index) const
{
	return this->ideas[index];
}
void		Brain::set_ideas(int index, std::string idea)
{
	this->ideas[index] = idea;
}
