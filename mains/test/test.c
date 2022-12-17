#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "../libft.h"

void test_isalpha(int c)
{
	printf("\n[ft_isalpha]\n");
	printf("Test: %c\n", c);
	printf("isalpha: %d\nft_isalpha: %d\n", isalpha(c), ft_isalpha(c));
}

void test_isdigit(int c)
{
	printf("\n[ft_isdigit]\n");
	printf("Test: %c\n", c);
	printf("isdigit: %d\nft_isdigit: %d\n", isdigit(c), ft_isdigit(c));
}

void test_isalnum(int c)
{
	printf("\n[ft_isalnum]\n");
	printf("Test: %c\n", c);
	printf("isalnum: %d\nft_isalnum: %d\n", isalnum(c), ft_isalnum(c));
}

void test_isascii(int c)
{
	printf("\n[ft_isascii]\n");
	printf("Test: %i\n", c);
	printf("isascii: %d\nft_isascii: %d\n", isascii(c), ft_isascii(c));
}

void test_isprint(int c)
{
	printf("\n[ft_isprint]\n");
	printf("Test: %i\n", c);
	printf("isprint: %d\nft_isprint: %d\n", isprint(c), ft_isprint(c));
}

void test_strlen(const char	*s)
{
	printf("\n[ft_strlen]\n");
	printf("Test: %s\n", s);
	printf("strlen: %zu\nft_strlen: %zu\n", strlen(s), ft_strlen(s));
}

void test_memset(void *s, int c, size_t n)
{
	printf("\n[ft_memset]\n");
	printf("Initial: %u\n", *((unsigned int *)s));
	ft_memset(s, c, n);
	printf("ft_memset: %u\n", *((unsigned int *)s));
	memset(s, c, n);
	printf("memset: %u\n", *((unsigned int *)s));
}

void test_bzero(void *s, size_t n)
{
	printf("\n[ft_bzero]\n");
	*((unsigned int *)s) = 1337;
	printf("Initial: %u\n", *((unsigned int *)s));
	ft_bzero(s, n);
	printf("ft_bzero: %u\n", *((unsigned int *)s));
	*((unsigned int *)s) = 1337;
	printf("Initial: %u\n", *((unsigned int *)s));
	bzero(s, n);
	printf("bzero: %u\n", *((unsigned int *)s));
}

void test_memcpy(void *dst, const void *src, size_t n)
{
	printf("\n[ft_memcpy]\n");
	*((unsigned int *)src) = 4242;
	printf("Src: %u\n", *((unsigned int *)src));
	*((unsigned int *)dst) = 1337;
	printf("Initial dst: %u\n", *((unsigned int *)dst));
	ft_memcpy(dst, src, n);
	printf("ft_memcpy: %u\n", *((unsigned int *)dst));
	*((unsigned int *)dst) = 1337;
	printf("Initial dst: %u\n", *((unsigned int *)dst));
	memcpy(dst, src, n);
	printf("memcpy: %u\n", *((unsigned int *)dst));
}

void test_memmove(void *dst, const void *src, size_t n)
{
	printf("\n[ft_memmove]\n");
	*((unsigned int *)src) = 4242;
	printf("Src: %u\n", *((unsigned int *)src));
	*((unsigned int *)dst) = 1337;
	printf("Initial dst: %u\n", *((unsigned int *)dst));
	ft_memmove(dst, src, n);
	printf("ft_memmove: %u\n", *((unsigned int *)dst));
	*((unsigned int *)dst) = 1337;
	printf("Initial dst: %u\n", *((unsigned int *)dst));
	memmove(dst, src, n);
	printf("memmove: %u\n", *((unsigned int *)dst));
}

void test_strlcpy(char *dst, const char *src, size_t size)
{
	printf("\n[ft_strlcpy]\n");
	printf("Initial dst: %s\n", dst);
	ft_strlcpy(dst, src, size);
	printf("ft_strlcpy: %s\n", dst);
	strlcpy(dst, src, size);
	printf("strlcpy: %s\n", dst);
}

void test_strlcat(char *dst, const char *src, size_t size)
{
	int r1 = 0, r2 = 0;
	printf("\n[ft_strlcat]\n");
	printf("Src: %s\n", src);
	dst[0] = '\0';
	r1 = ft_strlcat(dst, src, size);
	printf("ft_strlcat: %s\n", dst);
	dst[0] = '\0';
	r2 = strlcat(dst, src, size);
	printf("strlcat: %s\n", dst);
	printf("Returns:\nft_strlcat: %i\nstrlcat: %i\n", r1, r2);
}

void test_toupper(int c)
{
	printf("\n[ft_toupper]\n");
	printf("Test: %c\n", c);
	printf("toupper: %c\nft_toupper: %c\n", toupper(c), ft_toupper(c));
}

void test_tolower(int c)
{
	printf("\n[ft_tolower]\n");
	printf("Test: %c\n", c);
	printf("tolower: %c\nft_tolower: %c\n", tolower(c), ft_tolower(c));
}

void test_strchr(const char *s, int c)
{
	printf("\n[ft_strchr]\n");
	printf("Test: %s, %c\n", s, c);
	printf("strchr: %p\nft_strchr: %p\n", strchr(s, c), ft_strchr(s, c));
}

void test_strrchr(const char *s, int c)
{
	printf("\n[ft_strrchr]\n");
	printf("Test: %s, %c\n", s, c);
	printf("strrchr: %p\nft_strrchr: %p\n", strrchr(s, c), ft_strrchr(s, c));
}

void test_strncmp(const char *s1, const char *s2, size_t n)
{
	printf("\n[ft_strncmp]\n");
	printf("Test: %s, %s, %zu\n", s1, s2, n);
	printf("strncmp: %d\nft_strncmp: %d\n", strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
}

void test_memchr(const void *s, int c, size_t n)
{
	printf("\n[ft_memchr]\n");
	printf("Test: %s, %c, %zu\n", s, c, n);
	printf("memchr: %p\nft_memchr: %p\n", memchr(s, c, n), ft_memchr(s, c, n));
}

void test_memcmp(const void *s1, const void *s2, size_t n)
{
	printf("\n[ft_memcmp]\n");
	printf("Test: %s, %s, %zu\n", s1, s2, n);
	printf("memcmp: %d\nft_memcmp: %d\n", memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
}

void test_strnstr(const char	*big, const char *little, size_t len)
{
	printf("\n[ft_strnstr]\n");
	printf("Test: %s, %s, %zu\n", big, little, len);
	printf("strnstr: %s\nft_strnstr: %s\n", strnstr(big, little, len), ft_strnstr(big, little, len));
}

void test_atoi(const char *nptr)
{
	printf("\n[ft_atoi]\n");
	printf("Test: %s\n", nptr);
	printf("atoi: %d\nft_atoi: %d\n", atoi(nptr), ft_atoi(nptr));
}

void test_strdup(const char *s)
{
	printf("\n[ft_strdup]\n");
	printf("Test: %s\n", s);
	printf("strdup: %s\nft_strdup: %s\n", strdup(s), ft_strdup(s));
}

int	main()
{
	void	*mem = malloc(10);
	void	*p1 =  mem;
	void	*p2 =  (char *)mem + 5;
	char	*s1 = ft_strdup("Hello");
	char	*s2 = ft_strdup("Hiver");
	void	*over =  mem;
	void	*lap =  (unsigned char *)over + 2;

	// Part 1
	test_isalpha('A');
	test_isalpha('Z');
	test_isalpha('4');
	test_isalpha(0);
	test_isalpha(255);
	test_isalpha(256);

	test_isdigit('0');
	test_isdigit('9');
	test_isdigit('F');
	test_isdigit(0);
	test_isdigit(255);
	test_isdigit(256);

	test_isalnum('A');
	test_isalnum('0');
	test_isalnum('@');
	test_isalnum(0);
	test_isalnum(255);
	test_isalnum(256);

	test_isascii('A');
	test_isascii('0');
	test_isascii(0);
	test_isascii(127);
	test_isascii(128);

	test_isprint('A');
	test_isprint(0);
	test_isprint(8);
	test_isprint(42);
	test_isprint(126);
	test_isprint(127);

	test_strlen("Hello World");
	test_strlen("");
	test_strlen("  Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello   ");

	test_memset(mem, 42, 4);
	test_memset(mem, 0, 0);

	test_bzero(mem, 4);
	test_bzero(mem, 0);

	test_memcpy(p2, p1, 4);
	test_memcpy(p1, p2, 4);
	test_memcpy(p2, p1, 0);

	test_memmove(p2, p1, 4);
	test_memmove(p2, p1, 0);
	test_memmove(over, lap, 4);

	test_strlcpy(s2, s1, 6);
	test_strlcpy(s1, s2, 6);
	test_strlcpy(s1, "TEST", 6);
	test_strlcpy(s1, "TOO LONG!", 6);
	test_strlcpy(s1, s2, 0);

	test_strlcat(mem, s1, 10);
	test_strlcat(mem, s2, 10);
	test_strlcat(mem, "", 10);
	test_strlcat(mem, "", 5);

	test_toupper('a');
	test_toupper('A');
	test_toupper('z');
	test_toupper('4');
	test_toupper(6);
	test_toupper(128);
	test_toupper(200);

	test_tolower('a');
	test_tolower('A');
	test_tolower('z');
	test_tolower('4');
	test_tolower(6);
	test_tolower(128);
	test_tolower(200);

	test_strchr("ABCD", 'A');
	test_strchr("ABCD", 'B');
	test_strchr("ABCD", 'D');
	test_strchr("ABCD", 'E');
	test_strchr("ABCD", '\0');
	test_strchr("ABCD", 0);
	test_strchr("ABCD", -1);
	test_strchr("", 0);

	test_strrchr("ABCD", 'A');
	test_strrchr("ABCD", 'B');
	test_strrchr("ABCD", 'D');
	test_strrchr("ABCD", 'E');
	test_strrchr("ABCD", 0);
	test_strrchr("ABCD", -1);
	test_strrchr("", 0);

	test_strncmp("ABCD", "ABC", 4);
	test_strncmp("ABCD", "BCD", 0);
	test_strncmp("ABCD", "ABC", 0);
	test_strncmp("ABCD", "ABC", 1337);

	test_memchr("ABCD", 'A', 3);
	test_memchr("ABCD", 'B', 3);
	test_memchr("ABCD", 'D', 3);
	test_memchr("ABCD", 'E', 3);
	test_memchr("ABCD", 'A', 0);
	test_memchr("ABCD", 'A', 99999999);
	test_memchr("ABCD", 0, 3);
	test_memchr("ABCD", -1, 3);
	test_memchr("", 0, 3);

	test_memcmp("Hello", "Hello", 5);
	test_memcmp("Hello World", "Hello", 5);
	test_memcmp("Hello World", "Hello", 0);
	test_memcmp("World Hello", "Hello", 5);
	test_memcmp("Hello World", "", 0);
	test_memcmp("", "World", 0);
	test_memcmp("", "", 0);

	test_strnstr("Hans says Hello World", "Hello", 15);
	test_strnstr("Hans says Goodbye Hell", "Hello", 16);
	test_strnstr("Hello", "Hello", 5);
	test_strnstr("Hello", "", 15);
	test_strnstr("", "Hello", 15);
	test_strnstr("", "", 15);
	test_strnstr("", "", 0);
	test_strnstr("", "", -1);
	test_strnstr("Hans says Hello World", "Hello", 0);

	test_atoi("1337");
	test_atoi("-1337");
	test_atoi("0");
	test_atoi("9999999");
	test_atoi("999999999999999");
	test_atoi("9999999999999999999999999999");
	test_atoi("-1");
	test_atoi("-9999999999999999999999999999");

	test_strdup("Hello Hive");
	test_strdup("");

	// Part 2
	printf("\n[ft_substr]\n");
	printf("%s\n", ft_substr("Hello World", 0, 11));
	printf("%s\n", ft_substr("Hello World", 5, 5));
	printf("%s\n", ft_substr("Hello World", 0, 100));
	printf("%s\n", ft_substr("Hello World", 100, 0));
	printf("%s\n", ft_substr("Hello World", 0, 0));

	printf("\n[ft_strjoin]\n");
	printf("%s\n", ft_strjoin("Hello", "World"));
	printf("%s\n", ft_strjoin("", ""));

	printf("\n[ft_strtrim]\n");
	printf("%s\n", ft_strtrim(" . Hello	World  	.", "\t ."));
	printf("%s\n", ft_strtrim(" . Hello	World  	.", ""));
	printf("%s\n", ft_strtrim("", "\t ."));

	printf("\n[ft_split]\n");
	printf("%s\n", ft_split("Hello from Hive's Hivers!", ' ')[0]);
	printf("%s\n", ft_split("Hello from Hive's Hivers!", '\'')[0]);
	printf("%s\n", ft_split("Hello from Hive's Hivers!", 0)[0]);

	printf("\n[ft_itoa]\n");
	printf("%s\n", ft_itoa(1337));
	printf("%s\n", ft_itoa(-1337));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));

	char	*src = "HelloWorld!";
	char	*dst = "!";
	size_t size = 100;
	size_t actual_size = 100;
	void	*test = malloc(actual_size);
	ft_strlcpy(test, dst, actual_size);
	int mine = ft_strlcat(test, src, size);
	printf("\nMine Dst: %s\n", test);
	ft_strlcpy(test, dst, actual_size);
	int real = strlcat(test, src, size);
	printf("Real Dst: %s\n", test);
	printf("Return:\nMine: %d\nReal: %d\n", mine, real);
}
