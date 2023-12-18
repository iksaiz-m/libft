/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:01:59 by iksaiz-m          #+#    #+#             */
/*   Updated: 2023/12/14 17:44:56 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = ft_strlen(src);
	k = 0;
	while ((src[k] && src[k] != '\0') && k < dstsize - 1 && dstsize != 0)
	{
		dst[k] = src[k];
		k++;
	}
	if (dstsize != 0)
	{
		dst[k] = '\0';
	}
	return (i);
}
/*int main()
{
	int	n = 100;
	
    char src[] = "lorem ipsum";
    char dst[] = "aaaaaaaaaaaaaaaaaaaaaaaa";
	
    printf("ft: 		%lu\n", ft_strlcpy(dst, src, n));
	ft_strlcpy(dst, src, n);
	printf("%s\n", dst);

	char src2[] = "lorem ipsum";
    char dst2[] = "aaaaaaaaaaaaaaaaaaaaaaaa";
	printf("original: 	%lu\n", strlcpy(dst2, src2, n));
	strlcpy(dst2, src2, n);
	
	printf("%s", dst2);
    return(0);
}*/