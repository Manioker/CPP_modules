/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:53:13 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/12 15:05:06 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:	_name("ScavTrap"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "Constructor S" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
	:	_name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "Constructor 2 S" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
	:	_name(copy._name), _hitPoints(copy._hitPoints),
		_energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "Constructor copy S" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &other)
{
	std::cout << "Operator S" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor S" << std::endl;
}

void		ScavTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		if (_hitPoints <= 0)
			std::cout << _name << "S is dead, it can't attack" << std::endl;
		if (_energyPoints <= 0)
			std::cout << _name << "S doesn't have enough energy, it can't attack" << std::endl;
	}
}

void		ScavTrap::guardGate()
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " is now in Gate Keeper mode. " << std::endl;
		_energyPoints--;
	}
	else
	{
		if (_hitPoints <= 0)
			std::cout << _name << " is dead. Can't be Gate Keeper!" << std::endl;
		else if (_energyPoints <= 0)
			std::cout << _name << " doesn't have enough EP to be Gate Keeper!" << std::endl;
	}
}
