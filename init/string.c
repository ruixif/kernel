#include "string.h"

inline void memcpy(uint8_t *dest, const uint8_t *src, uint32_t len)
{
	for (; len != 0; len--)
		*dest++ = *src++;
}

inline void memset(void *dest, uint8_t val, uint32_t len)
{
	uint8_t *dst = (uint8_t*) dest;
	for (; len != 0; len--)
		*dst++ =val;
}

inline void bzero(void *dest, uint32_t len)
{
	memset(dest, 0, len);
}

int strcmp(const char *str1, const char *str2)
{
	while(*str1 && (*str1 == *str2))
		str1++,str2++;
	
	return *(const unsigned char*)str1-*(const unsigned char*)str2;
}


char *strcpy(char *dest, const char *src)
{
	int i=0;
	while (src[i] != '\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char *strcat(char *dest, const char *src)
{
	char *dest_init; 
	dest_init= dest;
	int i = 0;
	while(dest[i] != '\0')
		i++;
	
	int j = 0;
	while(src[j] != '\0')
	{
		dest[i+j] = src[j];
		j++;
	}
    
    dest[i+j] = '\0';
    return dest_init;
}

int strlen(const char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	return i;
}
