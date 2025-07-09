#include <ucos_ii.h>
#include <app_cfg.h>
#include <stdio.h>

OS_EVENT* ResourceMutex;  // ������Դ�����ź���

/* ��������ջ */
OS_STK Task10Stk[TASK_STK_SIZE];
OS_STK Task15Stk[TASK_STK_SIZE];
OS_STK Task20Stk[TASK_STK_SIZE];

/* ������ */
void Task10(void* p_arg) {
	INT8U err;
	OSTimeDly(2000);  // ��ʱ100��ʱ�ӽ���
	while (1) {
		OSMutexPend(ResourceMutex, 0, &err);  // ������Դ�����ź���
		printf("Task 10 is running,prio:%d\n", OSTCBCur->OSTCBY * 8 + OSTCBCur->OSTCBX);  // ��ӡ������Ϣ
		OSTimeDly(500);  // ��ʱ500��ʱ�ӽ���
		OSMutexPost(ResourceMutex);  // �ͷ���Դ�����ź���
	}
}

void Task15(void* p_arg) {
	INT8U err;
	OSTimeDly(2000); // ��ʱ100��ʱ�ӽ���
	while (1) {
		OSMutexPend(ResourceMutex, 0, &err);  // ������Դ�����ź���
		printf("Task 15 is running,prio:%d\n", OSTCBCur->OSTCBY * 8 + OSTCBCur->OSTCBX);  // ��ӡ������Ϣ
		OSTimeDly(500);  // ��ʱ500��ʱ�ӽ���
		OSMutexPost(ResourceMutex);  // �ͷ���Դ�����ź���
	}
}

void Task20(void* p_arg) {
	INT8U err;

	while (1) {
		OSMutexPend(ResourceMutex, 0, &err);  // ������Դ�����ź���
		printf("Task 20 is running,prio:%d\n",OSTCBCur->OSTCBY*8+OSTCBCur->OSTCBX);  // ��ӡ������Ϣ
		OSMutexPost(ResourceMutex);  // �ͷ���Դ�����ź���
	}
}