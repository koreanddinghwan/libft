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

	printf("\n######strlen####\n");

	char *stlen = "i am myukang";

	printf(" strlen : %lu\n", strlen(stlen));
	printf(" ft_strlen : %lu\n", ft_strlen(stlen));
	printf(" sizeof size_t : %lu\n", sizeof(size_t));

	char *b;

	b = malloc(sizeof(unsigned char) * 50);
	b = memset(b, 128, -1);

	printf("\n###memset###\n");
	i = 0;
	while(i < 100)
	{
		printf("i : %d, b : %d\n", i, *((unsigned char *)b));
		b++;
		i++;
	}

	char *cm;
	cm = malloc(sizeof(unsigned char) * 50);
	cm = ft_memset(cm, 128, -1);
	printf("\n\n\nft_memset\n\n\n");
	i = 0;
	while(i < 100)
	{
		printf("i : %d, b : %d\n", i, *((unsigned char *)cm));
		cm++;
		i++;
	}
	
	printf("\n\n\n###memset\n");
	void	 *memset_arr;
	memset_arr = malloc(sizeof(char) * 10);
	memset_arr = (char *)memset(memset_arr, 0x27, -1);
	i = 0;
	while (i < 20)
	{
		printf("i %d, v : %x\n", i, *(char *)(memset_arr + i));
		i++;
	}
	void	 *memset_arr2;
	printf("\n\n####ft_memset####\n");
	memset_arr2 = malloc(sizeof(char) * 10);
	memset_arr2 = (int *)ft_memset(memset_arr2, 0x27, -1);
	i = 0;
	while (i < 20)
	{
		printf("i : %d v :  %x\n",i, *(char *)(memset_arr2 + i));
		i++;
	}

	printf("\n\n####memcpy####\n");
char source[28] = "This is the source string";
char target[28] = "This is the target string";
 
  printf( "Before memcpy, target is \"%s\"\n", target );
  memcpy( target, source, 28);
  printf( "After memcpy, target becomes \"%s\"\n", target );

  printf("\n\n####ft_memcpy####\n");
char source2[28] = "This is the source string";
char target2[28] = "This is the target string";

  printf( "Before ft_memcpy, target is \"%s\"\n", target2 );
  ft_memcpy( target2, source2, 28);
  printf( "After ft_memcpy, target becomes \"%s\"\n", target2 );
/*********************  Expected output:  ************************
 
Before memcpy, target is "This is the target string"
After memcpy, target becomes "This is the source string"
*/


	return 0;
}
