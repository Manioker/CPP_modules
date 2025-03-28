/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:50:48 by flmarsou          #+#    #+#             */
/*   Updated: 2025/03/28 10:48:49 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();

		Ice &operator=(const Ice &other);

		Ice	*clone() const;
		void				use(ICharacter &target);
};

#endif
