#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>


extern OS_EVENT* ResourceMutex;  // 定义资源互斥信号量

void main(void) 
{
    INT8U err;

    OSInit();  // 初始化μC/OS-II


    ResourceMutex = OSMutexCreate(9,&err);  // 创建资源互斥信号量
    /* 创建任务 */
    OSTaskCreate(Task10, NULL, &Task10Stk[TASK_STK_SIZE - 1], 10);
    OSTaskCreate(Task15, NULL, &Task15Stk[TASK_STK_SIZE - 1], 15);
    OSTaskCreate(Task20, NULL, &Task20Stk[TASK_STK_SIZE - 1], 20);

    OSStart();  // 启动调度器（实际由Windows线程模拟）
}