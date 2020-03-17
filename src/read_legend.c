/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_legend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilatia <ilatia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 12:25:59 by ilatia            #+#    #+#             */
/*   Updated: 2020/03/16 19:39:30 by ilatia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char read_obs(char *str)
{
	char obj;
	
	obj = str[ft_strlen(*str)-2];
	return (obj);
}

char read_full(char *str)
{
	char	full;

	full = str[ft_strlen(*str) - 1];
	return (full);
}

char read_empty(char *str)
{
	char	empty;

	empty = str[ft_strlen(*str) - 3];
	return(empty);		
}

int read_leg(char *str)
{
	int		i;
	int		leginput;
	char	*str1;
	int 	leg;

	i = 0;
	leginput = ft_strlen(*str);
	str1 = (char *)malloc(leginput - 3 + 1);
	while (i < leginput - 3)
		str1[i] = str[i];
	leg = ft_atoi(*str1);
	return(leg);
}