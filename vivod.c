/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vivod.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsacha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 13:35:22 by dsacha            #+#    #+#             */
/*   Updated: 2020/03/16 19:08:28 by dsacha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	read_first_string(char *av)
{
	int		fd;
	int		ret;
	char	buf[1];
	int		counter;
	
	counter = 0;
	fd = open(av, O_RDONLY);
	while (*buf != '\n')
	{
		ret = read(fd, buf, 1);
		counter++;
	}
	ret = close(fd);
	return (counter);
}

char	*fillarray(int counter, char *av)
{
	char	*str;
	int		fd;
	int		ret;
	char	buf[1];
	int runner;

	runner = 0;
	str = malloc(counter);
	fd = open(av, O_RDONLY);
	while (runner < counter)
	{
		ret = read(fd, buf, 1);
		str[runner] = *buf;
		runner++;
	}
	ret = close(fd);
	str[runner] = '\0';
	return (str);
}

int		**mkarray(int x)
{
	int **arr;

	*arr = (int*)malloc(sizeof(int) * x);
	arr = (int*)malloc(sizeof(int) * x);
	return (arr);
}

int		**fillarray(char **map, char obst, char empt, int len);
{
	int **ar;
	int runx;
	int runy;

	ar = mkarray(len);
	runy = 0;
	while (runx <= len)
	{
		runx = 0;
		while (runx <= len)
		{
			if (map[runy][runx] == obst)
			{
				ar[runy][runx] = 1;
				runx++;
			}
			else if(map[runy][runx] == empt)
			{
				ar[runy][runx] = 0;
				runx++;
			}
		}
		runy++;
	}
	return (ar);
}
