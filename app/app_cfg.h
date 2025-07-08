#ifndef APP_CFG
#define APP_CFG

#include <ucos_ii.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define TASK_STK_SIZE 1024
	extern OS_STK Task1Stk[];
	extern OS_STK Task2Stk[];

	void Task1(void* p_arg);
	void Task2(void* p_arg);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !APP_CFG
