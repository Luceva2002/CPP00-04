/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:28:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 16:55:02 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	Contact(void);
	~Contact(void);

	void		setFirstName(const std::string &firstName);
	void		setLastName(const std::string &lastName);
	void		setNickname(const std::string &nickname);
	void		setPhoneNumber(const std::string &phoneNumber);
	void		setDarkestSecret(const std::string &darkestSecret);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
};

#endif
