/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:50:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/19 11:41:39 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain();
	std::cout << "Cat constructor created" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "Cat constructor copy created" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	delete this->_brain;
	this->_brain = other._brain;
	this->_type = other._type;
	return(*this);
}

Cat::~Cat()
{
	_brain->printIdeas();
	delete this->_brain;
	std::cout << "Cat destructor created" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "miaou miaou" << std::endl;
}
