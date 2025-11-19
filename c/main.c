#include <stdio.h>

int main(void) 
{
    printf("Hello from MinGW + VS Code -1 !\n");
    return 0;
}

//calclate crc32
unsigned long crc32(const unsigned char *s, unsigned int len)
{
    unsigned long crc = 0xFFFFFFFF;
    for (unsigned int i = 0; i < len; i++) {
        crc ^= s[i];
        for (unsigned int j = 0; j < 8; j++) {
            if (crc & 1) {
                crc = (crc >> 1) ^ 0xEDB88320;
            } else {
                crc >>= 1;
            }
        }
    }
    return ~crc;
}