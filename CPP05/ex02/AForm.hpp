/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:45 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 11:55:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string name, unsigned int grade, unsigned int rightOfExec);
		AForm(AForm const& cpy);
		virtual ~AForm();
		
		AForm&			operator=(AForm const& rhs);
		
		std::string		getName(void) const;
		bool			isSigned(void) const;
		unsigned int	getGrade(void) const;
		unsigned int	getGradeRequired(void) const;
		AForm&			beSigned(Bureaucrat const& peon);
		virtual void 	execute(Bureaucrat const& executor) const = 0;
		
		class GradeTooHighException : public std::exception
		{
			virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char	*what() const throw();
		};
		class NoSigned : public std::exception
		{
			virtual const char	*what() const throw();
		};
	
	private:
		std::string		_name;
		bool 			_isSign;
		unsigned int	_grade;
		unsigned int	_gRequired;
};

std::ostream&	operator<<(std::ostream& ofs, AForm const& inst);
