/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:45 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/19 14:20:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string		_name;
		bool 			_isSign;
		unsigned int	_grade;
		unsigned int	_gRequired;

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
	
};

std::ostream&	operator<<(std::ostream& ofs, Form const& inst);
