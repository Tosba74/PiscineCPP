/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:21:42 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 22:47:40 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Pierre")
{
	this->setName("Pierre");
	this->type = "ScavTrap";
	this->maxHitPoints = 100;
	this->maxEnergy = 50;
	this->maxAttack = 20;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed Default" << std::endl;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->type = "ScavTrap";
	this->maxHitPoints = 100;
	this->maxEnergy = 50;
	this->maxAttack = 20;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed" << std::endl;
	return ;
}
ScavTrap::ScavTrap(ScavTrap const& src)
{
	*this = src;
	std::cout << this->getName() << " is Scav_trap (copy const)" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << this->type << " " << this->getName() << " is dead" << std::endl;
}


ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	this->type = rhs.type;
	this->maxHitPoints = rhs.maxHitPoints;
	this->maxEnergy = rhs.maxEnergy;
	this->maxAttack = rhs.maxAttack;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());
	return *this;
}
void		ScavTrap::guardGate()
{
	std::cout << this->type << " " << this->getName() << " have enterred in Gate keeper mode." << std::endl;
}

std::ostream &			operator<<(std::ostream& ofs, ScavTrap const& inst)
{
	ofs << "Name = " << inst.getName() << std::endl;
	ofs << "Hitpoint = " << inst.getHitPoints() << std::endl;
	ofs << "Energy point = " << inst.getEnergy() << std::endl;
	ofs << "Attack damage = " << inst.getAttack() << std::endl;
	return ofs;
}
