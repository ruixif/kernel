#include "types.h"

int kern_entry()
{
	uint8_t *input = (uint8_t *)0xB8000;
	uint8_t color = (0 << 4) | (15 & 0x0F);
	
	*(input++) = 'H'; *(input++) = color;
//	*input++ = 'i'; *input++ = color;
//	*input++ = ','; *input++ = color;
//	*input++ = 'Q'; *input++ = color;
	return 0;
}
