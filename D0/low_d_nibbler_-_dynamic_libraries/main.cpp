#include <dlfcn.h>
#include <iostream>

int	main(int ac, char **av)
{
	void	*dl_handler;
	int	(*add)(int, int);

	dl_handler = dlopen(av[1], RTLD_LAZY | RTLD_LOCAL);
	add = (int(*)(int, int)) dlsym(dl_handler, "add");
	std::cout << add(1, 2) << std::endl;
	dlclose(dl_handler);
}
