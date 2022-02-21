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
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	j->Animal::makeSound();
	std::cout << "----------------------" << std::endl;

    const WrongAnimal* Zanimal = new WrongAnimal();
	const WrongAnimal* Zat = new WrongCat();

	std::cout << Zanimal->getType() << " " << std::endl;
	std::cout << Zat->getType() << " " << std::endl;
	Zanimal->makeSound();
	Zat->makeSound();

	std::cout << "----------------------" << std::endl;
    delete meta;
	delete j;
	delete i;
    delete Zanimal;
	delete Zat;

	return 0;
}
