/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:13:58 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 00:58:18 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : ScavTrap("Pierre"), FragTrap("Pierre"), _name("Pierre")
{
	this->ClapTrap::setName(this->_name + "_clap_name");
	this->type = "DiamondTrap";
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->maxEnergy = ScavTrap::maxEnergy;
	this->maxAttack = FragTrap::maxAttack;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed Default" << std::endl;
	std::cout << "DiamondTrap constructor called" << std::endl;
	return ;
}
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), _name(name)
{
	this->ClapTrap::setName(name + "_clap_name");
	this->type = "DiamondTrap";
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->maxEnergy = ScavTrap::maxEnergy;
	this->maxEnergy = 50;
	this->maxAttack = FragTrap::maxAttack;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << "(" << this->_name << ")" << " Constructed Default" << std::endl;
	return ;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout << "DiamondTrap copy constructor called" << std::endl;

}
DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->type << " " << this->_name << " destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs)
{
	// this->type = rhs.type;
	this->maxHitPoints = rhs.maxHitPoints;
	this->maxEnergy = rhs.maxEnergy;
	this->maxAttack = rhs.maxAttack;
	this->setName(rhs.getName());
	this->ClapTrap::setName(rhs.getName() + "_clap_name");
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());
	(void)rhs;
	return *this;
}
std::string		DiamondTrap::getName(void) const
{
	return this->_name;
}
void			DiamondTrap::setName(std::string name)
{
	this->_name = name;
}
		
void			DiamondTrap::whoAmI(void)
{
	std::cout << "I am a DiamondTrap " << this->getName() << std::endl;
	std::cout << "But my clap_name is " << this->ClapTrap::getName() << std::endl;
}

std::ostream&		operator<<(std::ostream& ofs, DiamondTrap const& inst)
{
	ofs << "My HitPoints are " << inst.getHitPoints() << std::endl;
	ofs << "My Energy Points is " << inst.getEnergy() << std::endl;
	ofs << "My Attack damage is " << inst.getAttack() << std::endl;
	return ofs;
}
