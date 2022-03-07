#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	int i  = -10;
	while (i < 130)
	{
		printf("---------");
		printf("\ni : %d isalpha : %d\n",i, isalpha(i));
		printf("\ni : %d ft_isalpha : %d\n",i, ft_isalpha(i));
		i++;
	}
	i = -10;
	while (i < 130)
	{
		printf("---------");
		printf("\ni : %d isdigit : %d\n",i ,  isdigit(i));
		printf("\ni : %d ft_isdigit : %d\n",i,  ft_isdigit(i));
		i++;
	}
	i = -10;
	while (i < 130)
	{
		printf("---------");
		printf("\ni : %d isalnum : %d\n", i, ft_isalnum(i));
		printf("\ni : %d ft_isalnum : %d\n", i, ft_isalnum(i));
		i++;
	}

	i = -10;
	while (i < 130)
	{
		printf("---------");
		printf("\ni : %d isascii : %d\n", i, isascii(i));
		printf("\ni : %d ft_isascii : %d\n", i, ft_isascii(i));
		i++;
	}

	char *s;

	s = "my name is myukang";
	printf("%lu\n", strlen(s));
	printf("%lu\n", ft_strlen(s));

	i = 0;
	while (i <= 255)
	{
		printf("-------------");
		printf("\ni : %d, isprint : %d\n", i, isprint(i));
		printf("\ni : %d, ft_isprint : %d\n", i, ft_isprint(i));
		i++;
	}

	char c;
	c = 32;
	while (c < 127)
	{
		printf("-------------");
		printf("\nc : %c, toupper : %c\n", c, toupper(c));
		printf("\nc : %c, ft_toupper : %c\n", c, ft_toupper(c));
		c++;
	}

	c = 32;
	while (c < 127)
	{
		printf("-------------");
		printf("\nc : %c, tolower : %c\n", c, tolower(c));
		printf("\nc : %c, ft_tolower : %c\n", c, ft_tolower(c));
		c++;
	}

	char *b;
	char *cm;

	b = malloc(sizeof(char) * 100);
	b = (char *)memset(b, '0', 1);
	
	cm = malloc(sizeof(char) * 100);
	cm = (char *)ft_memset(cm, '0', 1);

	i = 0;
	while(i < 100)
	{
		printf("i : %d, b : %d\n", i, *b);
		b++;
		i++;
	}

	printf("\n\n\nft_memset\n\n\n");
	i = 0;
	while(i < 100)
	{
		printf("i : %d, b : %d\n", i, *cm);
		cm++;
		i++;
	}
	
	printf("\n\n\nmemset\n\n\n");
	void	 *memset_arr;
	memset_arr = malloc(sizeof(char) * 10);
	memset_arr = (char *)memset(memset_arr, 0x27, 8);
	i = 0;
	printf("i : %d v :  %x\n",i, *(char *)memset_arr);
	memset_arr++;
	printf("i : %d v :  %x\n",i, *(char *)memset_arr);
	
	memset_arr = malloc(sizeof(char) * 10);
	memset_arr = (char *)memset(memset_arr, 0x27, -1);
	printf("i : %d v :  %x\n",-1, *(char *)memset_arr);
	i = 0;
	printf("i %d, %x\n", i, *(char *)(memset_arr + i));

	int *memset_arr2;
	printf("\n\nft_memset\n\n");
	memset_arr2 = malloc(sizeof(int) * 2);
	memset_arr2 = (int *)ft_memset(memset_arr2, 0x27, 8);
	i = 0;
	printf("i : %d v :  %x\n",i, *memset_arr2);
	memset_arr2++;
	printf("i : %d v :  %x\n",i, *memset_arr2);

	void	*p;
	char 	*t;

	p = malloc(sizeof(char) * 20);
	p = {'t', 'e', 's', 't', ' ', 't', 'e', 'x', 't', 0};
	t = "test text";
	printf("%s\n", (char *)memmove(p, p, 11));

	void	*p2;
	p2 = malloc(sizeof(char) * 20);
	printf("%s\n", (char *)ft_memcpy(p2, t, 11));

	



	free(p);
	free(p2);
	return 0;
}
