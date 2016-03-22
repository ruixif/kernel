#include "debug.h"
#include "types.h"
#include "string.h"
#include "console.h"
#include "common.h"


void printk(const char *format, ...)
{
	va_list arg;
	int done;
	
	va_start(arg, format);
    vfprintk(buf, format, arg);
	va_end(arg);
	
}

void vfprintk(char *buf, const char *format, va_list args)
{
	
}
