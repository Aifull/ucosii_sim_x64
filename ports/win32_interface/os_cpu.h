/*
*********************************************************************************************************
*                                              uC/OS-II
*                                        The Real-Time Kernel
*
*                    Copyright 1992-2021 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*
*                                    Microsoft Win32 Specific code
*
* Filename : os_cpu.h
* Version  : V2.93.01
*********************************************************************************************************
*/

#ifndef  OS_CPU_H
#define  OS_CPU_H

#include <Windows.h>

#ifdef    OS_CPU_GLOBALS
#define   OS_CPU_EXT
#else
#define   OS_CPU_EXT  extern
#endif


/*
**********************************************************************************************************
*                                           DATA TYPES
**********************************************************************************************************
*/

/* �ٽ�����������Windows�ٽ������濪���жϣ� */
extern CRITICAL_SECTION os_critical_section;

#define OS_CRITICAL_METHOD  3u           // 3=ʹ��Windows�ٽ���������x64��
#define OS_ENTER_CRITICAL()  EnterCriticalSection(&os_critical_section)
#define OS_EXIT_CRITICAL()   LeaveCriticalSection(&os_critical_section)

/* ջ�������� */
#define OS_STK_GROWTH        1           // 1=�����������ߵ�ַ���͵�ַ��

/* �����л��꣨x64�޻�࣬�ú������棩 */
#define OS_TASK_SW()         OSCtxSw()

#define CPU_SR_ALLOC()  OS_CPU_SR cpu_sr = 0u

typedef  boolean    BOOLEAN;
typedef  unsigned char     INT8U;                                          /* Unsigned  8 bit quantity                                 */
typedef  signed char     INT8S;                                          /* Signed    8 bit quantity                                 */
typedef  unsigned short     INT16U;                                         /* Unsigned 16 bit quantity                                 */
typedef  signed short     INT16S;                                         /* Signed   16 bit quantity                                 */
typedef  unsigned int     INT32U;                                         /* Unsigned 32 bit quantity                                 */
typedef  signed int     INT32S;                                         /* Signed   32 bit quantity                                 */
typedef  float       FP32;                                           /* Single precision floating point                          */
typedef  double       FP64;                                           /* Double precision floating point                          */

/* ���������ض��壨x64���䣩 */
typedef INT64            OS_STK;        // ջ��Ԫ���ͣ�64λ��
typedef unsigned long    OS_CPU_SR;     // �ٽ���״̬�Ĵ�����αʵ�֣�

/*
**********************************************************************************************************
*                                         Function Prototypes
**********************************************************************************************************
*/

void         OSCtxSw   (void);
void         OSIntCtxSw(void);

void         OSStartHighRdy(void);

boolean  OSIntCurTaskSuspend(void);
boolean  OSIntCurTaskResume (void);

void         OSDebuggerBreak(void);

void CPU_IntInit(void);                // ��ʼ���ж�	
void CPU_IntEnd(void);                 // �����ж�

/*
*********************************************************************************************************
*                                             MODULE END
*
* Note(s) : (1) See 'lib_def.h  MODULE'.
*********************************************************************************************************
*/

#endif                                                          /* End of os cpu module include.                        */
