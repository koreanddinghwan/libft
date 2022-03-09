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
	b = memset(b, -130, 5);

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
	cm = ft_memset(cm, -130, 5);
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
	memset_arr = (char *)memset(memset_arr, -1, 1);
	i = 0;
	while (i < 20)
	{
		printf("i %d, v : %x\n", i, *(char *)(memset_arr + i));
		i++;
	}
	void	 *memset_arr2;
	printf("\n\n####ft_memset####\n");
	memset_arr2 = malloc(sizeof(char) * 10);
	memset_arr2 = (int *)ft_memset(memset_arr2, -1, 1);
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


	printf("\n\n####memmove####\n");
  char target3[30] = "a shiny white sphere";
  char *p = target3 + 8;  /* p points at the starting character
                          of the word we want to replace */
  char *source3 = target3 + 14; /* start of "shiny" */
  printf( "Before memmove, target is \"%s\"\n", target3 );
  memmove( p, source3, 8);
  printf( "After memmove, target becomes \"%s\"\n", target3 );

	printf("\n\n####ft_memmove####\n");
  char target4[30] = "a shiny white sphere";
  char *p2 = target4 + 8;  /* p points at the starting character
                          of the word we want to replace */
  char *source4 = target4 + 14; /* start of "shiny" */
  printf( "Before memmove, target is \"%s\"\n", target4 );
  ft_memmove( p2, source4, 8);
  printf( "After memmove, target becomes \"%s\"\n", target4 );


	char target5[30] = "this is a dup test";
	printf("dup test \"%s\"\n", target5);
	ft_memmove(target5, target5, 1);  
	printf("dup test \"%s\"\n", target5);

	printf("\n\n####memchr####\n");
	unsigned char target6[13] = {15, 26, 175, 123, 253, -123, -1};
	printf("%hhu\n", *(unsigned char*)memchr(target6, 253, 6));

	printf("\n\n####ft_memchr####\n");
	printf("%hhu\n", *(unsigned char*)ft_memchr(target6, 253, 6));

	printf("\n\n####memcmp####\n");
	unsigned char target7[15] = "bravo my life";
	unsigned char target8[15] = "bravo my life";

	printf("%d\n", memcmp(target7, target8, 15));
	printf("\n\n####ft_memcmp####\n");
	printf("%d\n", ft_memcmp(target7, target8, 15));


	printf("\n\n####memcmp####\n");
	unsigned char *target9 = malloc(sizeof(unsigned char) * 15);
	i = 0;
	while(target[i])
	{
		target9[i] = target7[i] + 128;
		i++;
	}
	i = 0;
	while(i < 15)
	{
		printf("unsigned char arr : %hhu\n", target9[i]);
		printf("target 7[%d] : %hhu\n",i, target7[i]);
		i++;
	}
	printf("memcmp 인싸차 테스트 : %d\n", memcmp(target9, target7, 15)); 
	printf("ft_memcmp 언싸차 테스트 : %d\n", ft_memcmp(target9, target7, 15)); 




	printf("\n\n#########\n\n");
 //총 길이 12바이트의 문자열 변수들
    //str_a와 str_b는 8번째 문자가 서로 다름
    char str_a[50] = { 'H', 'e', 'l', 'l','o','\0',' ','1','o','r','l','d' };
    char str_b[50] = { 'H', 'e', 'l', 'l','o','\0',' ','W','o','r','l','d' };
    char str_c[50] = { 'H', 'e', 'l', 'l','o','\0',' ','W','o','r','l','d' };
    char str_d[50] = { 0xAA, 0xAB, 0x00, 0xAD, 0xFF };
    char str_e[50] = { 0xAA, 0xAB, 0xAC, 0xAD, 0xFF };
 
    //strcmp()함수는 NULL('\0')까지만 비교하여 동일한 것으로 결과를 리턴
    printf("%d <- strcmp(str_a, str_b)\n", strcmp(str_a, str_b));
 
    //maxCount를 12로 지정하였으나 NULL('\0')까지만 비교하여 동일한 것으로 결과를 리턴
    printf("%d <= strncmp(str_a, str_b)\n",strncmp(str_a, str_b, 12));

	printf("\n\n");
    //정상적으로 동일하지 않음으로 리턴
    printf("%d <- memcmp(str_a, str_b, 12)\n",memcmp(str_a, str_b, 12));
    printf("%d <- ft_memcmp(str_a, str_b, 12)\n",ft_memcmp(str_a, str_b, 12));

	printf("\n\n");
    //실제 동일한 str_b, str_c를 비교
    printf("%d <= memcmp(str_b, str_c, 12)\n", memcmp(str_b, str_c, 12));
    printf("%d <= ft_memcmp(str_b, str_c, 12)\n", ft_memcmp(str_b, str_c, 12));
	
	printf("\n\n");
	//바이너리 데이터 비교
	printf("%d <= memcmp(str_d, str_e, 12)\n", memcmp(str_d, str_e, 12));
	printf("%d <= ft_memcmp(str_d, str_e, 12)\n", ft_memcmp(str_d, str_e, 12));


	char atoitest1[20] = " -12341234";
	char atoitest2[20] = "	 -2147483648";
	char atoitest3[20] = "  -2147483647";
	char atoitest4[20] = "  --0";
	
	printf("%d\n", atoi(atoitest1));
	printf("%d\n", ft_atoi(atoitest1));
	printf("%d\n", atoi(atoitest2));
	printf("%d\n", ft_atoi(atoitest2));
	printf("%d\n", atoi(atoitest3));
	printf("%d\n", ft_atoi(atoitest3));
	printf("%d\n", atoi(atoitest4));
	printf("%d\n", ft_atoi(atoitest4));

	printf("\n\n####strchr####\n");
	char strchr1[20] = "this is test";
	printf("strchr : %s\n", strchr(strchr1, 105));
	printf("ft_strchr : %s\n", ft_strchr(strchr1, 105));
	
	printf("\n\n####strrchr####\n");
	printf("strrchr	: %s\n", strrchr(strchr1, 105));
	printf("ft_strrchr : %s\n", ft_strrchr(strchr1, 105));

	return 0;
}
