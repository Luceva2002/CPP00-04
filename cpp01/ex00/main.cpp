/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:42:46 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 13:42:46 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	heapZombie;

	// Zombie allocato sull'heap - deve essere deallocato manualmente
	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	// Zombie allocato sullo stack - viene distrutto automaticamente
	randomChump("StackZombie");

	return (0);
}

