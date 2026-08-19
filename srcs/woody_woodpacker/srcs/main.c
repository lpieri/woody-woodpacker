#include "../includes/woody_woodpacker.h"

int	main(int ac, char **av) {
	int	i;

	if (ac >= 2) {
		i = 1;
		while (i < ac) {
			start(av[i]);
			i++;
		}
		return (SUCCESS);
	}
	return (FAILURE);
}
