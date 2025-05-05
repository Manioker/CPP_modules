/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:32:57 by mogul             #+#    #+#             */
/*   Updated: 2025/03/10 16:37:52 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float flt);
		Fixed(const Fixed &copy);
		
		Fixed 			&operator=(const Fixed &other);

		bool			operator>(const Fixed &other) const;
		bool			operator<(const Fixed &other) const;
		bool			operator>=(const Fixed &other) const;
		bool			operator<=(const Fixed &other) const;
		bool			operator==(const Fixed &other) const;
		bool			operator!=(const Fixed &other) const;

		Fixed			operator+(const Fixed &other) const;
		Fixed			operator-(const Fixed &other) const;
		Fixed			operator*(const Fixed &other) const;
		Fixed			operator/(const Fixed &other) const;

		Fixed			&operator++();
		Fixed			operator++(int);
		Fixed			&operator--();
		Fixed			operator--(int);

		~Fixed();
		
		float			toFloat() const;
		int				toInt() const;
		void			setRawBits(const int raw);
		int				getRawBits();
		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	min(const Fixed &a, const Fixed &b);
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	max(const Fixed &a, const Fixed &b);
	private:
		int	value;
		const static int bits = 8;
};

std::ostream &operator<<(std::ostream &outs, const Fixed &fixed);

#endif
