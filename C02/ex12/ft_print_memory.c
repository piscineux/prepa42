/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c    	                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombes <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:55:02 by abesombes        #+#     #+#             */
/*   Updated: 2020/05/28 18:55:31 by abesombes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void ft_putstr_dec_to_hexa(char c)
{
	int i;
	int a;
	int b;
	char hexbase[16]="0123456789abcdef";
	
	a = (c / 16);
	b = (c % 16);
	ft_putchar('\\');
	ft_putchar(hexbase[a]);	
	ft_putchar(hexbase[b]);
}*/

void ft_putstr_hexa(unsigned long long int addr)
{
	int i;
	int a;
	unsigned long long int b;
	char hexbase[16]="0123456789abcdef";
	
	if (addr > 16)	
		ft_putstr_hexa(addr / 16);
	b = (addr % 16);
	ft_putchar(hexbase[b]);
}
/*
void ft_print_addr(void *addr)
	
{
	int i;
	
//	printf("\n\naddress = %lu", addr);
	printf("\n\naddress = %p", addr);
//	ft_putstr_dec_to_hexa(addr);
	i = 0;
	while (i<16)
	{
	ft_putchar(addr+48);
	i++;
	}
}*/

void 	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	int j;
	
	i = 0;
	while (i<size)
	{
	j = 0;
		ft_putstr_hexa((unsigned long long int)addr + i);
		ft_putchar(':');
		ft_putchar(' ');
		while (j<16 && addr)
		{
			ft_putchar('0');
			j++;
		}
	i+=16;
	}

//	printf("\naddress1: %p", addr);
//	printf("\naddress2: %p\n", addr+16);	
//	printf("\nLocation in hex:      0x%.8" PRIXPTR "\n", (uintptr_t)addr);
}
int	main(void)
{
	char *str;
        char *string;

        string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";

	void *p = &string;
//	printf("\naddress with ft_putstr_hexa: \n");
//	ft_putstr_hexa((unsigned long long int)p);
	ft_putchar('\n');
	ft_print_memory(p, 50);
	return (0);
}
