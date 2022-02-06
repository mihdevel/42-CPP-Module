# include "Zombie.hpp"

int main(void)
{
	int N;
	Zombie* zombie;

	N = 5;
	zombie = zombieHorde(N, "Pety");
	for (int i = 0; i < N; ++i)
	{
		zombie[i].announce();
	}
	delete [] zombie;
	return (0);
}