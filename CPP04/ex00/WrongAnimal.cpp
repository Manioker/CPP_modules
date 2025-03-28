/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:34:15 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 13:45:13 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
	std::cout << "WrongAnimal constructor copy created" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other._type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor created" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Crazy Wronganimal sound" << std::endl;
}
