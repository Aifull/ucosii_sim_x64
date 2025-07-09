#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>


extern OS_EVENT* ResourceMutex;  // ������Դ�����ź���

void main(void) 
{
    INT8U err;

    OSInit();  // ��ʼ����C/OS-II


    ResourceMutex = OSMutexCreate(9,&err);  // ������Դ�����ź���
    /* �������� */
    OSTaskCreate(Task10, NULL, &Task10Stk[TASK_STK_SIZE - 1], 10);
    OSTaskCreate(Task15, NULL, &Task15Stk[TASK_STK_SIZE - 1], 15);
    OSTaskCreate(Task20, NULL, &Task20Stk[TASK_STK_SIZE - 1], 20);

    OSStart();  // ������������ʵ����Windows�߳�ģ�⣩
}