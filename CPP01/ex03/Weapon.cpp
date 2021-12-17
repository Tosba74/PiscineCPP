/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:22:08 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/17 07:55:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

void			Weapon::setType(std::string type)
{
	_type = type;
}

std::string&	Weapon::getType()
{
	return _type;
}
