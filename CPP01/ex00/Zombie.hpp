/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:04:11 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/13 18:51:31 by bmangin          ###   ########lyon.fr   */
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
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
		
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );