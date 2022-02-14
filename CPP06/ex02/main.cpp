/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:00:44 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/07 19:44:20 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>
#include <time.h>
#include <unistd.h>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	unsigned int	random;
	
	srand((unsigned int)time(NULL));
	random = rand() % 3;
	switch (random)
	{
		case 0:
		{
			std::cout << "Base 'A' created" << std::endl;
			return new A;
		}
		case 1:
		{
			std::cout << "Base 'B' created" << std::endl;
			return new B;
		}
		case 2:
		{
			std::cout << "Base 'C' created" << std::endl;
			return new C;
		}
	}
	return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
    {
        std::cout << "Base 'A' identifed by pointer"<< std::endl;
        return ;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "Base 'B' identifed by pointer"<< std::endl;
        return ;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "Base 'C' identifed by pointer"<< std::endl;
        return ;
    }
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
        std::cout << "Base 'A' identifed by reference" << std::endl;
		return ;	
	}
	catch(const std::bad_cast &bc) {}
	try
	{
		(void)dynamic_cast<B&>(p);
        std::cout << "Base 'B' identifed by reference" << std::endl;
		return ;	
	}
	catch(const std::bad_cast &bc) {}	
	try
	{
		(void)dynamic_cast<C&>(p);
        std::cout << "Base 'C' identifed by reference" << std::endl;
		return ;	
	}
	catch(const std::bad_cast &bc) {}	
}

int main(void)
{
    Base *lol = generate();
    identify(lol);
    identify(*lol);
	sleep(1);

    Base *truc = generate();
    identify(truc);
    identify(*truc);
	sleep(1);

    Base *bidule = generate();
    identify(bidule);
    identify(*bidule);	
	return 0;
}