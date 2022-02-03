/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:36:29 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 11:56:45 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget("Robot");
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRquestForm", 72, 45)
{
	this->setTarget(target);
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) : AForm(cpy)
{
	*this = cpy;
	return ;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	AForm::operator=(rhs);
	this->setTarget(rhs.getTarget());
	return *this;
}
void					RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}
std::string				RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}
void					RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	std::srand(std::time(nullptr));
	bool random = std::rand() % 2;
	
	if (!this->isSigned())
		throw RobotomyRequestForm::NoSigned();
	else
	{
		if (this->getGradeRequired() < executor.getGrade())
			throw RobotomyRequestForm::GradeTooLowException();
		else
		{
			std::cout << executor.getName() << " execute " << this->getName() << std::endl;
			std::cout << "NiiiaarrRRkKK! ";
			std::cout << this->getTarget() << " robotomized: ";
			if (!random)
				std::cout << "[\033[31mFAILED\033[0m]" << std::endl;
			else
				std::cout << "[\033[32mSUCCESS\033[0m]" << std::endl;
		}
	}
	
}

std::ostream&					operator<<(std::ostream& ofs, RobotomyRequestForm const& inst)
{
	ofs << "Target: " << inst.getTarget() << std::endl;
	ofs << "Name: " << inst.getName() << " || Grade: " << inst.getGrade() << std::endl;
	ofs << "Grade Required: " << inst.getGradeRequired() << " || Bool: " << inst.isSigned() << std::endl;
	return ofs;
}	
