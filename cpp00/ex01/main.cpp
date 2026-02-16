#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int		N = 5;
	Zombie*	horde;

	horde = zombieHorde(N, "HordeZombie");
	if (!horde)
	{
		std::cout << "Error: failed to create zombie horde" << std::endl;
		return (1);
	}

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;

	return (0);
}

