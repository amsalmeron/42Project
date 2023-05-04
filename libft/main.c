#include "libft.h"
#include <limits.h>
#include <stdio.h>

#include <ctype.h>
#include <strings.h>
#include <string.h>

int main()
{
	char hello[] = "Hello World";
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
	printf("Expected: %lu\n", strlen(hello));
	printf("Result: %lu\n", ft_strlen(hello));
	if (strlen(hello) == ft_strlen(hello))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %lu\n", strlen(hello_special));
	printf("Result: %lu\n", ft_strlen(hello_special));
	if (strlen(hello_special) == ft_strlen(hello_special))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");	

// ft_memset
	char set[] = "aaaaa";
	char b = 'b';
	printf("\nTest ft_memset:\n");
	printf("Expected: %p\n", memset(set, b, 2));
	printf("Result: %p\n", ft_memset(set, b, 2));
	if (memset(set, b, 2) == ft_memset(set, b, 2))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %p\n", memset(set, b, 6));
	printf("Result: %p\n", ft_memset(set, b, 6));
	if (memset(set, b, 6) == ft_memset(set, b, 6))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");	

// ft_bzero
	printf("\nTest ft_bzero:\n");	
	char str1[] = "Hello, world!";
    	char str2[] = "Hello, world!";
    	char str3[] = "";
    	char str4[] = "";
    	int num1 = 123;
    	int num2 = 123;
	// test 1: zero out part of a string
	bzero(str1+6, 5);
	ft_bzero(str2+6, 5);
	if (memcmp(str1, str2, sizeof(str1)) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	// test 2: zero out an entire string
	bzero(str3, sizeof(str3));
	ft_bzero(str4, sizeof(str4));
	if (memcmp(str3, str4, sizeof(str3)) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	// test 3: zero out part of an integer
	bzero(&num1, sizeof(num1)/2);
	ft_bzero(&num2, sizeof(num2)/2);
	if (memcmp(&num1, &num2, sizeof(num1)/2) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");	

// ft_memcpy
	printf("\nTest ft_memcpy:\n");
	char src[] = "hello world";
	char dst[12];
	int size = 12;
   	void *my_dst = ft_memcpy(dst, src, size);
    	void *std_dst = memcpy(dst, src, size);
    
	printf("Expected: %p\n", std_dst);
	printf("Result: %p\n", my_dst);
	if (memcmp(my_dst, std_dst, size) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_memmove
	printf("\nTest ft_memmove:\n");
	char src_2[] = "hello world";
    	char dst_2[12];
    
    	// Test case 1: move data from src to dst when dst overlaps with src (moving backwards)
	printf("Expected: %p\n", memmove(dst_2 + 6, src_2, 6));
	printf("Result: %p\n", ft_memmove(src_2 + 6, src_2, 6));
	if ((memcmp(src_2, "hello hello", 12) != 0 || memcmp(dst_2, "      llo", 12) == 0))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
   	// Test case 2: move data from src to dst when dst overlaps with src (moving forwards)
	printf("Expected: %p\n", memmove(dst_2, src_2 + 6, 6));
	printf("Result: %p\n", ft_memmove(src_2, src_2 + 6, 6));
	if (memcmp(src_2, "hello llo", 10) == 0 && memcmp(dst_2, " llo", 4) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
    	// Test case 3: move data from src to dst when dst doesn't overlap with src
	printf("Expected: %p\n", memmove(dst_2, src_2, 12));
	printf("Result: %p\n", ft_memmove(src_2, src_2, 12));
	if (memcmp(dst_2, "hello world", 12) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_strlcpy
	printf("\nTest ft_strlcpy:\n");
	char nums[10] = "012345678";
	char greeting[] = "hello";
	char cpy_special[] = {'\xff', '\xff', '\xff', '\xff', '\0'};

	printf("Expected: %lu\n", strlcpy(nums, greeting, sizeof(nums)));
	printf("Result: %lu\n", ft_strlcpy(nums, greeting, sizeof(nums)));
	if (strlcpy(nums, greeting, sizeof(nums)) == ft_strlcpy(nums, greeting, sizeof(nums)))
	    printf("\x1b[32mPASSED\x1b[0m\n");
	else
	    printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %lu\n", strlcpy(cpy_special, "hello", 5));
	printf("Result: %lu\n", ft_strlcpy(cpy_special, "hello", 5));
	if (strlcpy(cpy_special, "hello", 5) == ft_strlcpy(cpy_special, "hello", 5))
	    printf("\x1b[32mPASSED\x1b[0m\n");
	else
	    printf("\x1b[31mFAILED\x1b[0m\n");

// ft_strlcat	
	printf("\nTest ft_strlcat:\n");
	char buffer[20] = "Hello, ";
	char *strlcat_src = "world!";

	printf("Expected: %lu\n", strlcat(buffer, strlcat_src, 20));
	printf("Result: %lu\n", ft_strlcat(buffer, strlcat_src, 20));
	if (strlcat(buffer, strlcat_src, 20) == ft_strlcat(buffer, strlcat_src, 20))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_toupper	
	printf("\nTest ft_toupper:\n");
	char lower = 'a';
	char upper = 'A';
	char non_alpha = '!';
	printf("Expected: %d\n", toupper(lower));
	printf("Result: %d\n", ft_toupper(lower));
	if (toupper(lower) == ft_toupper(lower))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", toupper(upper));
	printf("Result: %d\n", ft_toupper(upper));
	if (toupper(upper) == ft_toupper(upper))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", toupper(non_alpha));
	printf("Result: %d\n", ft_toupper(non_alpha));
	if (toupper(non_alpha) == ft_toupper(non_alpha))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	
// ft_tolower
	printf("\nTest ft_tolower:\n");
	char lower_2 = 'a';
	char upper_2 = 'A';
	char non_alpha_2 = '!';
	printf("Expected: %d\n", tolower(lower_2));
	printf("Result: %d\n", ft_tolower(lower_2));
	if (tolower(lower_2) == ft_tolower(lower_2))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", tolower(upper_2));
	printf("Result: %d\n", ft_tolower(upper_2));
	if (tolower(upper_2) == ft_tolower(upper_2))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", tolower(non_alpha_2));
	printf("Result: %d\n", ft_tolower(non_alpha_2));
	if (tolower(non_alpha_2) == ft_tolower(non_alpha_2))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_strchr
	printf("\nTest ft_strchr:\n");
	char hello_chr[] = "Hello";
	printf("Expected: %s\n", strchr(hello_chr, 'e'));
	printf("Result: %s\n", ft_strchr(hello_chr, 'e'));
	if (strchr(hello_chr, 'e') == ft_strchr(hello_chr, 'e'))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %s\n", strchr(hello_chr, 'a'));
	printf("Result: %s\n", ft_strchr(hello_chr, 'a'));
	if (strchr(hello_chr, 'a') == ft_strchr(hello_chr, 'a'))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_strrchr
	printf("\nTest ft_strrchr:\n");
	char hello_chrr[] = "Hello test";
	printf("Expected: %s\n", strrchr(hello_chrr, 'e'));
	printf("Result: %s\n", ft_strrchr(hello_chrr, 'e'));
	if (strrchr(hello_chrr, 'e') == ft_strrchr(hello_chrr, 'e'))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %s\n", strrchr(hello_chrr, 'a'));
	printf("Result: %s\n", ft_strrchr(hello_chrr, 'a'));
	if (strrchr(hello_chrr, 'a') == ft_strrchr(hello_chrr, 'a'))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
/*
	// ft_strncmp
	printf("\nTest ft_strncmp:\n");
	printf("Expected: %d\n", strncmp(hello_chrr[1]));
	printf("Result: %d\n", ft_strncmp(hello[1]));
	if (strncmp(hello[1]) == ft_strncmp(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", strncmp(hello_special[0]));
	printf("Result: %d\n", ft_strncmp(hello_special[0]));
	if (strncmp(hello_special[0]) == ft_strncmp(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_memchr
	printf("\nTest ft_memchr:\n");
	printf("Expected: %d\n", memchr(hello[1]));
	printf("Result: %d\n", ft_memchr(hello[1]));
	if (memchr(hello[1]) == ft_memchr(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", memchr(hello_special[0]));
	printf("Result: %d\n", ft_memchr(hello_special[0]));
	if (memchr(hello_special[0]) == ft_memchr(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_memcmp
	printf("\nTest ft_memcmp:\n");
	printf("Expected: %d\n", memcmp(hello[1]));
	printf("Result: %d\n", ft_memcmp(hello[1]));
	if (memcmp(hello[1]) == ft_memcmp(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", memcmp(hello_special[0]));
	printf("Result: %d\n", ft_memcmp(hello_special[0]));
	if (memcmp(hello_special[0]) == ft_memcmp(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_strnstr
	printf("\nTest ft_strnstr:\n");
	printf("Expected: %d\n", strnstr(hello[1]));
	printf("Result: %d\n", ft_strnstr(hello[1]));
	if (strnstr(hello[1]) == ft_strnstr(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", strnstr(hello_special[0]));
	printf("Result: %d\n", ft_strnstr(hello_special[0]));
	if (strnstr(hello_special[0]) == ft_strnstr(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_atoi
	printf("\nTest ft_atoi:\n");
	printf("Expected: %d\n", atoi(hello[1]));
	printf("Result: %d\n", ft_atoi(hello[1]));
	if (atoi(hello[1]) == ft_atoi(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", atoi(hello_special[0]));
	printf("Result: %d\n", ft_atoi(hello_special[0]));
	if (atoi(hello_special[0]) == ft_atoi(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");	

	// ft_calloc
	printf("\nTest ft_calloc:\n");
	printf("Expected: %d\n", calloc(hello[1]));
	printf("Result: %d\n", ft_calloc(hello[1]));
	if (calloc(hello[1]) == ft_calloc(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", calloc(hello_special[0]));
	printf("Result: %d\n", ft_calloc(hello_special[0]));
	if (calloc(hello_special[0]) == ft_calloc(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// ft_strdup
	printf("\nTest ft_strdup:\n");
	printf("Expected: %d\n", strdup(hello[1]));
	printf("Result: %d\n", ft_strdup(hello[1]));
	if (strdup(hello[1]) == ft_strdup(hello[1]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %d\n", strdup(hello_special[0]));
	printf("Result: %d\n", ft_strdup(hello_special[0]));
	if (strdup(hello_special[0]) == ft_strdup(hello_special[0]))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

*/
	printf("\nEnd Test\n");
}
