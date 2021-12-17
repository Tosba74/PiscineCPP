/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:43 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/16 21:28:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* str_ptr = &str;
	std::string& str_ref = str;
	
	std::cout << "Now displaying addresses:" << std::endl;
	std::cout << "String:    " << &str << std::endl;
	std::cout << "Pointer:   " << str_ptr << std::endl;
	std::cout << "Reference: " << &str_ref << std::endl;
	std::cout << "And it's done !" << std::endl << std::endl;
	std::cout << "Now displaying strings:" << std::endl;
	std::cout << "String:    " << str << std::endl;
	std::cout << "Pointer:   " << *str_ptr << std::endl;
	std::cout << "Reference: " << str_ref << std::endl;
	std::cout << "And it's done !" << std::endl;
	return 0;
}