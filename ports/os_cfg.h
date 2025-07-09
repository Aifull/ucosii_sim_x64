#ifndef OS_CFG_H
#define OS_CFG_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


	/* ---------------------- 任务管理 ---------------------- */
#define OS_MAX_TASKS            62    // 最大任务数
#define OS_LOWEST_PRIO          63    // 最低优先级
#define OS_TASK_IDLE_STK_SIZE   128   // 空闲任务栈大小
#define OS_TASK_STAT_EN         1     // 启用统计任务
#define OS_TASK_STAT_STK_SIZE   128   // 统计任务栈大小

/* ---------------------- 事件管理 ---------------------- */
#define OS_MAX_EVENTS           20    // 最大事件数
#define OS_SEM_EN               1     // 启用信号量
#define OS_MBOX_EN              1     // 启用消息邮箱
#define OS_Q_EN                 1     // 启用消息队列
#define OS_FLAG_EN              1     // 启用事件标志组
#define OS_EVENT_NAME_EN		1     // 启用事件标志组命名功能

/* ---------------------- 内存管理 ---------------------- */
#define OS_MEM_EN               1     // 启用内存分区管理
#define OS_MAX_MEM_PART         5     // 最大内存分区数

/* ---------------------- 系统配置 ---------------------- */
#define OS_TICKS_PER_SEC        1000  // 时钟节拍频率（Hz）
#define OS_ARG_CHK_EN           1     // 启用参数检查
#define OS_CPU_HOOKS_EN         1     // 启用钩子函数
#define OS_APP_HOOKS_EN			0u   // 启用应用程序定义的钩子函数
#define OS_DEBUG_EN             1     // 启用调试输出

/* ---------------------- 可选功能 ---------------------- */
#define OS_TASK_CREATE_EXT_EN   1     // 禁用扩展任务创建（按需开启）
#define OS_SCHED_LOCK_EN        1     // 允许调度器锁定
#define OS_TIME_GET_SET_EN      1     // 允许获取/设置系统时间

#define CPU_CFG_CRITICAL_METHOD  3     // 使用Windows临界区保护（x64）
#define OS_TASK_NAME_EN 	   1     // 启用任务名称
/*-----------------------事件-----------------------------*/
#define OS_MAX_FLAGS           10u   // 最多允许创建的事件标志组数量（可根据需要设置）

#define OS_FLAGS_NBITS         32u   // 每组事件标志所占位数（只能是 8u、16u 或 32u）

#define OS_FLAG_WAIT_CLR_EN    1u    // 启用等待清除标志功能（OSFlagPend() 的可选模式）
#define OS_FLAG_ACCEPT_EN      1u    // 启用 OSFlagAccept() 函数
#define OS_FLAG_DEL_EN         1u    // 启用 OSFlagDel() 函数
#define OS_FLAG_NAME_EN        1u    // 启用事件标志组命名功能
#define OS_FLAG_QUERY_EN       1u    // 启用 OSFlagQuery() 函数

/*------------------------MESSAGE MAILBOXES---------------------------------*/
#define OS_MBOX_ACCEPT_EN        1u   // 启用 OSMboxAccept()：非阻塞接收消息
#define OS_MBOX_DEL_EN           1u   // 启用 OSMboxDel()：删除邮箱对象
#define OS_MBOX_PEND_ABORT_EN    1u   // 启用 OSMboxPendAbort()：中止挂起任务
#define OS_MBOX_POST_EN          1u   // 启用 OSMboxPost()：发送邮箱消息
#define OS_MBOX_POST_OPT_EN      1u   // 启用 OSMboxPostOpt()：带选项的发送（前/后）
#define OS_MBOX_QUERY_EN         1u   // 启用 OSMboxQuery()：查询邮箱状态

#define OS_MEM_NAME_EN 1u    // 启用内存分区命名功能
#define OS_MEM_QUERY_EN 1u   // 启用 OSMemQuery() 函数


#define OS_MUTEX_EN             1u   // 启用互斥信号量功能

#define OS_MUTEX_ACCEPT_EN      1u   // 启用 OSMutexAccept()：非阻塞获取互斥锁
#define OS_MUTEX_DEL_EN         1u   // 启用 OSMutexDel()：删除互斥锁
#define OS_MUTEX_QUERY_EN       1u   // 启用 OSMutexQuery()：查询互斥锁状态


#define OS_MAX_QS                10u   // 最大消息队列数量，视需求调整，最多 65500

#define OS_Q_ACCEPT_EN           1u    // 启用 OSQAccept()：非阻塞接收
#define OS_Q_DEL_EN              1u    // 启用 OSQDel()：删除队列
#define OS_Q_FLUSH_EN            1u    // 启用 OSQFlush()：清空队列
#define OS_Q_PEND_ABORT_EN       1u    // 启用 OSQPendAbort()：中止等待
#define OS_Q_POST_EN             1u    // 启用 OSQPost()：向队列发送
#define OS_Q_POST_FRONT_EN       1u    // 启用 OSQPostFront()：插入队列头部
#define OS_Q_POST_OPT_EN         1u    // 启用 OSQPostOpt()：可选项发送
#define OS_Q_QUERY_EN            1u    // 启用 OSQQuery()：查询队列状态

#define OS_SEM_ACCEPT_EN         1u    // 启用 OSSemAccept()：非阻塞获取信号量
#define OS_SEM_DEL_EN            1u    // 启用 OSSemDel()：删除信号量
#define OS_SEM_PEND_ABORT_EN     1u    // 启用 OSSemPendAbort()：中止等待
#define OS_SEM_QUERY_EN          1u    // 启用 OSSemQuery()：查询信号量状态
#define OS_SEM_SET_EN            1u    // 启用 OSSemSet()：直接设置信号量值

#define OS_TASK_STAT_STK_CHK_EN     1u    // 启用统计任务检查各任务栈的使用情况
#define OS_TASK_CHANGE_PRIO_EN      1u    // 启用 OSTaskChangePrio()：动态修改任务优先级
#define OS_TASK_CREATE_EN           1u    // 启用 OSTaskCreate()：任务创建函数
#define OS_TASK_DEL_EN 	   1u    // 启用 OSTaskDel()：任务删除函数
#define OS_TASK_SUSPEND_EN       1u    // 启用 OSTaskSuspend() 和 OSTaskResume()，任务挂起和恢复功能
#define OS_TASK_QUERY_EN         1u    // 启用 OSTaskQuery()，查询任务状态功能
#define OS_TASK_REG_TBL_SIZE     4u    // 任务特定寄存器表大小（一般根据CPU架构定义）


#define OS_TIME_DLY_HMSM_EN      1u    // 启用 OSTimeDlyHMSM()：按时、分、秒、毫秒延时函数
#define OS_TIME_DLY_RESUME_EN    1u    // 启用 OSTimeDlyResume()：恢复延时挂起任务功能

#define OS_TMR_EN    1u    // 启用软件定时器功能（0：关闭，1：开启）
#define OS_TMR_CFG_MAX	10u   // 最大定时器数量（可根据需求调整，最多 65500）
#define OS_TMR_CFG_WHEEL_SIZE 8u    // 定时器轮的大小（必须是 2 的幂次方，通常为 8、16 或 32）
#define OS_TMR_CFG_NAME_EN 1u    // 启用定时器命名功能
#define OS_TMR_CFG_TICKS_PER_SEC 100u // 定时器节拍频率（Hz），通常为 100 或 1000
#define OS_TASK_TMR_PRIO  3u    // 定时器任务优先级（可根据需求调整，通常为 1-10 之间的值）
#define OS_TASK_TMR_STK_SIZE 128u   // 定时器任务栈大小（可根据需求调整）


#define OS_EVENT_MULTI_EN       1u    // 启用 OSEventPendMulti()，多事件挂起功能
#define OS_TASK_PROFILE_EN      1u    // 启用任务运行时性能统计功能
#define OS_TASK_SW_HOOK_EN      1u    // 启用任务切换钩子函数 OSTaskSwHook()
#define OS_TICK_STEP_EN         1u    // 启用单步时钟节拍功能，便于调试工具 uC/OS-View 使用
#define OS_TIME_TICK_HOOK_EN    1u    // 启用时钟节拍钩子函数 OSTimeTickHook()

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* OS_CFG_H */