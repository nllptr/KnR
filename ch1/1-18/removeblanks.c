#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */

	while ((len = getaline(line, MAXLINE)) > 0)
		if (line[0] != '\n') {
			printf(">>%s<<\n", line);
		}
	printf("\n");
	return 0;
}

/* getline: read a line into s, return length */
int getaline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
//	while (s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n') { /* used for testing */
	while (s[i-1] == ' ' || s[i-1] == '\t') {
		s[i-1] = '\0';
		--i;
	}
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
