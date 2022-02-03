/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:06:45 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 15:16:51 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShruberryForm", 145, 137)
{
	this->setTarget("Shrubbery");
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShruberryForm", 145, 137)
{
	this->setTarget(target);
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : AForm(cpy)
{
	*this = cpy;
	return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	AForm::operator=(rhs);
	this->setTarget(rhs.getTarget());
	return *this;
}
void					ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}
std::string				ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void					ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (!this->isSigned())
		throw ShrubberyCreationForm::NoSigned();
	else
	{
		if (this->getGradeRequired() < executor.getGrade())
			throw ShrubberyCreationForm::GradeTooLowException();
		else
		{
			std::ofstream	ofs;

			ofs.open(this->getTarget() + "_shrubbery");
			ofs << this->getTarget() << "_shrubbery:" << std::endl;
			ofs << "            .        +          .      .          ." << std::endl;
			ofs << "     .            _        .                    ." << std::endl;
			ofs << "  ,              /;-._,-.____        ,-----.__" << std::endl;
			ofs << "           .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
			ofs << "  `                 \\   _|`'=:-::.`.);  /\\ __/ /" << std::endl;
			ofs << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
			ofs << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
			ofs << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
			ofs << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
			ofs << "  .      ,=':  \\    ` `/` ' , , ,:' `'--''.--'---._/`7" << std::endl;
			ofs << "   `.   (    \\: \\,-._` ` + '\\, ,'   _,--._,---':.__/" << std::endl;
			ofs << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
			ofs << ".               ':._:`\\____  /:'  /      .           ." << std::endl;
			ofs << "                    \\::.  :\\/:'  /              +" << std::endl;
			ofs << "   .                 `.:.  /:'  }      ." << std::endl;
			ofs << "           .           );_(:;   \\           ." << std::endl;
			ofs << "                      /;. _/ ,  |" << std::endl;
			ofs << "                   . (|::.     ,`                  ." << std::endl;
			ofs << "     .                |::.    {\\ " << std::endl;
			ofs << "                      |;:.\\  \\ `." << std::endl;
			ofs << "                     ,{:::(\\    |" << std::endl;
			ofs << "              O      |;)::/{ }  |                  (o" << std::endl;
			ofs << "               )  __/#;;\\:`/ (O '==.____   O, (O  /`" << std::endl;
			ofs << "          ~~~w/~~'w~,\\``'|/,-(~`'~~~~~~~'~~o~\\~/~w|/~" << std::endl;
			ofs.close();
			std::cout << executor.getName() << " execute " << this->getName() << std::endl;
		}
	}
}

std::ostream&			operator<<(std::ostream& ofs, ShrubberyCreationForm const& inst)
{
	ofs << "Target: " << inst.getTarget() << std::endl;
	ofs << "Name: " << inst.getName() << " || Grade: " << inst.getGrade() << std::endl;
	ofs << "Grade Required: " << inst.getGradeRequired() << " || Bool: " << inst.isSigned() << std::endl;
	return ofs;
}			