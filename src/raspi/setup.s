.text

.global asm_start
.global exc_stack
.global supervisor_sp

asm_start:

   # initialize Stack pointer for exception modes
   mrs r4, cpsr
   bic r4, r4, #0x1f

   #FIQ Mode
   orr r3, r4, #0x11
   msr cpsr_c, r3
   ldr sp, =exc_stack

   #IRQ Mode
   orr r3, r4, #0x12
   msr cpsr_c, r3
   ldr sp, =exc_stack

   #ABORT Mode
   orr r3, r4, #0x17
   msr cpsr_c, r3
   ldr sp, =exc_stack

   #UNDEFINED Mode
   orr r3, r4, #0x1b
   msr cpsr_c, r3
   ldr sp, =exc_stack

   # switch to supervisor mode
   orr r3, r4, #0x13
   msr cpsr_c, r3
   
   ldr sp, =temp_stack
   
   #
   # Create the first stack frame.
   #
   mov fp, #0
   mov ip, sp
   push {fp, ip, lr, pc}
   sub fp, ip, #4

   bl not_main
hang: b hang

.globl dummy
dummy:
    bx lr

   
   .space 0x100
temp_stack:

   .space 1024
exc_stack:

supervisor_sp:
   .space 4
