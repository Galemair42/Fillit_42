#include "fillit.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*unc_s1;
	unsigned char	*unc_s2;
	size_t			i;

	i = 0;
	unc_s1 = (unsigned char *)s1;
	unc_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (unc_s1[i] != unc_s2[i])
			return (unc_s1[i] - unc_s2[i]);
		i++;
	}
	return (0);
}

int			ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	return (EXIT_SUCCESS);
}

int			ft_putchar(int c)
{
	return (write(1, &c, 1));
}
