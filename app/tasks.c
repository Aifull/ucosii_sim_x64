#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

/* ��������ջ */
OS_STK Task1Stk[TASK_STK_SIZE];
OS_STK Task2Stk[TASK_STK_SIZE];

/**/
OS_EVENT* sim_light_sem;  // �����ź���

/* ������ */
void Task1(void* p_arg) {
    while (1) {
        printf("Task1 running\n");
		sim_light_sem = OSSemCreate(1);  // �����ź�����ʾ����
        OSTimeDly(100);  // ��ʱ100��ʱ�ӽ���
    }
}

void Task2(void* p_arg) {
    while (1) {
        printf("Task2 running\n");
        OSSemPend(sim_light_sem, 200, )
    }
}