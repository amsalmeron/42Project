#include "libft.h"

char *ft_itoa(int n)
{
	int len;
	int save_n = n;

	char *num;
	
	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	num = malloc(sizeof(char) * len);
	if (num == NULL)
		return (NULL);
	num[len--] = '\0';
	if (save_n < 0)
		num[0] = '-';
	while (save_n % 10 != 0)
	{
		num[len--] = save_n % 10;
		save_n /= 10;
	}
	return (num);
}
