/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:21:57 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/17 07:51:12 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void		attack();
};
