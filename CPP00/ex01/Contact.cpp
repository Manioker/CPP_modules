/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:16:02 by mogul             #+#    #+#             */
/*   Updated: 2025/02/28 15:37:35 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setContact(std::string _firstname, std::string _lastname, std::string _nickname,
	std::string _phone_number, std::string _darkest_secret)
{
	this->firstname = _firstname;
	this->lastname = _lastname;
	this->nickname = _nickname;
	this->phone_number = _phone_number;
	this->darkest_secret = _darkest_secret;
}
void Contact::print_contact()
{
	std::cout << "First Name: " << this->firstname << std::endl;
	std::cout << "Last Name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}
