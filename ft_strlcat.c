/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:11:28 by iksaiz-m          #+#    #+#             */
/*   Updated: 2023/12/21 15:18:50 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/*{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!dstsize)
		return (ft_strlen(dst));
	if (dstsize)
	{
		while (i < ft_strlen(dst) - dstsize -1)
		{
			while (dst[i] != '\0')
			{
				i++;
			}
			while (src[k] != '\0')
			{
				dst[i] = src[k];
				k++;
				i++;
			}
			i++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}*/
{
	size_t	index;
	size_t	cat_str;

	index = -1;
	while (++index < dstsize && *dst)
		dst++;
	cat_str = ft_strlcpy(dst, src, dstsize - index);
	return (cat_str + index);
}
/*int main()
{
	char dest[11] = "a";
    printf("Original: %zu", (ft_strlcat(dest, "lorem", 15)));
	return (0);
}*/