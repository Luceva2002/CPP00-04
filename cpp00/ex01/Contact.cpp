/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:28:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 16:55:04 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::setFirstName(const std::string &firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(const std::string &lastName)
{
	_lastName = lastName;
}

void	Contact::setNickname(const std::string &nickname)
{
	_nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string &phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string &darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);
}
