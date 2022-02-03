/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:21:56 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/24 17:50:02 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("michelle",1);
    Bureaucrat b("leo", 149);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    try
    {
        a.upGrade();
    }
    catch (const std::exception & e)
    {
        std::cerr << "what: " << e.what() << std::endl;
    }
    try
    {
        b.downGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "what: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("rien a garder", 151);
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "what: " << e.what() << '\n';
    }
    try
    {
        Bureaucrat d("point faible, trop fort", 0);
        std::cout << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "what: " << e.what() << '\n';
    }
    return(0);
}
