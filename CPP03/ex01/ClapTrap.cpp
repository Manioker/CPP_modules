/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:11:00 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/12 14:50:21 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:	_name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	:	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor 2" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
	:	_name(copy._name), _hitPoints(copy._hitPoints),
		_energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "Constructor copy" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "Operator" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor" << std::endl;
}

void		ClapTrap::attack(const std::string &target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		if (_hitPoints <= 0)
			std::cout << _name << " is dead, it can't attack" << std::endl;
		if (_energyPoints <= 0)
			std::cout << _name << " doesn't have enough energy, it can't attack" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << _name << " received " << amount << " points of damage! ";
		if (_hitPoints <= amount)
		{
			_hitPoints = 0;
			std::cout << _name << " died" << std::endl;
		}
		else
		{
			std::cout << _hitPoints - amount << " HP left" << std::endl;
			_hitPoints -= amount;
		}
	}
	else
		std::cout << _name << " is already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " repaired! ";
		std::cout << _hitPoints + amount << " HP left";
		_hitPoints += amount;
		_energyPoints--;
	}
	else
	{
		if (_hitPoints <= 0)
			std::cout << _name << " is dead. Can't be repaired!" << std::endl;
		else if (_energyPoints <= 0)
			std::cout << _name << " doesn't have enough energy to repair!" << std::endl;
	}
}
