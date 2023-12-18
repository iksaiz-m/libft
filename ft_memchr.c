/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:34:04 by iksaiz-m          #+#    #+#             */
/*   Updated: 2023/12/18 17:14:26 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	size_t			i;

	a = c;
	i = 0;
	while ((i < n))
	{
		const unsigned char	*b = s;
		if (*b == a)
		{
			return ((void *)b);
		}
		s++;
		i++;
	}
	return (NULL);
}
/*}
int main()
{
	char	s[] = "Abubar";
	int	c;

	c = 'a';
	printf("ft: %s\n", ft_memchr(s, c, 5));
	printf("Original: %s", memchr(s, c, 8));
	return (0);
}*/