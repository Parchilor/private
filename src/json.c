#include "json.h"
#include <string.h>

JsCMDp cmd;

void setAction(char *act, int n)
{
	strncpy(cmd.action, act, n);
}

void setMib(char *m, int n)
{
	strncpy(cmd.mib, m, n);
}

void setVar(char *v, int n)
{
	strncpy(cmd.var, v, n);
}

char *getAction(void)
{
	return cmd.action;
}

char *getMib(void)
{
	return cmd.mib;
}

char *getVar(void)
{
	return cmd.var;
}
