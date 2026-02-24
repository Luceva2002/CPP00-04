/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:43:40 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 13:43:40 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack(void) const;
};

#endif

