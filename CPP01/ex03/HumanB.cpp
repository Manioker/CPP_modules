/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:46:14 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 14:52:46 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): name(_name)
{}
HumanB::~HumanB()
{}
void	HumanB::setWeapon(Weapon &weapon)
{
	gun = &weapon;
}


void	HumanB::attack(void)
{
	if (!gun)
		std::cout << name << "doesn't have weapon, he runs away..." << std::endl;
	else
		std::cout << name << " attacks with their " << gun->getType() << std::endl;
}
