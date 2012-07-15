ENTRY(asm_start)

MEMORY
{
   ram : ORIGIN = 0x8000, LENGTH = 0x10000000
}

SECTIONS
{
   .text : {
      *(.text)
   } > ram
   
   .data : { *(.data) } > ram
   __bss_start__ = .;
   .bss : { *(.bss) } > ram
   __bss_end__ = .;   
}
