#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

int main() {
    OSInit();  // ��ʼ����C/OS-II

    /* �������� */
    OSTaskCreate(Task1, NULL, &Task1Stk[TASK_STK_SIZE - 1], 1);
    OSTaskCreate(Task2, NULL, &Task2Stk[TASK_STK_SIZE - 1], 2);

    OSStart();  // ������������ʵ����Windows�߳�ģ�⣩
    return 0;
}