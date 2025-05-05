/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:37:32 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 12:39:25 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <cctype>

class PhoneBook
{
	private:
		Contact contact[8];
		unsigned int index;
	public:
		PhoneBook();
		unsigned int phonebook_print;
		~PhoneBook(void);
		void addContact(void);
		void print_phonebook(void);
};

#endif
