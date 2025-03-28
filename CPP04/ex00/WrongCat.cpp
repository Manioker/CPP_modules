/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:50:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 13:45:03 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor created" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat constructor created" << std::endl;
	this->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor created" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "miaou miaou" << std::endl;
}
