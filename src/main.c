#include <math.h>
#include <time.h>
#include <errno.h>
#include <stdio.h>
#include <assert.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/utsname.h>

#include "json.h"

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;


int
main (int argc, char *argv[])
{
	printf ("Testing!\n");
	setAction("SetVar", 6);
	setMib("DeviceControl", 13);
	setVar("Mode", 4);
	printf("Action: %s.\n"
			"Mib: %s.\n"
			"Var: %s.\n", 
			getAction(),
			getMib(),
			getVar()
			);
	return 0;
}
