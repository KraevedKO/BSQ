/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   summator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilatia <ilatia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 18:56:17 by ilatia            #+#    #+#             */
/*   Updated: 2020/03/16 20:28:40 by ilatia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	summator(int **arr, int string, int column, int side_sq)
{
	int i;
	int j;
	int summ;

	i = string;
	summ = 0;
	while (i <= (string + side_sq))
	{
		j = column;
		while (j <= (column + side_sq))
		{
			summ += arr[i][j];
			j++;
		}
		i++;
	}
	return (summ);
}
