/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:47:06 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 21:40:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->setName("Pierre");
	this->type = "ClapTrap";
	this->maxHitPoints = 10;
	this->maxEnergy = 10;
	this->maxAttack = 0;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed Default" << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->type = "ClapTrap";
	this->maxHitPoints = 10;
	this->maxEnergy = 10;
	this->maxAttack = 0;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed" << std::endl;
	return ;
}
ClapTrap::ClapTrap(ClapTrap const& cpy)
{
	*this = cpy;
	std::cout << this->type << this->getName() << " Copy Constructed" << std::endl;
	return ;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor kill " << this->type << " " << this->getName() << ", He is dead !"<< std::endl;
	if (!this->getHitPoints())
		std::cout << "... Again!" << std::endl;
	return ;
}

std::string		ClapTrap::getName() const
{
	return this->_name;
}
int				ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}
int				ClapTrap::getEnergy() const
{
	return this->_energy;
}
int				ClapTrap::getAttack() const
{
	return this->_attack;
}
void			ClapTrap::setName(std::string name)
{
	this->_name = name;
}
void			ClapTrap::setHitPoints(int maxHitPoints)
{
	this->_hitPoints = maxHitPoints;
}
void			ClapTrap::setEnergy(int maxEnergy)
{
	this->_energy = maxEnergy;
}
void			ClapTrap::setAttack(int maxAttack)
{
	this->_attack = maxAttack;
}
ClapTrap&		ClapTrap::operator=(ClapTrap const& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	return *this;
}

void			ClapTrap::attack(std::string const & target)
{
	std::cout << this->type << " " << this->getName() << " attack " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
	return ;
}
void			ClapTrap::takeDamage(unsigned int amount)
{
	int prev = getHitPoints() - amount;
	if (prev > 0)
		setHitPoints(prev);
	else
		setHitPoints(0);
	std::cout << this->type << " " << this->getName() << " take " << amount << " points of damage!" << std::endl;
	std::cout << "Now :" << this->getHitPoints() << "HP";
	if (!getHitPoints())
		std::cout << " Oh no, " << this->type << " " << this->getName() << " is dead !";
	std::cout << std::endl;
	return ;
}
void			ClapTrap::beRepaired(unsigned int amount)
{
	if (!getHitPoints())
		std::cout << this->type << " " << this->getName() << " can't heal! He is dead :'(" << std::endl;
	else if (getHitPoints() > 0)
	{
		int prev = getHitPoints() + amount;
		if (prev <= maxHitPoints)
			setHitPoints(prev);
		else
			setHitPoints(maxHitPoints);
		std::cout << this->type << " " << this->getName() << " take " << amount << " points of heal!" << std::endl;
		std::cout << "Now :" << this->getHitPoints() << "HP" << std::endl;
	}
	return ;
}

std::ostream&			operator<<(std::ostream& ofs, ClapTrap const& inst)
{
	ofs << "Name = " << inst.getName() << std::endl;
	ofs << "Hitpoint = " << inst.getHitPoints() << std::endl;
	ofs << "Energy point = " << inst.getEnergy() << std::endl;
	ofs << "Attack damage = " << inst.getAttack() << std::endl;
	return ofs;
}
