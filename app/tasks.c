#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

/* 定义任务栈 */
OS_STK Task1Stk[TASK_STK_SIZE];
OS_STK Task2Stk[TASK_STK_SIZE];

/**/
OS_EVENT* sim_light_sem;  // 定义信号量

/* 任务函数 */
void Task1(void* p_arg) {
    while (1) {
        printf("Task1 running\n");
		sim_light_sem = OSSemCreate(1);  // 创建信号量（示例）
        OSTimeDly(100);  // 延时100个时钟节拍
    }
}

void Task2(void* p_arg) {
    while (1) {
        printf("Task2 running\n");
        OSSemPend(sim_light_sem, 200, )
    }
}