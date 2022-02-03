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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
     Animal	*animal[20];

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
    std::cout << "---------------------" << std::endl << std::endl;
    std::cout << "---------------------" << std::endl;

    Dog		rex;
    Cat		pussy;

    rex.set_ideas(0,"WiizzZ!!!");
    pussy.set_ideas(0,"Scratch!!!");
    pussy.set_ideas(1,"BOoomM!!!");
    std::cout << rex.get_idea(0) << std::endl;
    std::cout << pussy.get_idea(0) << std::endl;
    std::cout << pussy.get_idea(1) << std::endl;
	return 0;
}
