/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:04:11 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/14 08:38:19 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie(void);
		~Zombie(void);
		void		setname(std::string name);
		void		announce(void);
		Zombie* 	zombieHorde(int N, std::string name);
		
};

Zombie* zombieHorde(int N, std::string name);
Zombie* newZombie(std::string name);
void randomChump(std::string name);