/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:43:55 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 13:43:55 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(std::string type);
};

#endif

