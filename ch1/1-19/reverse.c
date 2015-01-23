#include <stdio.h>
#define MAXLINE 1000

int getaline(char line[], int maxline);
void reverse(char line[], int length);

/* print longest input line */
main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */

	while ((len = getaline(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s", line);
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

	return i;
}

void reverse(char line[], int length)
{
	int i, last = length - 1;

	if(line[length-1] == '\n') last = length - 2;

	for (i=0; i <= last/2; ++i) {
		char tmp = line[i];
		line[i] = line[last-i];
		line[last-i] = tmp;
	}
}
