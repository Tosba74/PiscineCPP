/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:46 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/01 18:19:42 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSign(false), _grade(150), _gRequired(150)
{
	return ;
}
AForm::AForm(std::string name, unsigned int grade, unsigned int rightOfExec) : _name(name), _grade(grade), _gRequired(rightOfExec)
{
	if (this->_grade > 150 || this->_gRequired > 150)
		throw AForm::GradeTooLowException();
	else if (this->_grade < 1 || this->_gRequired < 1)
		throw AForm::GradeTooHighException();
	this->_isSign = false;
	return ;
}
AForm::AForm(AForm const& cpy)
{
	*this = cpy;
	return ;
}
AForm::~AForm()
{
	return ;
}

AForm&			AForm::operator=(AForm const& rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	this->_gRequired = rhs.getGradeRequired();
	this->_isSign = rhs.isSigned();
	return *this;
}

std::string		AForm::getName(void) const
{
	return this->_name;
}
bool			AForm::isSigned(void) const
{
	return this->_isSign;
}
unsigned int	AForm::getGrade(void) const
{
	return this->_grade;
}
unsigned int	AForm::getGradeRequired(void) const
{
	return this->_gRequired;
}
AForm&			AForm::beSigned(Bureaucrat const& peon)
{
	if (peon.getGrade() <= this->getGrade())
		this->_isSign = true;
	else
		throw AForm::GradeTooLowException();
	return *this;
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!!!";
}
const char	*AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!!!";
}
const char* AForm::NoSigned::what() const throw()
{
	return "No signed";
}

std::ostream&	operator<<(std::ostream& ofs, AForm const& inst)
{
	ofs << "Name: " << inst.getName() << std::endl;
	ofs << "Grade: " << inst.getGrade() << std::endl;
	ofs << "Grade Required: " << inst.getGradeRequired() << std::endl;
	ofs << "Bool: " << inst.isSigned() << std::endl;
	return ofs;
}