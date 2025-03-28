/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:50:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 14:20:17 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor created" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog constructor copy created" << std::endl;
	this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor created" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "ouaf ouaf" << std::endl;
}
