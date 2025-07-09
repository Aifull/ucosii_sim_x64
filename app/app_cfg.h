#ifndef APP_CFG
#define APP_CFG

#include <ucos_ii.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define TASK_STK_SIZE 1024

	extern OS_STK Task10Stk[];
	extern OS_STK Task15Stk[];
	extern OS_STK Task20Stk[];

	extern void Task10(void* p_arg);
	extern void Task15(void* p_arg);
	extern void Task20(void* p_arg);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !APP_CFG
