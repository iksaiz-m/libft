/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iksaiz-m <iksaiz-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:21:24 by iksaiz-m          #+#    #+#             */
/*   Updated: 2024/01/03 18:35:28 by iksaiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstring;
	size_t	i;
	size_t	k;

	i = ft_strlen(s1);
	k = ft_strlen(s2);
	joinstring = ft_calloc(((i + k) + 1), sizeof(char));
	if (!joinstring)
		return (NULL);
	ft_strlcpy(joinstring, s1, i + 1);
	ft_strlcat(joinstring, s2, i + k + 1);
	return (joinstring);
}
/*int main()
{
	char s1[] = "asi";
	char b[] = "noo";
	char c[] = "polo";
	printf("%s", ft_strjoin(s1, b));
	printf("%s", ft_strjoin(s1, c));
	return (0);
}*/
