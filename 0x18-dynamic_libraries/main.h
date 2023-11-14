#ifndef _MAIN_H_
#define _MAIN_H_

int wputchar(char ch);
int wislower(int ch);
int wisalpha(int ch);
int wabs(int nm);
int wisupper(int ch);
int wisdigit(int ch);
int wstrlen(char *es);
void wputs(char *es);
char *wstrcpy(char *dst, char *sr);
int watoi(char *es);
char *wstrcat(char *dst, char *sr);
char *wstrncat(char *dst, char *sr, int nm);
char *wstrncpy(char *dst, char *sr, int nm);
int wstrcmp(char *es1, char *es2);
char *wmemset(char *es, char bi, unsigned int nm);
char *wmemcpy(char *dst, char *sr, unsigned int nm);
char *wstrchr(char *es, char ch);
unsigned int _strspn(char *es, char *acpt);
char *wstrpbrk(char *es, char *acpt);
char *wstrstr(char *hystc, char *ndl);

#endif
