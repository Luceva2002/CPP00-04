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

