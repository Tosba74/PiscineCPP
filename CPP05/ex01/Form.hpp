/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:45 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/25 14:06:44 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, unsigned int grade, unsigned int rightOfExec);
		Form(Form const& cpy);
		~Form();
		
		Form&			operator=(Form const& rhs);
		
		std::string		getName(void) const;
		bool			isSigned(void) const;
		unsigned int	getGrade(void) const;
		unsigned int	getGradeRequired(void) const;
		Form&			beSigned(Bureaucrat const& peon);
		
		class GradeTooHighException : public std::exception
		{
			virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char	*what() const throw();
		};
	
	private:
		std::string		_name;
		bool 			_isSign;
		unsigned int	_grade;
		unsigned int	_gRequired;
};

std::ostream&	operator<<(std::ostream& ofs, Form const& inst);
