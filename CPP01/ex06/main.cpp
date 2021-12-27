/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:39:15 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/27 19:29:13 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen       karen;
    int         i;
    if(ac != 2)
    {
        std:: cout << "Please, Enter one only argument" << std::endl;
        return (0);
    }
    std::string level(av[1]);
    for(i = 0; i < 4 ; i++)
    {
        if (!level.compare(karen.strs[i]))
            break;
    }
    switch (i)
    {
        case 0:
            karen.complain("DEBUG");
        case 1:
            karen.complain("INFO");
        case 2:
            karen.complain("WARNING");
        case 3:
            karen.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
    }
    return(0);
}
