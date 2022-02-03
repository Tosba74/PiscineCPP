/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:59:19 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/29 21:21:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string		_name;
		unsigned int	_grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const& src);
		~Bureaucrat();
		
		Bureaucrat&		operator=(Bureaucrat const& rhs);

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			upGrade(void);
		void			downGrade(void);
		void			signForm(AForm form) const;
		void			executeForm (AForm const & form);
		
		class	GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream&			operator<<(std::ostream& ofs, Bureaucrat const& rhs);
