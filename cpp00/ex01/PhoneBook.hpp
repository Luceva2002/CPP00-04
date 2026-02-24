/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:28:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 16:54:51 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_count;
	int		_oldest;

	void		printField(const std::string &field) const;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(const Contact &contact);
	void	searchContacts(void) const;
};

#endif
