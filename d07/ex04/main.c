#include <stdio.h>

int ft_countwords(char *str);
int ft_getloc(int i, char *str, int *tab);
char **ft_split_whitespaces(char *str);

int	main(void)
{
	int tab[1];
	int i;
	char **c;
	char str[] = " Je d  deux \t tester     \t    si ca \n fonctionne";
	printf("%d\n", ft_countwords(str));
	i = ft_getloc(5, str, tab);
	printf("Size: %d / Beg: %d\n", tab[0], i);
	c = ft_split_whitespaces(str);
	i = 0;
	while (c[i])
	{
		printf("%s\n", c[i]);
		i++;
	}
	return (0);
}
