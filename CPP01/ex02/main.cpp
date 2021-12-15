/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:59:43 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/15 18:54:09 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string buf = "Hello";
	std::string* buf_ptr = &buf;
	std::string& buf_ref = buf;
	
	std::cout << buf << *buf_ptr << buf_ref << std::endl;
	std::cout << &buf << buf_ptr << &buf_ref << std::endl;
}