#include <stdio.h>
#define MAXLINE 1000
#define TABSIZE 8

int getaline(char line[], int maxline);
void detab(char line[], int length, int tabsize);

/* print longest input line */
main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */

	while ((len = getaline(line, MAXLINE)) > 0) {
		detab(line, len, TABSIZE);
		printf("%s", line);
	}
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

void detab(char line[], int length, int tabsize)
{
	int i, j, k;
	char tmp[MAXLINE];
	for (k=0; k<MAXLINE; ++k) tmp[k] = 0;

	k = 0;
	for (i=0; i < length; ++i) {
		if (line[i] == '\t') {
			for(j=0; j < tabsize; ++j) {	/* start inserting spaces */
				tmp[k++] = ' ';				/* for testing, use visible character, eg '*' */
				if (k % tabsize == 0) break;/* if you are at a tab stop, break */
			}
		} else tmp[k++] = line[i];
	}
	
	k = 0;									/* copy tmp to line */
	while (k < MAXLINE && (line[k] = tmp[k]) != '\0') ++k;
	if (k == MAXLINE) line[k-1] = '\0';
}
