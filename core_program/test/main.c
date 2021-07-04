#include "libft.h"
#include "../ft_memset.c"
#include "../ft_memcpy.c"
#include "../ft_memccpy.c"
#include "../ft_memmove.c"
#include "../ft_bzero.c"
#include <stdio.h>


int main(void)
{
	/*
	***ft_memset***
	*/
	/* char	str[20] = "Hello World!";
	char	strt[20] = "Hello World!";
	int		arr[10] = {1,2,3,4,5,24,20,2333,4,56};
	int		arrt[10] = {1,2,3,4,5,24,20,2333,4,56};

	memset(strt, '$', 5);
	ft_memset(str, '$', 5);
	printf("Default: %s\nYours: %s\n", strt, str);
	printf("Res: %s\n", strcmp(str, strt) == 0 ? "OK" : "KO");
	printf("\n");
	memset(arrt, 10, 10);
	ft_memset(arr, 10, 10);
	printf("Default: ");
	for (int i = 0; i < 10; i++)
		printf("%d,", arrt[i]);
	printf("\n");
	printf("Yours: ");
	for (int i = 0; i < 10; i++)
		printf("%d,", arr[i]);
	printf("\n");
	printf("Res: %s\n", memcmp(arr,arrt, sizeof(arr)) == 0 ? "OK" : "KO");
	printf("\n"); */
	/*******************************************/

	/*
	***ft_memcpy***
	*/
	char 	str[] = "Hello World";
	char 	str2[20] = "World Hello";
	char 	str2t[20] = "World Hello";
	int		num[10] = {1,2,3,1,2,23,9,44,555,123};
	int		num2[10] = {0};
	int		num2t[10] = {0};

	memcpy(str2t, str, 20);
	ft_memcpy(str2, str, 20);
	printf("Default: %s\nYours: %s\n", str2t, str2);
	printf("Res: %s\n", strcmp(str2, str2t) == 0 ? "OK" : "KO");
	printf("\n");

	memcpy(num2t, num, sizeof(num));
	ft_memcpy(num2, num, sizeof(num));
	printf("Default: ");
	for (int i = 0; i < 10; i++)
		printf("%d, ", num2t[i]);
	printf("\nYours: ");
	for (int i = 0; i < 10; i++)
		printf("%d, ", num2[i]);
	printf("\nRes: %s\n", memcmp(num2,num2t, sizeof(num)) == 0 ? "OK" : "KO");

	/*******************************************/
	/* bzero */
	/* char	str[20] = "Hello world";
	char	strt[20] = "Hello world";
	int		arr[10] = {1,2,3,4,5,24,20,2333,4,56};
	int		arrt[10] = {1,2,3,4,5,24,20,2333,4,56};

	bzero(strt, 12);
	ft_bzero(str, 12);
	printf("Default: %s\nYours: %s\n", strt, str);
	printf("Res: %s\n", strcmp(str, strt) == 0 ? "OK" : "KO");
	printf("\n");

	bzero(arrt, 12);
	ft_bzero(arr, 12);
	printf("Default: ");
	for (int i = 0; i < 10; i++)
		printf("%d,", arrt[i]);
	printf("\n");
	printf("Yours: ");
	for (int i = 0; i < 10; i++)
		printf("%d,", arr[i]);
	printf("\n");
	printf("Res: %s\n", memcmp(arr,arrt, sizeof(arr)) == 0 ? "OK" : "KO");
	printf("\n"); */

	/*******************************************/
	/* ft_memccpy */
	/* char a[] = "hello world";
	char b[] = "HELLO WORLD";
	char at[] = "hello world";
	char bt[] = "HELLO WORLD";
	memccpy(at, bt, 'O', sizeof(bt));
	ft_memccpy(a, b, 'O', sizeof(bt));
	printf("Default: %s\nYours: %s\n", at, a);
	printf("Res: %s\n", memcmp(a,at, sizeof(a)) == 0 ? "OK" : "KO");
	printf("\n");
	int  c[10] = {1,2,3,4,5,24,20,2333,4,56};
	int  d[10] = {3,1,5,99,69,96,100,3,14,506};
	int  ct[10] = {1,2,3,4,5,24,20,2333,4,56};
	int  dt[10] = {3,1,5,99,69,96,100,3,14,506};
	memccpy(ct, dt, 69, sizeof(int) * 6);
	ft_memccpy(c, d, 69, sizeof(int) * 6);
	printf("Default: ");
	for(int i = 0; i < 10; i++)
		printf("%d,", ct[i]);
	printf("\nYours: ");
	for(int i = 0; i < 10; i++)
	printf("%d,", c[i]);
	printf("\nRes: %s\n", memcmp(c,ct, sizeof(c)) == 0 ? "OK" : "KO");
	printf("\n"); */

	/*******************************************/
	/* ft_memmove */
/* 	char a[] = "hello world";
	char b[] = "HELLO WORLD";
	char at[] = "hello world";
	char bt[] = "HELLO WORLD";
	memmove(at, bt,sizeof(bt));
	ft_memmove(a, b,sizeof(bt));
	printf("Default: %s\nYours: %s\n", at, a);
	printf("Res: %s\n", memcmp(a,at, sizeof(a)) == 0 ? "OK" : "KO");
	printf("\n");
	int  c[10] = {1,2,3,4,5,24,20,2333,4,56};
	int  d[10] = {3,1,5,99,69,96,100,3,14,506};
	int  ct[10] = {1,2,3,4,5,24,20,2333,4,56};
	int  dt[10] = {3,1,5,99,69,96,100,3,14,506};
	memmove(ct, dt,sizeof(int) * 6);
	ft_memmove(c, d,sizeof(int) * 6);
	printf("Default: ");
	for(int i = 0; i < 10; i++)
		printf("%d,", ct[i]);
	printf("\nYours: ");
	for(int i = 0; i < 10; i++)
	printf("%d,", c[i]);
	printf("\nRes: %s\n", memcmp(c,ct, sizeof(c)) == 0 ? "OK" : "KO");
	printf("\n"); */
}
