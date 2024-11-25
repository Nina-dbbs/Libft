/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:54:01 by ndabbous          #+#    #+#             */
/*   Updated: 2024/11/21 15:46:35 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				size;
	unsigned int	i;
	char			*copy;

	i = 0;
	size = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * size + 1);
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main()
{
	char const	s[10] = "0123456789";
	ft_strmapi(s, &ft_test);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", s[i]);
	}
	return (0);
}
char  *ft_test(unsigned int i, char s)
{
        s[i] = 45;
        return (&s[i]);
}*/
