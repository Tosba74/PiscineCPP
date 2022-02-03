/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:21:56 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/01 19:47:32 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat  homme = Bureaucrat("Chef", 1);
    Intern      someRandomIntern;
    AForm       *rrf;

    try
    {
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        std::cout << *rrf << std::endl;
        std::cout << homme << std::endl;
        std::cout << rrf->isSigned() << std::endl;
        rrf->beSigned(homme);
        std::cout << rrf->isSigned() << std::endl;
        homme.executeForm(*rrf);
        delete rrf;
    }
    catch (const std::exception &e)
    {
        std::cerr << "\e[31m" << e.what() << "\e[0m" << std::endl;
    }
    return 0;
}
