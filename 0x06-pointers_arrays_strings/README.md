```
ONWUTA EBUBE GIDEON
```
## DESCRIPTION OF THE FILES PERTAINING TO PARTICULAR TASKS

The file 0-strcat.c is a C function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest

The file 1-strncat.c is a C function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

The file 2-strncpy.c is a C function  that copies a string.

Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy

The file 3-strcmp.c is a C function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp

