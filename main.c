#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main()
{
	char src[10] = "1234567860";
	char ch[15] = "Hello World";
	printf("%s\n", ch);
	ft_memset(ch, '+', 6);	
	printf("ft_memset: %s\n", ch);
	//-------------------------------------------------
	ft_bzero(ch, 6);
	printf("ft_bzero: %c\n", ch[5]);
	printf("ft_bzero: %c\n", ch[6]);
	printf("ft_bzero: %c\n----------------------\n", ch[7]);
//--------------------------------------------------
	char ch1[15] = "Hello World";
	char ch2[15] = "";
	ft_memcpy(ch1, &ch1[3], 5);
	printf("memcpy src: %s\n", ch1);
	printf("memcpy dst: %s\n----------------------\n", ch2);
//-----------------------------------------------
	char memccpySrc[15] = "123456789";
	char memccpyDst[15] = "";
	ft_memccpy(memccpyDst, memccpySrc, '5', 4);
	printf("memccpy src: %s\n", memccpySrc);
	printf("memccpy dst: %s\n----------------------\n", memccpyDst);
//======================================================
	char memMove[15] = "0123456789";
	printf("memmov src: %s\n", memMove);
	ft_memmove(&memMove[3], &memMove[1], 4);
	printf("memmove dest: %s\n", memMove);
//=======================================================
	char memChr[15] = "0123456789";
	char *sym;
	printf("memchr: %s\n", memChr);
	sym = ft_memchr (memChr, '5', 10);
	if (sym != NULL)
		sym[0] = '!';
	
	printf("memchr: %s\n------------------------------\n", memChr);
//=======================================================
	char str1[15];
   	char str2[15];
   	int ret;

   	memcpy(str1, "AbDDEF", 6);
   	memcpy(str2, "ABDDEF", 6);

   	ret = ft_memcmp(str1, str2, 5);

   	if(ret > 0) {
      		printf("str2 is less than str1\n");
   	} else if(ret < 0) {
      		printf("str1 is less than str2\n");
   	} else {
      		printf("str1 is equal to str2 \n");
   	}

	printf("\n------------------------------\n");

//=============================================================
	printf("strlen: %lu \n ----------------------\n", ft_strlen(memChr));
//=============================================================
	char *strchrRes;
	strchrRes = ft_strchr(src, '5');
	printf("Strchr:  %s \n--------------------------\n", strchrRes);
//=============================================================
	char *strrchrRes;	
	strrchrRes = ft_strrchr(src, '+');
	printf("Strrchr:  %s \n--------------------------\n", src);
	printf("Strrchr:  %s \n--------------------------\n", strrchrRes);	
//=======ret = ft_memcmp(str1, str2, 5);

   	ret = ft_strncmp(str1, str2, 7);
   	if(ret > 0) {
      		printf("str2 is less than str1\n");
   	} else if(ret < 0) {
      		printf("str1 is less than str2\n");
   	} else {
      		printf("str1 is equal to str2 \n");
   	}
///======================================================
      	printf("str1 is equal to str2 \n %c \n--------------------------------\n", ft_tolower('+'));
///======================================================
	return (0);
}
