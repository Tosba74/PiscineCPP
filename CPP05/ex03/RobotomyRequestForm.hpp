/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:49:37 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 11:56:09 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:	
		std::string				_target;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(RobotomyRequestForm const& rhs);
		void					setTarget(std::string target);
		std::string				getTarget(void) const;
		void					execute(Bureaucrat const& executor) const;
	
};

std::ostream&					operator<<(std::ostream& ofs, RobotomyRequestForm const& inst);
