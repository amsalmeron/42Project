#include "libft.h"
#include <limits.h>
#include <stdio.h>

#include <ctype.h>

int main()
{
	char hello[] = "Hello World";
	// char hello_num[] = "Hell0 Wor13";
	char hello_special[] = "#ello 3@rld!";

	// ft_isalpha
	printf("Test ft_isalpha:\n");
	printf("Expected: %d\n", isalpha(hello[0]));
	printf("Result: %d\n", ft_isalpha(hello[0]));
	if (isalpha(hello[0]) == ft_isalpha(hello[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", isalpha(hello_special[6]));
	printf("Result: %d\n", ft_isalpha(hello_special[6]));
	if (isalpha(hello_special[6]) == ft_isalpha(hello_special[6]))
		printf("\x1b[32mPASSED \x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_isdigit
	printf("\nTest ft_isdigit:\n");
	printf("Expected: %d\n", isdigit(hello[1]));
	printf("Result: %d\n", ft_isdigit(hello[1]));
	if (isdigit(hello[1]) == ft_isdigit(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", isdigit(hello_special[6]));
	printf("Result: %d\n", ft_isdigit(hello_special[6]));
	if (isdigit(hello_special[6]) == ft_isdigit(hello_special[6]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_isalnum
	printf("\nTest ft_isalnum:\n");
	printf("Expected: %d\n", isalnum(hello[1]));
	printf("Result: %d\n", ft_isalnum(hello[1]));
	if (isalnum(hello[1]) == ft_isalnum(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", isalnum(hello_special[0]));
	printf("Result: %d\n", ft_isalnum(hello_special[0]));
	if (isalnum(hello_special[0]) == ft_isalnum(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");	

	// ft_isascii
	printf("\nTest ft_isascii:\n");
	printf("Expected: %d\n", isascii(hello[1]));
	printf("Result: %d\n", ft_isascii(hello[1]));
	if (isascii(hello[1]) == ft_isascii(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", isascii(hello_special[0]));
	printf("Result: %d\n", ft_isascii(hello_special[0]));
	if (isascii(hello_special[0]) == ft_isascii(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_isprint
	printf("\nTest ft_isprint:\n");
	printf("Expected: %d\n", isprint(hello[1]));
	printf("Result: %d\n", ft_isprint(hello[1]));
	if (isprint(hello[1]) == ft_isprint(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", isprint(hello_special[0]));
	printf("Result: %d\n", ft_isprint(hello_special[0]));
	if (isprint(hello_special[0]) == ft_isprint(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_strlen
	printf("\nTest ft_strlen:\n");

	printf("\nTest ft_memset:\n");

	printf("\nTest ft_bzero:\n");

	printf("\nTest ft_memcpy:\n");

	printf("\nTest ft_memmove:\n");
	
	printf("\nTest ft_strlcpy:\n");
	
	printf("\nTest ft_strlcat:\n");

	printf("\nTest ft_toupper:\n");

	printf("\nTest ft_tolower:\n");

	printf("\nTest ft_strchr:\n");

	printf("\nTest ft_strrchr:\n");

	printf("\nTest ft_strncmp:\n");

	printf("\nTest ft_memchr:\n");

	printf("\nTest ft_memcmp:\n");

	printf("\nTest ft_strnstr:\n");

	printf("\nTest ft_atoi:\n");

	printf("\nTest ft_calloc:\n");

	printf("\nTest ft_strdup:\n");

	printf("\nEnd Test\n");
}
