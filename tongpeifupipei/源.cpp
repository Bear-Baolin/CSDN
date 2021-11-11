#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
static bool isMatch(char* s, char* p)
{
	char* last_s = NULL;
	char* last_p = NULL;
	while (*s != '\0')
	{
		if (*++p == '\0')
		{
			{
				return true;
			}
			last_s = s;
			last_p = p;
		}
		else if (*p == '?' || *s == *p)
		{
			s++;
			p++;
		}
		else if (last_s != NULL)
		{
			p = last_p;
			s = ++last_s;
		}
		else
		{
			return false;
		}
	}
		while (*p == '*')
		{
			p++;
		}
		return *p == '\0';
	}
int main(int argc, char** argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage:./test string pattern\n");
		exit(-1);
	}
	printf("%s\n", isMatch(argv[1], argv[2]) ? "true" : "false");
	return 0;
}