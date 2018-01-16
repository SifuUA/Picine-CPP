#include <iostream>
#include <string.h>
#include <ctype.h>

int			main(int argc, char **argv) {
	int		i;
	int		j;

	i = 1;
	if (argc > 1) {
		while(i < argc) {
			j = 0;
			while(argv[i][j]) {
				if (isalpha(argv[i][j]))
					std::cout << (char)(toupper(argv[i][j]));
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
			if(i < argc)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
