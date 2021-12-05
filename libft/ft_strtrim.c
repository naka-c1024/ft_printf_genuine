/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strtrim.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>	 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/08/12 17:53:24 by ynakashi		  #+#	#+#			 */
/*   Updated: 2021/08/13 12:04:27 by ynakashi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*new_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr((char *)set, s1[i]) != NULL)
		i++;
	len = ft_strlen(&s1[i]);
	if (len != 0)
		while (s1[i + len - 1] != '\0'
			&& ft_strchr((char *)set, s1[i + len - 1]) != NULL)
			len--;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, &s1[i], len + 1);
	return (new_str);
}
/*
#include <stdio.h>
int main(void)
{
	printf("xAABBCCx = %s\n", ft_strtrim("ABCxAABBCCx", "ABC"));
	printf("xBCxABCBCx = %s\n", ft_strtrim("AxBCxABCBCx", "ABC"));
	printf("xAABBCCx = %s\n", ft_strtrim("ABCxAABBCCxBAC", "ABC"));
	printf("AAA = %s\n", ft_strtrim("1234AAA22331122", "1234"));
	return 0;
}
*/
