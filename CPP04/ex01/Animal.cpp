/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:34:15 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 14:19:58 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor created" << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
	std::cout << "Animal constructor copy created" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor created" << std::endl;
}

std::string	Animal::getType() const
{
	return(_type);
}

void	Animal::makeSound() const
{
	std::cout << "Crazy animal sound" << std::endl;
}
