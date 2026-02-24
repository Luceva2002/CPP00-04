/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:43:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 13:43:22 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void);
	void		setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif

