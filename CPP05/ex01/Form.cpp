/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:46 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/25 14:20:34 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, unsigned int grade, unsigned int rightOfExec) : _name(name), _grade(grade), _gRequired(rightOfExec)
{
	this->_isSign = false;
	std::cout << "Form Constructor Called" << std::endl;
	return ;
}
Form::Form(Form const& cpy)
{
	*this = cpy;
	std::cout << "Form Constructor Copy Called" << std::endl;
	return ;
}
Form::~Form()
{
	std::cout << "Form Constructor Called" << std::endl;
	return ;
}

Form&			Form::operator=(Form const& rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	this->_gRequired = rhs.getGradeRequired();
	this->_isSign = rhs.isSigned();
	return *this;
}

std::string		Form::getName(void) const
{
	return this->_name;
}
bool			Form::isSigned(void) const
{
	return this->_isSign;
}
unsigned int	Form::getGrade(void) const
{
	return this->_grade;
}
unsigned int	Form::getGradeRequired(void) const
{
	return this->_gRequired;
}
Form&			Form::beSigned(Bureaucrat const& peon)
{
	if (peon.getGrade() <= this->getGrade())
		this->_isSign = true;
	else
		throw Form::GradeTooLowException();
	return *this;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!!!";
}
const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!!!";
}

std::ostream&	operator<<(std::ostream& ofs, Form const& inst)
{
	ofs << "Name: " << inst.getName() << std::endl;
	ofs << "Grade: " << inst.getGrade() << std::endl;
	ofs << "Grade Required: " << inst.getGradeRequired() << std::endl;
	ofs << "Bool: " << inst.isSigned() << std::endl;
	return ofs;
}