/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:12:20 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 18:32:49y bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Aanimal Animal = Aanimal();
    Aanimal *Animal[20];

    for (size_t i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
            Animal[i] = new Cat();
        else
            Animal[i] = new Dog();
    }
	std::cout << "----------------------" << std::endl;
    for (size_t i = 0; i < 20; i++)
        Animal[i]->makeSound();
	std::cout << "----------------------" << std::endl;
    for (size_t i = 0; i < 20; i++)
        delete Animal[i];

    Dog rex;

    rex.getBrain().setIdea(0, "Starting!!!");
    rex.getBrain().setIdea(99, "Stop!!!");
	std::cout << "----------------------" << std::endl;
    std::cout << "\e[32m" << rex.getBrain() << "\e[0m" << std::endl;

    Cat pussy;

    pussy.getBrain().setIdea(0, "Scratch!!!");
	std::cout << "----------------------" << std::endl;
    std::cout << "\e[32m" << pussy.getBrain().getIdea(0) << "\e[0m" << std::endl;
	return 0;
}
