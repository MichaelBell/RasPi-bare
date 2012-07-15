#define GPFSEL1 0x20200004
#define GPSET0  0x2020001C
#define GPCLR0  0x20200028

typedef unsigned int UINT32;
typedef int INT32;
typedef unsigned short UINT16;
typedef short INT16;
typedef unsigned char UINT8;
typedef char INT8;

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
