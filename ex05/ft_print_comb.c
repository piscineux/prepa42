
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombes <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 11:34:55 by abesombes         #+#    #+#             */
/*   Updated: 2020/05/21 11:35:22 by abesombes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1,&c, 1);
}

void 	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	i = 0;
	j = 1;
	k = 2;
	while (i<=9)
	{
		while (j<=9)
		{
			while (k<=9)
			{
			if (k>j)
			{
		        ft_putchar(i+48);
			ft_putchar(j+48);
			ft_putchar(k+48);
			write(1,", ", 2);
			}
			k++;
			}
		k = 0;
		j++;		
		}
	i++;
	}
}

int 	main(void)
{
	ft_print_comb();
	return(0);
}
