/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:28:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 16:54:53 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _count(0), _oldest(0) {}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::addContact(const Contact &contact)
{
	_contacts[_oldest] = contact;
	_oldest = (_oldest + 1) % 8;
	if (_count < 8)
		_count++;
}

void	PhoneBook::printField(const std::string &field) const
{
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
}

void	PhoneBook::searchContacts(void) const
{
	int			index;
	std::string	input;

	if (_count == 0)
	{
		std::cout << "The phonebook is empty." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|"
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < _count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		printField(_contacts[i].getFirstName());
		std::cout << "|";
		printField(_contacts[i].getLastName());
		std::cout << "|";
		printField(_contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "Enter index: ";
	if (!(std::cin >> input))
		return ;
	index = -1;
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
		index = input[0] - '0';
	if (index < 0 || index >= _count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << _contacts[index].getFirstName() << std::endl;
	std::cout << _contacts[index].getLastName() << std::endl;
	std::cout << _contacts[index].getNickname() << std::endl;
	std::cout << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << _contacts[index].getDarkestSecret() << std::endl;
}
