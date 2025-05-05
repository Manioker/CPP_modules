/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:32:27 by mogul             #+#    #+#             */
/*   Updated: 2025/03/10 15:28:58 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :	value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int num) :	value(num << bits)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float flt):	value(roundf(flt * (1 << bits)))
{
	std::cout <<  "Float constructor called" << std::endl;
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
float	Fixed::toFloat() const
{
	return ((float)value / (1 << bits));
}

int		Fixed::toInt() const
{
	return (value >> bits);
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
std::ostream &operator<<(std::ostream &outs, const Fixed &fixed)
{
	outs << fixed.toFloat();
	return (outs);
}

