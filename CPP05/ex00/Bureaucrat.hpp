/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:59:19 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/24 17:54:17 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string		_name;
		unsigned int	_grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat& src);
		~Bureaucrat(void);
		
		Bureaucrat&		operator=(Bureaucrat const& rhs);

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			upGrade(void);
		void			downGrade(void);
		
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
