/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:53:13 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/12 15:16:57 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	:	_name("FragTrap"), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	std::cout << "Constructor F" << std::endl;
}

FragTrap::FragTrap(const std::string name)
	:	_name(name), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	std::cout << "Constructor 2 F" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
	:	_name(copy._name), _hitPoints(copy._hitPoints),
		_energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "Constructor copy F" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &other)
{
	std::cout << "Operator F" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor F" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << _name << " wants to give High Fives. " << std::endl;
		_energyPoints--;
	}
	else
	{
		if (_hitPoints <= 0)
			std::cout << _name << " is dead. Can't give High Fives!" << std::endl;
		else if (_energyPoints <= 0)
			std::cout << _name << " doesn't have enough EP to give High Fives!" << std::endl;
	}
}
