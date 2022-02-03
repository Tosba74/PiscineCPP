/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 00:00:44 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 01:07:43 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Peon"), _grade(150)
{
	return ;
}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	return ;
}
Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	*this = src;
	return ;
}
Bureaucrat::~Bureaucrat(void)
{
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
void			Bureaucrat::signForm(AForm form) const
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
void Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot execute because " << e.what() << std::endl;
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
