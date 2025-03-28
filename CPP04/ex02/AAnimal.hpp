/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:34:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 13:54:53 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal	&operator=(const AAnimal &other);
		virtual ~AAnimal();
		std::string	getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string _type;
};

#endif
