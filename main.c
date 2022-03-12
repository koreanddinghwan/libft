/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:36:33 by myukang           #+#    #+#             */
/*   Updated: 2022/03/12 12:17:23 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
char	strmapifnc(unsigned int i, char c)
	{
		if (i % 2 == 0)
			return (c + 1);
		else
			return (c);
	}

void	striterifnc(unsigned int i, char *s)
{
	if (i % 2 == 0)
		*s = *s + 1;
}

void	listprint(t_list	*node)
{
	t_list	*start = node;
	int	i = 1;
	printf("%ld\n", (unsigned long)node);
	while(start != 0)
	{
		printf("<%d번째 노드 %s> -> ",i,start->content);
		i++;
		start = start->next;
	}
	if (start == 0)
		printf("NULL");
	printf("\n");
}

void	listintprint(t_list	*start)
{
	int	i = 1;
	while (start != 0)
	{
		printf("<%d 번째 노드 %d> -> ", i, *(int *)start->content);
		start = start->next;
		i++;
	}
	if (start == 0)
		printf("NULL");
	printf("\n");
}

void	delcontent(void	*delcontp)
{
	free(delcontp);	
}

void	iterfnc(void	*cont)
{
	printf("iter function이 여기서 호출됨 %s\n", (char *)cont);
}

void	*mapfnc(void	*cont)
{
	int	*result;
	
	result = cont;
	*result = *result + 1;
	return (result);
}

int main(void)
{
	int i  = -10;
	while (i < 500)
	{
		printf("---------");
		printf("\ni : %d isalpha : %d\n",i, isalpha(i));
		printf("\ni : %d ft_isalpha : %d\n",i, ft_isalpha(i));
		i++;
	}
	i = -10;
	while (i < 500)
	{
		printf("---------");
		printf("\ni : %d isdigit : %d\n",i ,  isdigit(i));
		printf("\ni : %d ft_isdigit : %d\n",i,  ft_isdigit(i));
		i++;
	}
	i = -10;
	while (i < 500)
	{
		printf("---------");
		printf("\ni : %d isalnum : %d\n", i, ft_isalnum(i));
		printf("\ni : %d ft_isalnum : %d\n", i, ft_isalnum(i));
		i++;
	}

	i = -10;
	while (i < 500)
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


	printf("\n\n####memmove, slide << 1####\n");
  char target3[30] = "a shiny white sphere";
  char *p = target3 + 3;  
  char *source3 = target3 + 5;  
  printf( "Before memmove, target is \"%s\"\n", target3 );
  memmove( p, source3, 3);
  printf( "After memmove, target becomes \"%s\"\n", target3 );

	printf("\n\n####ft_memmove slide << 1####\n");
  char target4[30] = "a shiny white sphere";
  char *p2 = target4 + 3;  
  char *source4 = target4 + 5; 
  printf( "Before memmove, target is \"%s\"\n", target4 );
  ft_memmove( p2, source4, 3);
  printf( "After memmove, target becomes \"%s\"\n", target4 );



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
	
	printf("\n\n###strncmp####\n");
	char strncmp1[20] = "this is test";
	char strncmp2[20] = "";
	printf("%d\n", strncmp(strncmp1, strncmp2, 0));
	printf("%d\n", ft_strncmp(strncmp1, strncmp2, 0));

	printf("\n\n####strchr####\n");
	char strchr1[20] = "this is test";
	printf("strchr : %s\n", strchr(strchr1, 105));
	printf("ft_strchr : %s\n", ft_strchr(strchr1, 105));
	
	printf("\n\n####strrchr####\n");
	printf("strrchr	: %s\n", strrchr(strchr1, 105));
	printf("ft_strrchr : %s\n", ft_strrchr(strchr1, 105));

	char strnstr1[20] = "this is test string";
	char strnstr2[20] = "this";
	char strnstr3[20] = "is";
	char strnstr4[20] = "test";

	printf("\n\n####strnstr####\n");
	printf("strnstr : %s\n", strnstr(strnstr1, strnstr2, 10)); 
	printf("strnstr : %s\n", ft_strnstr(strnstr1, strnstr2, 10)); 
	printf("strnstr : %s\n", strnstr(strnstr1, strnstr3, 10)); 
	printf("strnstr : %s\n", ft_strnstr(strnstr1, strnstr3, 10)); 
	printf("strnstr : %s\n", strnstr(strnstr1, strnstr4, 10)); 
	printf("strnstr : %s\n", ft_strnstr(strnstr1, strnstr4, 10));
	printf("test\n");

	char	*callocp1 = ft_calloc(5, sizeof(char));
	short	*callocp2 = ft_calloc(5, sizeof(short));
	int		*callocp3 = ft_calloc(5, sizeof(int));
	long	*callocp4 = ft_calloc(5, sizeof(long));
	
	printf("\n\n####calloc###\n");
	i = 0;
	while (i < 5)
	{
		printf("\n#####\n");
		printf("%d번째\n", i);
		printf("char : %c\n", callocp1[i]);
		printf("short : %hu\n", callocp2[i]);
		printf("int : %d\n", callocp3[i]);
		printf("long : %ld\n", callocp4[i]);
		i++;
	}

	callocp1 = ft_calloc(5, sizeof(char));
	callocp2 = ft_calloc(5, sizeof(short));
	callocp3 = ft_calloc(5, sizeof(int));
	callocp4 = ft_calloc(5, sizeof(long));

	printf("\n\n####ft_calloc###\n");
	i = 0;
	while (i < 5)
	{
		printf("\n#####\n");
		printf("%d번째\n", i);
		printf("char : %c\n", callocp1[i]);
		printf("short : %hu\n", callocp2[i]);
		printf("int : %d\n", callocp3[i]);
		printf("long : %ld\n", callocp4[i]);
		i++;
	}

	printf("\n\n####ft_substr####\n");
	char substr1[30] = "substr test";
	printf("original string \"%s\"\n", substr1);
	printf("ft_substr(substr1, 1, 5) : %s\n", ft_substr(substr1, 1, 5));
	printf("ft_substr(substr1, 7, 1) : %s\n", ft_substr(substr1, 7, 1));
	printf("ft_substr(substr1, 7, 9) : %s\n", ft_substr(substr1, 7, 9));
	
	printf("\n\n####strjoin####\n");
	char joinstr1[30] = "joinstr";
	char joinstr2[30] = "this join is simple";
	printf("ft_joinstr(joinstr1, joinstr2) -> \"%s\"\n", ft_strjoin(joinstr1, joinstr2));
	char joinstr3[30] = "";
	char joinstr4[30] = "";
	printf("ft_joinstr(joinstr3, joinstr4) -> \"%s\"\n", ft_strjoin(joinstr3, joinstr4));

	printf("\n\n####strtrim####\n");
	char trimstr1[30] = "trim this str please";
	char set[30] = "eti";
	printf("trimstr1 : %s\n", trimstr1);
	printf("set : %s\n", set);
	printf("ft_strtrim(trimstr1, set) -> \"%s\"\n", ft_strtrim(trimstr1, set));

	printf("\n\n####ft_split####\n");
	char splitstr1[30] = "split is very freindly";
	c = 0;
	char	**splitpointer;
	printf("splitstr -> %s\n", splitstr1);
	printf("c -> %c\n", c);
	splitpointer = ft_split(splitstr1, c);
	i = 0;
	while (splitpointer[i] != 0)
	{
		printf("%s\n", splitpointer[i]);	
		i++;
	}

	printf("\n\n###itoa####\n");
	int	d = -2147483648;
	printf("%d -> \"%s\"\n", d, ft_itoa(d));
	d = 2147483647;
	printf("%d -> \"%s\n", d, ft_itoa(d));
	d = 0;
	printf("%d -> \"%s\"\n", d, ft_itoa(d));
	d = 1234;
	printf("%d -> \"%s\"\n", d, ft_itoa(d));
	d = -1234;
	printf("%d -> \"%s\"\n", d, ft_itoa(d));

	printf("\n\n####strmapifnc###\n");

	char strmapistr1[30] = "abcdefghijk";
	printf("origin => \"%s\"\n", strmapistr1);
	printf("after => \"%s\"\n", ft_strmapi(strmapistr1, strmapifnc));


	printf("\n\n####striteri###\n");
	char striteristr[30] = "abcdefghijk";
	printf("origin => \"%s\"\n", striteristr);
	ft_striteri(striteristr, striterifnc);
	printf("after => \"%s\"\n", striteristr);
	
	printf("\n\n####putchar####\n");
	char putchar1 = 'A';
	printf("putchar1 : \'%c\'\n", putchar1);
	ft_putchar_fd(putchar1, 1);

	printf("\n\n####putstr####\n");	
	char	putstr1[30] = "putstr is friendly now";
	ft_putstr_fd(putstr1, 1);
	ft_putstr_fd("--------newline------", 1);

	printf("\n\n####putendl####\n");
	char	putendl[30] = "putendl end with newl";
	ft_putendl_fd(putendl, 1);
	ft_putstr_fd("--------newline------", 1);

	printf("\n\n####putnbr####\n");
	d = -2147483648;
	printf("n : %d\n", d);
	ft_putnbr_fd(d, 1);
	printf("\n");
	printf("\n");
	
	d = 2147483647;
	printf("n : %d\n", d);
	ft_putnbr_fd(d, 1);
	printf("\n");
	printf("\n");
	
	d = 0;
	printf("n : %d\n", d);
	ft_putnbr_fd(d, 1);
	printf("\n");
	printf("\n");
	
	d = -2147;
	printf("n : %d\n", d);
	ft_putnbr_fd(d, 1);
	printf("\n");
	printf("\n");
	
	d = 2147;
	printf("n : %d\n", d);
	ft_putnbr_fd(d, 1);
	printf("\n");
	printf("\n");

	char	*content1 = ft_strdup("node1");
	char	*content2 = ft_strdup("node2");
	char	*content3 = ft_strdup("node3");
	char	*content4 = ft_strdup("node4");
	char	*content5 = ft_strdup("node5");
	char	*content6 = ft_strdup("node6");

	t_list	*node1 = ft_lstnew((void *)content1);
	printf("%s\n", node1->content);
	
	t_list	*node2 = ft_lstnew((void *)content2);
	printf("%s\n", node2->content);

	t_list	*node3 = ft_lstnew((void *)content3);
	printf("%s\n", node3->content);

	t_list	*node4 = ft_lstnew((void *)content4);
	printf("%s\n", node4->content);

	t_list	*node5 = ft_lstnew((void *)content5);
	printf("%s\n", node5->content);

	t_list	*node6 = ft_lstnew((void *)content6);
	printf("%s\n", node6->content);

	t_list	*list;
	list = node1;
	ft_lstadd_front(&list, node2);
	printf("\n\n####ft_lstadd_front####\n");
	printf("list는node2->node1인 상태입니다\n");
	listprint(list);
	
	printf("\n\n####ft_lstsize####\n");
	printf("list의 개수는 2입니다. ->%d\n", ft_lstsize(list));
	printf("단일 노드의 크기는 1입니다. ->%d\n", ft_lstsize(node5));
	
	printf("\n\n####ft_lstlast####\n");
	printf("list의 마지막 노드는 node1입니다 -> %s\n", ft_lstlast(list)->content);
	printf("단일노드의 마지막 노드는 자기자신입니다. -> %s\n", ft_lstlast(node5)->content);	
	ft_lstadd_back(&list, node3);
	printf("list에 맨 뒤에 node3를 추가했습니다\n");
	listprint(list);

	printf("\n\n####ft_lstdelone####\n");
	printf("list의 content를 삭제해봅시다\n");
	printf("list before---\n");
	listprint(list);
	ft_lstdelone(list, delcontent);
	printf("\n\nlist after----\n");
	listprint(list);

	printf("\n\n####ft_lstclear####\n");
	list = list->next;
	printf("before\n");
	listprint(list);
	ft_lstclear(&(list), delcontent);
	listprint(list);

	printf("\n\n####ft_lstiter####\n");
	content1 = ft_strdup("node1");
	content2 = ft_strdup("node2");
	content3 = ft_strdup("node3");
	content4 = ft_strdup("node4");
	content5 = ft_strdup("node5");
	content6 = ft_strdup("node6");

	node1 = ft_lstnew((void *)content1);
	node2 = ft_lstnew((void *)content2);
	node3 = ft_lstnew((void *)content3);
	node4 = ft_lstnew((void *)content4);
	node5 = ft_lstnew((void *)content5);
	node6 = ft_lstnew((void *)content6);

	list = node1;
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node4);
	ft_lstadd_back(&list, node5);
	ft_lstadd_back(&list, node6);
	printf("\n#beforeiter#\n");
	listprint(list);
	printf("\nlstiter적용\n");
	ft_lstiter(list, iterfnc);

	printf("\n\n####ft_lstmap####\n");
	t_list	*list2;
	int	*intcont1 = malloc(4);
	*intcont1 = 1;
	t_list	*intnode1 = ft_lstnew(intcont1);
	
	int	*intcont2 = malloc(4);
	*intcont2 = 2;
	t_list	*intnode2 = ft_lstnew(intcont2);
	
	int *intcont3 = malloc(4);
	*intcont3 = 3;
	t_list	*intnode3 = ft_lstnew(intcont3);

	int	*intcont4 = malloc(4);
	*intcont4 = 4;
	t_list	*intnode4 = ft_lstnew(intcont4);
	list2 = intnode1;
	ft_lstadd_back(&list2, intnode2);
	ft_lstadd_back(&list2, intnode3);
	ft_lstadd_back(&list2, intnode4);
	listintprint(list2);

	ft_lstmap(list2, mapfnc, delcontent);
	listintprint(list2);
	
	char *asdf = "asdfasdf";
	printf("%s\n", ft_strchr(asdf, 0));	
	printf("%s\n", strchr(asdf, 0));	

	char *src = "abbbbbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');
	printf("%s\n", d1);
	printf("%s\n", d2);

	src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	d1 = strrchr(src, '\0');
	d2 = ft_strrchr(src, '\0');
	printf("%s\n", d1);
	printf("%s\n", d2);

	char n[40] = "99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	printf("%d\n", i1);
	printf("%d\n", i2);

	printf("%d\n", atoi("2147483648"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", atoi("-2147483649"));
	printf("%d\n", ft_atoi("-2147483649"));

	char *str = "i just want this part #############";
	size_t size = 22;
	char *ret = ft_substr(str, 0, size);
	printf("%s\n", ret);
		
	str = "";
	size = 0;
	ret = ft_substr(str, 5, size);
	printf("%s\n", ret);

	char *s1 = "   \t\n\nHello \t  Please\n Trim me !\n ";
	char *s2 = "Hello \t  Please\n Trim me !";
	ret = ft_strtrim(s1, " \n\t");
	printf("#######\n");
	printf("\"%s\"\n", ret);
	printf("######\n");
	printf("\"%s\"\n", s2);
	printf("#####\n");

	s1 = "";
	s2 = "";
	ret = ft_strtrim(s1, " \n\t");
	printf("\"%s\"\n", ret);

	s1 = "  \t \t \n   \n\n\n\t";
	s2 = "";
	ret = ft_strtrim(s1, " \n\t");
	printf("\"%s\"\n", ret);
	return 0;
}
