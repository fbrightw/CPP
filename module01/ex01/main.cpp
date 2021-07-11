#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main()
{
	int N;

	N = 10;
	Zombie	*first = zombieHorde(N, "als");
	for (int i = 0; i < N; i++)
		first[i].announce();
	delete [] first;
}