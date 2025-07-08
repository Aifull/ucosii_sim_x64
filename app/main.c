#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

int main() {
    OSInit();  // 初始化μC/OS-II

    /* 创建任务 */
    OSTaskCreate(Task1, NULL, &Task1Stk[TASK_STK_SIZE - 1], 1);
    OSTaskCreate(Task2, NULL, &Task2Stk[TASK_STK_SIZE - 1], 2);

    OSStart();  // 启动调度器（实际由Windows线程模拟）
    return 0;
}