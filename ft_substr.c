/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:09:32 by iksaiz-m          #+#    #+#             */
/*   Updated: 2023/12/26 17:28:33 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*another;

	if ((start + len) > ft_strlen(s) && start > ft_strlen(s))
		return ("");
	another = malloc(len + 1 * sizeof(char));
			if (!another)
				return (0);		{
			ft_strlcpy(another, (s + start), len + 1);
	}
	another[len] = '\0';
    return (another);
}
/*int main()
{
    char s[] = "lorem ipsu";
    unsigned int start = 400;
    printf("ft: %s",ft_substr(s, start, 20));
    return (0);
}*/