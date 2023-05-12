#include "libft.h"
#include <limits.h>
#include <stdio.h>

#include <ctype.h>
#include <strings.h>
#include <string.h>

void test_part1()
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
    
		// Test case 1: move data from src to dst when dst overlaps with src (moving backwards)
	char src_1[] = "hello world";
	char dst_1[12];

	printf("Expected: %p\n", memmove(dst_1 + 6, src_1, 6));
	printf("Result: %p\n", ft_memmove(dst_1 + 6, src_1, 6));
	if (memcmp(dst_1 + 6, "hello ", 6) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// Test case 2: move data from src to dst when dst overlaps with src (moving forwards)
	char src_2[] = "hello world";
	char dst_2[12];

	printf("Expected: %p\n", memmove(dst_2, src_2 + 6, 6));
	printf("Result: %p\n", ft_memmove(dst_2, src_2 + 6, 6));
	if (memcmp(dst_2, "world", 5) == 0)
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	// Test case 3: move data from src to dst when dst doesn't overlap with src
	char src_3[] = "hello world";
	char dst_3[12];

	printf("Expected: %p\n", memmove(dst_3, src_3, 12));
	printf("Result: %p\n", ft_memmove(src_3, dst_3, 12));
	if (memcmp(dst_3, "hello world\0", 12) == 0)
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

// ft_strncmp
	printf("\nTest ft_strncmp:\n");
	char hello_cmp_src[] = "Hello World";
	char hello_cmp[] = "llo";
	
	printf("Expected: %d\n", strncmp(hello_cmp_src, hello_cmp, 7));
	printf("Result: %d\n", ft_strncmp(hello_cmp_src, hello_cmp, 7));
	if (strncmp(hello_cmp_src, hello_cmp, 7) == ft_strncmp(hello_cmp_src, hello_cmp, 7))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_memchr
	printf("\nTest ft_memchr:\n");
	char hello_memchr[] = "Hello World";
	char hello_special_memchr[] = "";
	printf("Expected: %p\n", memchr(hello_memchr, 'o', 5));
	printf("Result: %p\n", ft_memchr(hello_memchr, 'o', 5));
	if (memchr(hello_memchr, 'o', 5) == ft_memchr(hello_memchr, 'o', 5))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");
	printf("Expected: %p\n", memchr(hello_special_memchr, '!', 6));
	printf("Result: %p\n", ft_memchr(hello_special_memchr, '!', 6));
	if (memchr(hello_special_memchr, '!', 6) == ft_memchr(hello_special_memchr, '!', 6))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

// ft_memcmp
	printf("\nTest ft_memcmp:\n");
	char *str1_memcmp = "hello";
	char *str2_memcmp = "hello";
	int n = 5;

	printf("Expected: %d\n", memcmp(str1_memcmp, str2_memcmp, n));
	printf("Result: %d\n", ft_memcmp(str1_memcmp, str2_memcmp, n));
	if (memcmp(str1_memcmp, str2_memcmp, n) == ft_memcmp(str1_memcmp, str2_memcmp, n))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

	char *str3_memcmp = "hello";
	char *str4_memcmp = "world";
	int m = 3;

	printf("Expected: %d\n", memcmp(str3_memcmp, str4_memcmp, m));
	printf("Result: %d\n", ft_memcmp(str3_memcmp, str4_memcmp, m));
	if (memcmp(str3_memcmp, str4_memcmp, m) == ft_memcmp(str3_memcmp, str4_memcmp, m))
		printf("\x1b[32mPASSED\x1b[0m\n");
	else
		printf("\x1b[31mFAILED\x1b[0m\n");

/*
// ft_strnstr
	char hello_strnstr[] = "Hello World";
	// char hello_strnstr_special[] = "#ello 3@rld!";

	printf("\nTest ft_strnstr:\n");
	printf("Expected: %s\n", strnstr(&hello_strnstr[1], "world", 3));
	printf("Result: %s\n", ft_strnstr(&hello_strnstr[1], "world", 3));
	if (strcmp(strnstr(&hello_strnstr[1], "world", 3), ft_strnstr(&hello_strnstr[1], "world", 3)) == 0)
	    printf("\x1b[32mPASSED\x1b[0m\n");
	else
	    printf("\x1b[31mFAILED\x1b[0m\n");

	printf("Expected: %s\n", strnstr(&hello_strnstr_special[0], "xyz", 12));
	printf("Result: %s\n", ft_strnstr(&hello_strnstr_special[0], "xyz", strlen(hello_strnstr_special)));
	if (strcmp(strnstr(&hello_strnstr_special[0], "xyz", strlen(hello_strnstr_special)), ft_strnstr(&hello_strnstr_special[0], "xyz", strlen(hello_strnstr_special))) == 0)
 	   printf("\x1b[32mPASSED\x1b[0m\n");
	else
 	   printf("\x1b[31mFAILED\x1b[0m\n");
*/

// ft_atoi
	printf("\nTest ft_atoi:\n");
	const char *test_cases[] = {
        	"0",
        	"42",
        	"-42",
        	"   123",
        	"   -123",
        	"123   ",
        	"-123   ",
        	"2147483647",
       		"-2147483648",
        	// "9223372036854775807",
        	// "-9223372036854775808",
        	"  +42",
        	"  \t\n\v\f\r42",
        	"",
        	"garbage",
        	"garbage42",
        	"42garbage",
        	"garbage42garbage"
    	};
    	const int expected[] = {
        	0,
        	42,
        	-42,
        	123,
        	-123,
        	123,
        	-123,
        	2147483647,
        	-2147483648,
        	// 9223372036854775807,
        	// -9223372036854775808,
        	42,
        	42,
        	0,
        	0,
        	0,
        	42,
        	0,
        	0
    	};
    	const size_t num_test_cases = sizeof(test_cases) / sizeof(*test_cases);
    	int result;
    	size_t i;
    	for (i = 0; i < num_test_cases; i++) {
        	printf("Test case %zu: \"%s\"\n", i + 1, test_cases[i]);
        	result = ft_atoi(test_cases[i]);
        	if (result == expected[i]) {
        		printf("\x1b[32mPASSED\x1b[0m\n");
        	} else {
			printf("\x1b[31mFAILED\x1b[0m: expected %d, got %d\n", expected[i], result);
        	}
        	printf("\n");
    	}

// ft_calloc
	printf("\nTest ft_calloc:\n");
	int* ptr1 = (int*)calloc(5, sizeof(int));
    	int* ptr2 = (int*)ft_calloc(5, sizeof(int));
   	int passed = 1;
    	for (int i = 0; i < 5; i++) {
        	if (ptr1[i] != ptr2[i]) {
			passed = 0;
            		break;
       		 }
    	}
    	free(ptr1);
    	free(ptr2);
    	if (passed) {
        	printf("\x1b[32mPASSED\x1b[0m\n");
    	} else {
        	printf("\x1b[31mFAILED\x1b[0m\n");
    	}

// ft_strdup
	printf("\nTest ft_strdup:\n");
	const char *hello_strdup = "hello";
    	const char *hello_special_strdup = "he\0llo";

    	// Test 1: Duplicate a string
    	printf("Test 1: Duplicate a string\n");
    	char *s1 = strdup(hello_strdup);
    	char *s2 = ft_strdup(hello_strdup);
    	if (strcmp(s1, s2) == 0)
    	    printf("\x1b[32mPASSED\x1b[0m\n");
    	else
    	    printf("\x1b[31mFAILED\x1b[0m\n");
    	free(s1);
    	free(s2);

    	// Test 2: Duplicate a string with a null character in the middle
    	printf("Test 2: Duplicate a string with a null character in the middle\n");
    	char *s3 = strdup(hello_special_strdup);
    	char *s4 = ft_strdup(hello_special_strdup);
    	if (strcmp(s3, s4) == 0)
    	    printf("\x1b[32mPASSED\x1b[0m\n");
    	else
    	    printf("\x1b[31mFAILED\x1b[0m\n");
    	free(s3);
    	free(s4);


	printf("\nEnd Test\n");
}
