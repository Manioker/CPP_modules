/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:06:15 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 12:39:21 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	public:
		Contact();
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		~Contact(void);
		void setContact(std::string _firstname, std::string _lastname, std::string _nickname,
		std::string _phone_number, std::string _darkest_secret);
		void print_contact(void);
};

#endif
