/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:34:15 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/19 11:45:03 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal constructor created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : _type(copy._type)
{
	std::cout << "AAnimal constructor copy created" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this->_type = other._type;
	return(*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor created" << std::endl;
}

std::string	AAnimal::getType() const
{
	return(_type);
}
