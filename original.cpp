#include <stdio.h>
#include <string.h>

FILE *fdin;
char *p;
char s_line[120];

int main()
{
	if ((fdin=fopen("raw18.txt","r"))==NULL)
		return 1;
	while (fgets(s_line,sizeof s_line,fdin))
	{
		p=&s_line[strlen(s_line)-1];
		if (*p<' ')
			*p='\0';
		printf("%s\n", s_line);
	}

	printf("\n\n");

	return 0;
}
