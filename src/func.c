/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilatia <ilatia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:03:53 by ilatia            #+#    #+#             */
/*   Updated: 2020/03/16 19:30:38 by ilatia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int r;
	int z;
	int i;

	r = 0;
	z = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\v') ||
			(str[i] == '\r') || (str[i] == '\f') || (str[i] == '\t'))
		i++;
	if (str[i] == '-')
		z = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && (str[i] <= '9'))
	{
		r = r * 10;
		r += (int)str[i] - '0';
		i++;
	}
	if (z == 1)
		return (-r);
	else
		return (r);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
