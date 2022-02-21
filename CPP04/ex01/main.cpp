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
     Animal *animal[20];

    for (size_t i = 0; i < 20; i++)
    {
        if(i % 2 == 0)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
    }
    for (size_t i = 0; i < 20; i++)
        animal[i]->makeSound();
    for (size_t i = 0; i < 20; i++)
        delete animal[i];

    Dog rex;

    rex.getBrain().setIdea(0, "Starting!!!");
    rex.getBrain().setIdea(99, "Stop!!!");
    std::cout << "\e[32m" << rex.getBrain() << "\e[0m" << std::endl;

    Dog tmp = rex;
    std::cout << "\e[32m" << tmp.getBrain() << "\e[0m" << std::endl;

    Cat pussy;

    pussy.getBrain().setIdea(0, "Scratch!!!");
    std::cout << "\e[32m" << pussy.getBrain().getIdea(0) << "\e[0m" << std::endl;
	return 0;
}
