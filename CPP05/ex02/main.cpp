/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:21:56 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 11:57:58 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Bureaucrat              homme("Pompidou", 124);
    Bureaucrat              homme2("Pompon", 40);
    Bureaucrat              homme3("Chef", 1);
    ShrubberyCreationForm   form("Arbre");
    RobotomyRequestForm     form2("Mr.Robot");
    PresidentialPardonForm  form3("The pardon");

    std::cout << "-----------------------" << std::endl;
    try
    {
        form.beSigned(homme);
        form.execute(homme);
    }
    catch (const std::exception& e)
    {
         std::cerr << "\e[31m" << e.what() << "\e[0m" << std::endl;
    }
    std::cout <<std::endl << homme << form << std::endl;
    std::cout << "-----------------------" << std::endl;
    try
    {
        form2.beSigned(homme2);
        form2.execute(homme2);
    }
    catch (const std::exception& e)
    {
         std::cerr << "\e[31m" << e.what() << "\e[0m" << std::endl;
    }
    std::cout <<std::endl << homme2 << form2 << std::endl;
    std::cout << "-----------------------" << std::endl;
    try
    {
        form3.beSigned(homme3);
        homme3.executeForm(form3);
    }
    catch (const std::exception& e)
    {
         std::cerr << "\e[31m" << e.what() << "\e[0m" << std::endl;
    }
    std::cout <<std::endl << homme3 << form3 << std::endl;


    form.beSigned(homme3);
    form2.beSigned(homme3);
    form3.beSigned(homme3);

    homme.executeForm(form);
    homme2.executeForm(form2);
    homme2.executeForm(form3);
    homme3.executeForm(form3);
    return 0;
}
