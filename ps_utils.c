/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuter <gostr@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:36:58 by gsuter            #+#    #+#             */
/*   Updated: 2024/02/15 17:36:58 by gsuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(int fd, char *str)
{
	size_t	len;
	len = ft_strlen(str);
	return (write(fd, str, len));
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		result;
	size_t	i;
	int		minus;

	minus = 1;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	result = 0;
	if (ft_isdigit(str[i]) == 0)
		return (0);
	while (ft_isdigit(str[i]) && str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * minus);
}

size_t	ft_strlen(char *str)
{
	size_t	len;
	len = 0;

	while (str[len])
		len++;
	return (len);
}

size_t	ft_count_numbers(char *str)
{
	size_t	word;
	size_t	i;
	size_t	j;
	char	*dest;

	dest = malloc(sizeof(char *) * ft_strlen(str));
	if (!dest)
		return (0);
	i = 0;
	j = 0;
	word = 1;
	while (str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] != 32)
		{
			dest[j] = str[i];
			j++;
			i++;
		}
		else
		{
			while (str[i] == 32)
				i++;
			if (str[i])
				word++;
		}
	}
	if (!ft_atoi(dest))
		return (free(dest), printf("error nombre\n"));
	//printf ("dest = %d\n", ft_atoi(dest));
	free(dest);
	return (word);
}


/*
int	main(int arc, char **argv)
{
	if (arc < 2)
		return (printf("non"), 0);
	size_t	i;
	size_t	word;
	word = 0;
	i = 1;
	while (argv[i])
	{
		word += ft_count_numbers(argv[i]);
		i++;
	}
	printf("word = %zu", word);
	return 0;
}*/
