; !!! This file is always linked at the end of RAM !!!

; The kernel keeps its global variables at the begining of RAM
; (And usermode global variables, if not using memory protection)
; and we build the heap on the end, but the bootloader stack,
; this inital stack, is not used after boot time, so we want to
; clean it up by making it the first element in the heap
; So, we kmalloc 0x200 bytes at boot time, and then when we are 
; done, we free it, this way we can reuse this memory after the 
; kernel starts using individual tasks's kernel stacks

Stack_Size      EQU     0x00000200

				AREA    INITIALSTACK, NOINIT, READWRITE, ALIGN=3
heap_base_addr
Stack_Mem       SPACE   Stack_Size
__initial_sp

	EXPORT __initial_sp
	EXPORT heap_base_addr

                ALIGN


                END