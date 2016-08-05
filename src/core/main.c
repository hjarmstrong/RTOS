#include <lpc17xx.h>
#include <snprintf.h>
#include <stdint.h>

extern uint32_t heap_base_addr;
extern unsigned int Image$$RW_IRAM1$$ZI$$Limit; 

char japan[] = "RW crap";

void test_proc1(void);

int main(void)
{
	SystemInit();
	
	// Set inteript priorities
	// With SVC call at the botem.
	
	// Linker Test code below here...
	char buf[15];

	snprintf(buf, sizeof(buf), "%p", &heap_base_addr);
	japan[3] = '7';
	
	// This is just here to make sure proc 1 gets linked in
	test_proc1();
		
	while (1)
	{
		// Do nothing!
	}
}
