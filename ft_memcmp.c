/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:15:08 by iksaiz-m          #+#    #+#             */
/*   Updated: 2023/12/18 18:18:52 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}*/
int main()
{
	//const void s1[] = "apo29";
	//const void s2[] = "apo29";
	//printf("ft: %d", ft_memcmp("aaass", "aaass", 5));
	printf("original: %d", memcmp("", "", 0));
	return(0);
}