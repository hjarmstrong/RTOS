#include<sys.h>

volatile int glob = 7;

volatile char buffer[5];

volatile int yahoo;

void test_proc1(void)
{
	char buf[15];
	int japan;
	while(1)
	{
		create_task(8, test_proc1);
		glob = japan++;
		if(yahoo == 0)
		yahoo = 28998;
		break;
	}
	snprintf(buf, sizeof(buf), "%p", &yahoo);
	
	buffer[4]  = 'g';
}
