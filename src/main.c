#include "ft_header.h"
#include <unistd.h>

int	is_positive_number(char *str)
{
	int	i;

	i = 0;
	if (str == NULL || *str == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	number;
	t_dict_entry *dictionary;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!is_positive_number(argv[argc - 1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	number = ft_atoi(argv[1]);
	dictionary = parse_dictionary("numbers.dict");
	print_number_in_words(number, dictionary);
	return (0);
}
