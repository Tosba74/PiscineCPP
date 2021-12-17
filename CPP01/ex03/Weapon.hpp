/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:21:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/16 20:25:27 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string		_type;
	public:
		Weapon(std::string type);
		~Weapon();
		void			setType(std::string type);
		std::string&	getType();
};
