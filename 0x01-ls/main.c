#include "header.h"

int main(int ac, char **av)
{
	struct stat sb;
	int i;

	if (ac == 1)
	{
		printf("printing current directory\n");
		format_output(av);
		return (EXIT_SUCCESS);
	}

	i = 1;
	while (av[i])
	{
		if (strncmp(av[i], "-", 1) != 0)
		{
			if (lstat(av[i], &sb) == -1)
			{
				perror(av[i]);
				exit(EXIT_FAILURE);
			}

			if ((sb.st_mode & S_IFREG) != 0)
			{
				printf("%s is a file\n", av[i]);
				format_output(av);
			}
			else if ((sb.st_mode & S_IFDIR) != 0)
			{
				printf("%s is a directory\n", av[i]);
				format_output(av);
			}
		}
		else
		{
			printf("%s is an option\n", av[i]);
		}
		i++;
	}

	return (EXIT_SUCCESS);
}
