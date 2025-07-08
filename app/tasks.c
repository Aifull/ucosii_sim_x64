#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

/* 定义任务栈 */
OS_STK Task1Stk[TASK_STK_SIZE];
OS_STK Task2Stk[TASK_STK_SIZE];

/* 任务函数 */
void Task1(void* p_arg) {
    while (1) {
        printf("Task1 running\n");
        OSTimeDly(100);  // 延时100个时钟节拍
    }
}

void Task2(void* p_arg) {
    while (1) {
        printf("Task2 running\n");
        OSTimeDly(200);
    }
}