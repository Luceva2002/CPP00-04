/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:43:45 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 13:43:45 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon& weapon);
	void	attack(void) const;
};

#endif

