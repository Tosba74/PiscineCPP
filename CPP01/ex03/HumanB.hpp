/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:21:54 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/17 08:02:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};
