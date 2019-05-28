/*写一个函数用指针型字符串实现两个字符串比较，int mystrcmp(const char* str1,const char* str2),
如果大于返回1，等于返回0，小于返回-1，测试之。*/
#include <stdio.h>
#include <string.h>
int mystrcmp(const char* str1, const char* str2);
int main()
{
	char str1[20], str2[20];
	printf("please enter str1:");
	gets(str1);
	printf("please enter str2:");
	gets(str2);
	printf("result:%d", mystrcmp(str1, str2));
}
int mystrcmp(const char* str1, const char* str2)
{
	for (;*str1 != 0 || *str2 != 0; str1++, str2++)
	{
		if (*str1 > * str2)
			return 1;
		if (*str1 == *str2)
			return 0;
		else
			return -1;
	}
}