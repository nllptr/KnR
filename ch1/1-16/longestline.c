#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);
void copy(char to[], char from[], int maxline);

/* print longest input line */
main()
{
	int len;				/* current line length */
	int max;				/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = getaline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line, MAXLINE);
		}
	if (max > 0)			/* there was a line */
		printf("%s\n", longest);
	printf("%d\n", max);
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[], int maxline)
{
	int i;

	i = 0;
	while (i < maxline && (to[i] = from[i]) != '\0')
		++i;
	if (i == maxline)
		to[i-1] = '\0';
}
