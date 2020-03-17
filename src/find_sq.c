/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilatia <ilatia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 19:44:16 by ilatia            #+#    #+#             */
/*   Updated: 2020/03/16 20:27:05 by ilatia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int find_size_sq(int **arr)
{
	int	string;
	int	column;
	int side_sq;
	int leg;

	string = 0;
	
	side_sq = leg;
	while (side_sq > 1)
	{
		while (string < leg)
		{
			column = 0;			
			while (column < leg)
			{
				if (summator(*arr, string, column) = 0)
//					return(size_sq, string, column);
				column++;
			}
			string++;
		}
		side_sq--;
	}
	return (0);
}
