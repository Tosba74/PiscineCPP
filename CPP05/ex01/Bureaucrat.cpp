/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 00:00:44 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/25 14:13:11 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Peon"), _grade(150)
{
	std::cout << "Bureaucrat Constructor(void) Called" << std::endl;
	return ;
}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Constructor Called" << std::endl;
	return ;
}
Bureaucrat::Bureaucrat(Bureaucrat& src)
{
	*this = src;
	std::cout << "Bureaucrat Constructor Copy Called" << std::endl;
	return ;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
	return ;
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

std::string		Bureaucrat::getName(void) const
{
	return this->_name;
}
unsigned int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}
void			Bureaucrat::upGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void			Bureaucrat::downGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
void			Bureaucrat::signForm(Form form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign because " << e.what() << std::endl;
	}
}

std::ostream&			operator<<(std::ostream& ofs, Bureaucrat const& rhs)
{
	ofs << "Bureaucrat " << rhs.getName() << "(" << rhs.getGrade() << ")" << std::endl;
	return ofs;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too High !!!";
}
const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too Low !!!";
}
