/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:09:32 by iksaiz-m          #+#    #+#             */
/*   Updated: 2024/01/04 15:51:14 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*another;

	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	another = malloc((len + 1));
	if (!another)
		return (NULL);
	ft_strlcpy(another, (s + start), len + 1);
	another[len] = '\0';
	return (another);
}

/*int main()
{
    char s[] = "lorem ipsu";
    unsigned int start = 0;
    printf("ft: %s",ft_substr(s, start, 5));
	printf("\nft: %s",ft_substr(s, 6, 10));
    return (0);
}*/