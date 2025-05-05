/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:37:38 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 14:11:34 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string weapon): type(weapon)
{}

Weapon::~Weapon()
{}
void	Weapon::setType(std::string new_type)
{
	type = new_type;
}
const std::string	&Weapon::getType()
{
	return(type);
}
