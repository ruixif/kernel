#include "types.h"
#include "common.h"
#include "console.h"
#include "string.h"

int kern_entry()
{
	console_clear();

    console_write_color("Hello, OS kernel!\n", rc_black, rc_green);
    console_write_hex(0,rc_black,rc_green);
    console_write_color("\n", rc_black, rc_green);
    console_write_dec(133,rc_black,rc_green);
    console_write_color("\n", rc_black, rc_green);
    char *test;
    char *start = "hello";
    test = strcpy(test,start);
    test = strcat(test,start);
    console_write_color(test,rc_black,rc_green);
    console_write_dec(strlen(test), rc_black, rc_green);
    console_write_dec(strcmp(test, start), rc_black, rc_green);
    
    
    
//	uint8_t *input = (uint8_t *)0xB8000;
//	uint8_t color = (0 << 4) | (15 & 0x0F);
	
//	*(input++) = 'H'; *(input++) = color;
//	*input++ = 'i'; *input++ = color;
//	*input++ = ','; *input++ = color;
//	*input++ = 'Q'; *input++ = color;
	return 0;
}
