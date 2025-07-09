#ifndef OS_CFG_H
#define OS_CFG_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


	/* ---------------------- ������� ---------------------- */
#define OS_MAX_TASKS            62    // ���������
#define OS_LOWEST_PRIO          63    // ������ȼ�
#define OS_TASK_IDLE_STK_SIZE   128   // ��������ջ��С
#define OS_TASK_STAT_EN         1     // ����ͳ������
#define OS_TASK_STAT_STK_SIZE   128   // ͳ������ջ��С

/* ---------------------- �¼����� ---------------------- */
#define OS_MAX_EVENTS           20    // ����¼���
#define OS_SEM_EN               1     // �����ź���
#define OS_MBOX_EN              1     // ������Ϣ����
#define OS_Q_EN                 1     // ������Ϣ����
#define OS_FLAG_EN              1     // �����¼���־��
#define OS_EVENT_NAME_EN		1     // �����¼���־����������

/* ---------------------- �ڴ���� ---------------------- */
#define OS_MEM_EN               1     // �����ڴ��������
#define OS_MAX_MEM_PART         5     // ����ڴ������

/* ---------------------- ϵͳ���� ---------------------- */
#define OS_TICKS_PER_SEC        1000  // ʱ�ӽ���Ƶ�ʣ�Hz��
#define OS_ARG_CHK_EN           1     // ���ò������
#define OS_CPU_HOOKS_EN         1     // ���ù��Ӻ���
#define OS_APP_HOOKS_EN			0u   // ����Ӧ�ó�����Ĺ��Ӻ���
#define OS_DEBUG_EN             1     // ���õ������

/* ---------------------- ��ѡ���� ---------------------- */
#define OS_TASK_CREATE_EXT_EN   1     // ������չ���񴴽������迪����
#define OS_SCHED_LOCK_EN        1     // �������������
#define OS_TIME_GET_SET_EN      1     // �����ȡ/����ϵͳʱ��

#define CPU_CFG_CRITICAL_METHOD  3     // ʹ��Windows�ٽ���������x64��
#define OS_TASK_NAME_EN 	   1     // ������������
/*-----------------------�¼�-----------------------------*/
#define OS_MAX_FLAGS           10u   // ������������¼���־���������ɸ�����Ҫ���ã�

#define OS_FLAGS_NBITS         32u   // ÿ���¼���־��ռλ����ֻ���� 8u��16u �� 32u��

#define OS_FLAG_WAIT_CLR_EN    1u    // ���õȴ������־���ܣ�OSFlagPend() �Ŀ�ѡģʽ��
#define OS_FLAG_ACCEPT_EN      1u    // ���� OSFlagAccept() ����
#define OS_FLAG_DEL_EN         1u    // ���� OSFlagDel() ����
#define OS_FLAG_NAME_EN        1u    // �����¼���־����������
#define OS_FLAG_QUERY_EN       1u    // ���� OSFlagQuery() ����

/*------------------------MESSAGE MAILBOXES---------------------------------*/
#define OS_MBOX_ACCEPT_EN        1u   // ���� OSMboxAccept()��������������Ϣ
#define OS_MBOX_DEL_EN           1u   // ���� OSMboxDel()��ɾ���������
#define OS_MBOX_PEND_ABORT_EN    1u   // ���� OSMboxPendAbort()����ֹ��������
#define OS_MBOX_POST_EN          1u   // ���� OSMboxPost()������������Ϣ
#define OS_MBOX_POST_OPT_EN      1u   // ���� OSMboxPostOpt()����ѡ��ķ��ͣ�ǰ/��
#define OS_MBOX_QUERY_EN         1u   // ���� OSMboxQuery()����ѯ����״̬

#define OS_MEM_NAME_EN 1u    // �����ڴ������������
#define OS_MEM_QUERY_EN 1u   // ���� OSMemQuery() ����


#define OS_MUTEX_EN             1u   // ���û����ź�������

#define OS_MUTEX_ACCEPT_EN      1u   // ���� OSMutexAccept()����������ȡ������
#define OS_MUTEX_DEL_EN         1u   // ���� OSMutexDel()��ɾ��������
#define OS_MUTEX_QUERY_EN       1u   // ���� OSMutexQuery()����ѯ������״̬


#define OS_MAX_QS                10u   // �����Ϣ������������������������ 65500

#define OS_Q_ACCEPT_EN           1u    // ���� OSQAccept()������������
#define OS_Q_DEL_EN              1u    // ���� OSQDel()��ɾ������
#define OS_Q_FLUSH_EN            1u    // ���� OSQFlush()����ն���
#define OS_Q_PEND_ABORT_EN       1u    // ���� OSQPendAbort()����ֹ�ȴ�
#define OS_Q_POST_EN             1u    // ���� OSQPost()������з���
#define OS_Q_POST_FRONT_EN       1u    // ���� OSQPostFront()���������ͷ��
#define OS_Q_POST_OPT_EN         1u    // ���� OSQPostOpt()����ѡ���
#define OS_Q_QUERY_EN            1u    // ���� OSQQuery()����ѯ����״̬

#define OS_SEM_ACCEPT_EN         1u    // ���� OSSemAccept()����������ȡ�ź���
#define OS_SEM_DEL_EN            1u    // ���� OSSemDel()��ɾ���ź���
#define OS_SEM_PEND_ABORT_EN     1u    // ���� OSSemPendAbort()����ֹ�ȴ�
#define OS_SEM_QUERY_EN          1u    // ���� OSSemQuery()����ѯ�ź���״̬
#define OS_SEM_SET_EN            1u    // ���� OSSemSet()��ֱ�������ź���ֵ

#define OS_TASK_STAT_STK_CHK_EN     1u    // ����ͳ�������������ջ��ʹ�����
#define OS_TASK_CHANGE_PRIO_EN      1u    // ���� OSTaskChangePrio()����̬�޸��������ȼ�
#define OS_TASK_CREATE_EN           1u    // ���� OSTaskCreate()�����񴴽�����
#define OS_TASK_DEL_EN 	   1u    // ���� OSTaskDel()������ɾ������
#define OS_TASK_SUSPEND_EN       1u    // ���� OSTaskSuspend() �� OSTaskResume()���������ͻָ�����
#define OS_TASK_QUERY_EN         1u    // ���� OSTaskQuery()����ѯ����״̬����
#define OS_TASK_REG_TBL_SIZE     4u    // �����ض��Ĵ������С��һ�����CPU�ܹ����壩


#define OS_TIME_DLY_HMSM_EN      1u    // ���� OSTimeDlyHMSM()����ʱ���֡��롢������ʱ����
#define OS_TIME_DLY_RESUME_EN    1u    // ���� OSTimeDlyResume()���ָ���ʱ����������

#define OS_TMR_EN    1u    // ���������ʱ�����ܣ�0���رգ�1��������
#define OS_TMR_CFG_MAX	10u   // ���ʱ���������ɸ��������������� 65500��
#define OS_TMR_CFG_WHEEL_SIZE 8u    // ��ʱ���ֵĴ�С�������� 2 ���ݴη���ͨ��Ϊ 8��16 �� 32��
#define OS_TMR_CFG_NAME_EN 1u    // ���ö�ʱ����������
#define OS_TMR_CFG_TICKS_PER_SEC 100u // ��ʱ������Ƶ�ʣ�Hz����ͨ��Ϊ 100 �� 1000
#define OS_TASK_TMR_PRIO  3u    // ��ʱ���������ȼ����ɸ������������ͨ��Ϊ 1-10 ֮���ֵ��
#define OS_TASK_TMR_STK_SIZE 128u   // ��ʱ������ջ��С���ɸ������������


#define OS_EVENT_MULTI_EN       1u    // ���� OSEventPendMulti()�����¼�������
#define OS_TASK_PROFILE_EN      1u    // ������������ʱ����ͳ�ƹ���
#define OS_TASK_SW_HOOK_EN      1u    // ���������л����Ӻ��� OSTaskSwHook()
#define OS_TICK_STEP_EN         1u    // ���õ���ʱ�ӽ��Ĺ��ܣ����ڵ��Թ��� uC/OS-View ʹ��
#define OS_TIME_TICK_HOOK_EN    1u    // ����ʱ�ӽ��Ĺ��Ӻ��� OSTimeTickHook()

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* OS_CFG_H */