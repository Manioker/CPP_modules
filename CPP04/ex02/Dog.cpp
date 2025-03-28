/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:50:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/19 11:39:57 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain();
	std::cout << "Dog constructor created" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "Dog constructor copy created" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	delete this->_brain;
	this->_brain = other._brain;
	this->_type = other._type;
	return(*this);
}

Dog::~Dog()
{
	_brain->printIdeas();
	delete this->_brain;
	std::cout << "Dog destructor created" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "ouaf ouaf" << std::endl;
}
