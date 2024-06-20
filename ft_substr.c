/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavissar <mavissar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:56:03 by mavissar          #+#    #+#             */
/*   Updated: 2024/05/07 21:50:18 by mavissar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sub_len;

	if (!s)
		return (0);
	if (s[0] == '\0')
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_len = ft_strlen(s + start);
	if (sub_len < len)
		len = sub_len;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// int	main()
// {
// 	char	s[] = "hola";

// 	printf("%s\n", ft_substr(s, 4,2));

// }