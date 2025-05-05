/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:42:21 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 14:41:26 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string _name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void attack(void);
	private:
		Weapon *gun;
		std::string name;
};

#endif
