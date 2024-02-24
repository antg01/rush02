#ifndef FT_HEADER_H
# define FT_HEADER_H

typedef struct s_dict_entry
{
	char	number;
	char	*words;
}	t_dict_entry;

int	ft_atoi(char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	ft_strlen(char *str);

t_dict_entry *parse_dictionary(char *file_path);
void print_number_in_words(int number, t_dict_entry *dictionary);

#endif
