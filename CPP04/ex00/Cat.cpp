/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:50:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 14:21:09 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor created" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat constructor copy created" << std::endl;
	this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor created" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "miaou miaou" << std::endl;
}
