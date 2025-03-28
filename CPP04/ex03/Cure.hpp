/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:12:12 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/28 13:12:20 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();

		Cure &operator=(const Cure &other);

		Cure	*clone() const;
		void				use(ICharacter &target);
};

#endif
