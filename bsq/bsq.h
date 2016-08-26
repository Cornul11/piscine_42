/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dplamade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:38:56 by dplamade          #+#    #+#             */
/*   Updated: 2016/08/24 20:56:12 by dplamade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# define BUFF_SIZE	3000000

typedef struct	s_square
{
	int			l_pos;
	int			c_pos;
	int			size;
}				t_square;

typedef struct	s_map
{
	int			nb_lines;
	int			nb_col;
	char		empty;
	char		obs;
	char		full;
	t_square	square;
	char		**map;
}				t_map;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterrorstr(char *str);
char	*ft_strcat(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int n);
void	ft_stdin(void);
char	*ft_strsub(char *s, unsigned int start, size_t len);

void	exit_error(char *error);
void	print_error(char *file, char *error);
void	check_errors(char *str, t_map *map);

void	get_map_square(t_map *map);

t_map	*read_from_fd(int fd);
t_map	*read_from_file(char *file);

int		get_map(char *str, t_map *map);
void	free_map(t_map *map);

int		check_nb_lines(char *str, t_map *map);
int		get_nb_lines(char *str, t_map *map);

void	print_map(t_map *map);

int		check_map_chars(t_map *map);
void	get_map_chars(char *str, t_map *map);

#endif
