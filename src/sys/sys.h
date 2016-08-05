#ifndef SYS_H
#define SYS_H

/* 
	Attempting to call k versions of functions from usermode will
	Generate a MPU fault, and cause the offending task to terminate 
*/

int create_task(int priority, void (*code) ()) __svc_indirect(0);

int k_create_task(int priority, void (*code) ());

#endif
