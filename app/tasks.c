#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

OS_EVENT* ResourceMutex;  // 定义资源互斥信号量

/* 定义任务栈 */
OS_STK Task10Stk[TASK_STK_SIZE];
OS_STK Task15Stk[TASK_STK_SIZE];
OS_STK Task20Stk[TASK_STK_SIZE];

/* 任务函数 */
void Task10(void* p_arg) {
	INT8U err;
	OSTimeDly(2000);  // 延时100个时钟节拍
	while (1) {
		OSMutexPend(ResourceMutex, 0, &err);  // 请求资源互斥信号量
		printf("Task 10 is running,prio:%d\n", OSTCBCur->OSTCBY * 8 + OSTCBCur->OSTCBX);  // 打印任务信息
		OSTimeDly(500);  // 延时500个时钟节拍
		OSMutexPost(ResourceMutex);  // 释放资源互斥信号量
	}
}

void Task15(void* p_arg) {
	INT8U err;
	OSTimeDly(2000); // 延时100个时钟节拍
	while (1) {
		OSMutexPend(ResourceMutex, 0, &err);  // 请求资源互斥信号量
		printf("Task 15 is running,prio:%d\n", OSTCBCur->OSTCBY * 8 + OSTCBCur->OSTCBX);  // 打印任务信息
		OSTimeDly(500);  // 延时500个时钟节拍
		OSMutexPost(ResourceMutex);  // 释放资源互斥信号量
	}
}

void Task20(void* p_arg) {
	INT8U err;

	while (1) {
		OSMutexPend(ResourceMutex, 0, &err);  // 请求资源互斥信号量
		printf("Task 20 is running,prio:%d\n",OSTCBCur->OSTCBY*8+OSTCBCur->OSTCBX);  // 打印任务信息
		OSMutexPost(ResourceMutex);  // 释放资源互斥信号量
	}
}