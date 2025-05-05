/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:32:27 by mogul             #+#    #+#             */
/*   Updated: 2025/03/10 14:55:07 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :	value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy) :	value(copy.value)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}
int		Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}
