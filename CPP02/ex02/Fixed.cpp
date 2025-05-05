/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:32:27 by mogul             #+#    #+#             */
/*   Updated: 2025/03/10 16:45:05 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTOR

Fixed::Fixed() :	value(0)
{
}
Fixed::Fixed(const int num) :	value(num << bits)
{
}
Fixed::Fixed(const float flt):	value(roundf(flt * (1 << bits)))
{
}
Fixed::Fixed(const Fixed &copy) :	value(copy.value)
{
}

// CLASS OPERATORS

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value = other.value;
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
    if (this->value > other.value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &other) const
{
	if (this->value < other.value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	if (this->value >= other.value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	if (this->value <= other.value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other) const
{
	if (this->value == other.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	if (this->value != other.value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (this->toFloat() == 0 || other.toFloat() == 0)
		return (Fixed(0));
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++()
{
	*this = Fixed(this->toFloat() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	*this = Fixed(this->toFloat() + 1);
	return (temp);
}

Fixed	&Fixed::operator--()
{
	*this = Fixed(this->toFloat() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	*this = Fixed(this->toFloat() - 1);
	return (temp);
}
// DESTRUCTOR
Fixed::~Fixed()
{
}

// CLASS FUNCTIONS
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
	return (this->value);
}
Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

// OPERATOR
std::ostream &operator<<(std::ostream &outs, const Fixed &fixed)
{
	outs << fixed.toFloat();
	return (outs);
}


