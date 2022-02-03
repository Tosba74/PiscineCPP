/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:18:18 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 11:56:55 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget("President");
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpy) : AForm(cpy)
{
	*this = cpy;
	return ;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	AForm::operator=(rhs);
	this->setTarget(rhs.getTarget());
	return *this;
}
void					PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}
std::string				PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}
void					PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!this->isSigned())
		throw PresidentialPardonForm::NoSigned();
	else
	{
		if (executor.getGrade() > this->getGradeRequired())
			throw PresidentialPardonForm::GradeTooLowException();
		else
		{
				std::cout << executor.getName() << " execute " << this->getName() << std::endl;
				std::cout << "Zafod Beeblebrox forgive " << this->getTarget() << std::endl;
		}
	}
}
	

std::ostream&					operator<<(std::ostream& ofs, PresidentialPardonForm const& inst)
{
	ofs << "Target: " << inst.getTarget() << std::endl;
	ofs << "Name: " << inst.getName() << " || Grade: " << inst.getGrade() << std::endl;
	ofs << "Grade Required: " << inst.getGradeRequired() << " || Bool: " << inst.isSigned() << std::endl;
	return ofs;
}	
