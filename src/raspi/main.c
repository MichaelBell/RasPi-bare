#include "raspi.h"

__attribute__((no_instrument_function))  void not_main(void)
{
   UINT32 sel = GET32(GPFSEL1);
   sel &= ~(0b111 << 18);
   sel |= (0b001 << 18);
   PUT32(GPFSEL1,sel);
  
   while(1) 
   {
      PUT32(GPCLR0, 1<<16);
      for (int i = 0; i < 0x100000; i++) ;
      PUT32(GPSET0, 1<<16);
      for (int i = 0; i < 0x100000; i++) ;
   }
} 
