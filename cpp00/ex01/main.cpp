/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:28:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 16:54:59 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

static bool	getField(const std::string &prompt, std::string &field)
{
	std::cout << prompt;
	if (!(std::getline(std::cin, field)))
		return (false);
	return (!field.empty());
}

static void	addContact(PhoneBook &phonebook)
{
	Contact		contact;
	std::string	field;

	while (!getField("First name: ", field))
		std::cout << "Field cannot be empty." << std::endl;
	contact.setFirstName(field);
	while (!getField("Last name: ", field))
		std::cout << "Field cannot be empty." << std::endl;
	contact.setLastName(field);
	while (!getField("Nickname: ", field))
		std::cout << "Field cannot be empty." << std::endl;
	contact.setNickname(field);
	while (!getField("Phone number: ", field))
		std::cout << "Field cannot be empty." << std::endl;
	contact.setPhoneNumber(field);
	while (!getField("Darkest secret: ", field))
		std::cout << "Field cannot be empty." << std::endl;
	contact.setDarkestSecret(field);
	phonebook.addContact(contact);
	std::cout << "Contact added." << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "> ";
		if (!(std::getline(std::cin, command)))
			break ;
		if (command == "ADD")
			addContact(phonebook);
		else if (command == "SEARCH")
			phonebook.searchContacts();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
