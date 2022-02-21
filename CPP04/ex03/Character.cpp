/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:18:36 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:32:08 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "default name";
	for (int i = 0; i < 4 ; i++)
		this->_items[i] = NULL;
}
Character::Character(std::string const& name)
{
	this->_name = name;
	for (int i = 0; i < 4 ; i++)
		this->_items[i] = NULL;
}
Character::Character(const Character& src)
{
	*this = src;
}
Character::~Character()
{

}

Character &				Character::operator=( Character const& rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		for(int i = 0 ; i < 4 ; i++)
			this->_items[i]=rhs._items[i];
	}
	return *this;
}
std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	if (m != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_items[i] == NULL)
			{
				this->_items[i] = m;
				break;
			}
		}
	}
}
void Character::unequip(int idx)
{
	if(idx < 4 && idx >= 0)
	{
		if(this->_items[idx] != NULL)
			this->_items[idx] = NULL; 
	}
}
void Character::use(int idx, ICharacter& target)
{
	if(idx < 4 && idx >= 0)
	{
		if(this->_items[idx] != NULL)
			this->_items[idx]->use(target);
	}
}
std::string Character::get_stock(int i) const
{
	return this->_items[i]->getType();
}

std::ostream&			operator<<( std::ostream& ofs, Character const & inst)
{
	ofs << "Name" << inst.getName();
	for(int i = 0; i < 4 ; i++)
	{
		ofs << "stock[" << i << "] " << inst.get_stock(i);
	}
	return ofs;
}
