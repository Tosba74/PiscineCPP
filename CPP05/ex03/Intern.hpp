/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:03:34 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/01 18:19:23 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(Intern const& cpy);
		~Intern();

		Intern&	operator=(Intern const& inst);
		AForm*	newShrubbery(std::string target);
		AForm*	newRobot(std::string target);
		AForm*	newPresident(std::string target);
		AForm*	makeForm(std::string typeform, std::string target);

		class UndefinedForm : public std::exception
		{
			virtual const char	*what() const throw();
		};
};
