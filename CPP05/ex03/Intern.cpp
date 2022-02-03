/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:03:36 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/01 19:42:31 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return ;
}
Intern::Intern(Intern const& cpy)
{
	*this = cpy;
	return ;
}
Intern::~Intern()
{
	return ;
}

Intern&	Intern::operator=(Intern const& inst)
{
	(void)inst;
	return *this;
}
AForm*	Intern::newShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}
AForm*	Intern::newRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}
AForm*	Intern::newPresident(std::string target)
{
	return new PresidentialPardonForm(target);
}
AForm		*Intern::makeForm(std::string typeform ,std::string target)
{
	unsigned int		i;
	AForm				*ret;
	static std::string	strs[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	for (i = 0; i < 3; i++)
		if (!typeform.compare(strs[i]))
			break;
	switch (i)
	{
		case 0:
		{
			ret = Intern::newShrubbery(target);
			break;
		}
		case 1:
		{
			ret = Intern::newRobot(target);
			break;
		}
		case 2:
		{
			ret = Intern::newPresident(target);
			break;
		}
		default:
			throw Intern::UndefinedForm();
	}
   	std::cout << "Intern creates " << ret->getName() << std::endl;
	return ret;
}

const char	*Intern::UndefinedForm::what() const throw()
{
	return "\e[31mUndefined Form\e[0m";
}
