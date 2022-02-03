/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:21:56 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/25 13:25:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    Bureaucrat a("michelle", 1);
    Bureaucrat b("leo", 150);
    Form form1("alpha", 120, 40);
    Form form2("beta", 1, 150);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;

    // test success
    try
    {
        form1.isSigned();
    }
    catch (const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    // test fail
    try
    {
        form2.isSigned();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    //test too low
    try
    {
        Form c("rien a garder", 151 , 1);
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //test too high
    try
    {
        Form d("point faible trop fort", 0 , 145);
        std::cout << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    Bureaucrat d("michelle", 1);
    Bureaucrat c("leo", 150);
    Form form3("charlie", 120, 40);
    Form form4("delta", 1, 150);
    d.signForm(form3);
    c.signForm(form4);
    std::cout << form3 << std::endl;
    std::cout << form4 << std::endl;


    return(0);
}
