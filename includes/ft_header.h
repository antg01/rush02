#ifndef FT_HEADER_H
# define FT_HEADER_H

int	ft_atoi(const char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	ft_strlen(char *str)

typedef struct s_dict_entry
{
	char number;
	char *word;
}	t_dict_entry;

#endif
