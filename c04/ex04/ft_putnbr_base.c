/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:45:33 by spwong            #+#    #+#             */
/*   Updated: 2021/05/31 16:18:05 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int ft_strlen(char *str)
{
    int     len;

    len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return (len);
}

int ft_check_base(char *base)
{
	int     i;
    int     j;

    i = 0;
    if (base[0] == '\0' || (base[0] == '1' && base[1] == '\0'))
        return (0);
    else
    {
        while (base[i] != '\0')
        {
            j = i + 1;
            if (base[i] == base[j])
                return (0);
            else if (base[i] == '+' || base[i] == '-')
                return (0);
            else if (base[i] < 32 || base[i] > 126)
                return (0);
            if (i < j)
                i++;
            else
                break ;
        }
        return (1);
    }
}

void    ft_putnbr_base(int  nbr, char *base)
{
    int     base_len;

    if (!(ft_check_base(base)))
        return ;
    base_len = ft_strlen(base);
    if (nbr < 0)
    {
        nbr *= -1;
        ft_putchar('-');
    }
    if (nbr < base_len)
        ft_putchar(base[nbr]);
    if (nbr >= base_len)
    {
        ft_putnbr_base(nbr / base_len, base);
        ft_putnbr_base(nbr % base_len, base);
    }
}

int main()
{
    ft_putnbr_base(-10, "0123456789abcdef");
}
