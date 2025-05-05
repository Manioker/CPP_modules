/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:46:14 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 14:36:04 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon): name(_name), gun(weapon)
{
	
}
HumanA::~HumanA()
{}
void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << gun.getType() << std::endl;
}
