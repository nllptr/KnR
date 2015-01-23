#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);
void copy(char to[], char from[], int maxline);

/* print longest input line */
main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */

	while ((len = getaline(line, MAXLINE)) > 0)
		if (len > 80)
			printf("%s", line);

	printf("\n");
	return 0;
}

/* getline: read a line into s, return length */
int getaline(char s[], int lim)
{
	int c, i;

	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
