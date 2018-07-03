#ifndef __STRUCT_H_
#define __STRUCT_H_

typedef struct {
	char action[8];
	char mib[13];
	char var[11];
} JsCMDp;

typedef struct {
	char ipv4[16];
	char ipv6[64];
	char token[16];
	JsCMDp pjson;
	char id[64];
	char pw[64];
	char devid[16];
	char value[64];
	char scene[64];
} JsCMDa;

void setAction(char *, int);
void setMib(char *, int);
void setVar(char *, int);

char *getAction(void);
char *getMib(void);
char *getVar(void);
#endif
