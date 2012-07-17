#ifndef raspi_h
#define raspi_h

#define GPFSEL1 0x20200004
#define GPSET0  0x2020001C
#define GPCLR0  0x20200028

typedef void				VOID;
typedef void *				APTR;

typedef signed char			INT8;
typedef signed short		INT16;
typedef signed int			INT32;
typedef signed long long int	INT64;

typedef unsigned char		UINT8;
typedef unsigned short		UINT16;
typedef unsigned int		UINT32;
typedef unsigned long long int	UINT64;

typedef float				FLOAT;
typedef	double				DOUBLE;

typedef volatile signed char			VINT8;
typedef volatile signed short int		VINT16;
typedef volatile signed int				VINT32;
typedef volatile signed long long int	VINT64;

typedef volatile unsigned char			VUINT8;
typedef volatile unsigned short int		VUINT16;
typedef volatile unsigned int			VUINT32;
typedef volatile unsigned long long int	VUINT64;

typedef UINT32				UINTPTR;

typedef unsigned int		IPTR;
typedef unsigned char*		STRPTR;
typedef unsigned int		BOOL;

#define NULL				0
#define TRUE				1
#define FALSE				0

#define ABS(a)				((a)>0?(a):-(a))
#define MIN(a,b)			((a)<(b)?(a):(b))
#define MAX(a,b)			((a)>(b)?(a):(b))
#define CLAMP(min,x,max)	((x)>(max)?(max):((x)<(min)?(min):(x)))

#define SET_BITS(data, mask)	((data)|=(mask))
#define CLEAR_BITS(data, mask)	((data)&=(~(mask)))
#define CHANGE_BITS(data, mask)	((data)^=(mask))
#define TEST_BITS(data, mask)	(((data)&(mask)) != 0)
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

#define READ32(addr) (*(VUINT32*)(addr))
#define READ16(addr) (*(VUINT16*)(addr))
#define READ8(addr) (*(VUINT8*)(addr))

#define WRITE32(addr,value) (*(VUINT32*)(addr) = (VUINT32)(value))
#define WRITE16(addr,value) (*(VUINT16*)(addr) = (VUINT16)(value))
#define WRITE8(addr,value) (*(VUINT8*)(addr) = (VUINT8)(value))

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );

#endif
