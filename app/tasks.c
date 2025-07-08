#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

/* ��������ջ */
OS_STK Task1Stk[TASK_STK_SIZE];
OS_STK Task2Stk[TASK_STK_SIZE];

/* ������ */
void Task1(void* p_arg) {
    while (1) {
        printf("Task1 running\n");
        OSTimeDly(100);  // ��ʱ100��ʱ�ӽ���
    }
}

void Task2(void* p_arg) {
    while (1) {
        printf("Task2 running\n");
        OSTimeDly(200);
    }
}