/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "";
static const char *ng1 = "Time: %d [clk]= %d pc=%b\n[$s0] = %h  [$s1] = %h  [$s2] = %h  \n[$s3] = %h  [$s4] = %h  [$s5] = %h  \n[$s6] = %h  [$s7] = %h  [$t0] = %h  \n[$t1] = %h  [$t2] = %h  [$t3] = %h  \n[$t4] = %h  [$t5] = %h  [$t6] = %h \n[$t7] = %h  [$t8] = %h  [$t9] = %h \n";
static const char *ng2 = "//psf/Home/Desktop/370lab/finalp2/finalp2/testpipeline.v";
static const char *ng3 = "******************************";
static const char *ng4 = "The textual results:";
static int ng5[] = {0, 0};

void M86_1(char *);
void M86_1(char *);


static void M86_1_Func(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4296);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(0, 0, ng0, 2, t0, (char)118, t3, 1);
    t5 = xsi_vlog_time(t4, 1000000.000000000, 1000.000000000000);
    t6 = (t0 + 4296);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 3192U);
    t10 = *((char **)t9);
    t9 = (t0 + 2224U);
    t11 = *((char **)t9);
    t9 = (t0 + 2312U);
    t12 = *((char **)t9);
    t9 = (t0 + 2400U);
    t13 = *((char **)t9);
    t9 = (t0 + 2488U);
    t14 = *((char **)t9);
    t9 = (t0 + 2576U);
    t15 = *((char **)t9);
    t9 = (t0 + 2664U);
    t16 = *((char **)t9);
    t9 = (t0 + 2752U);
    t17 = *((char **)t9);
    t9 = (t0 + 2840U);
    t18 = *((char **)t9);
    t9 = (t0 + 1344U);
    t19 = *((char **)t9);
    t9 = (t0 + 1432U);
    t20 = *((char **)t9);
    t9 = (t0 + 1520U);
    t21 = *((char **)t9);
    t9 = (t0 + 1608U);
    t22 = *((char **)t9);
    t9 = (t0 + 1696U);
    t23 = *((char **)t9);
    t9 = (t0 + 1784U);
    t24 = *((char **)t9);
    t9 = (t0 + 1872U);
    t25 = *((char **)t9);
    t9 = (t0 + 1960U);
    t26 = *((char **)t9);
    t9 = (t0 + 2048U);
    t27 = *((char **)t9);
    t9 = (t0 + 2136U);
    t28 = *((char **)t9);
    xsi_vlogfile_write(1, 0, ng1, 22, t0, (char)118, t4, 64, (char)118, t8, 1, (char)118, t10, 32, (char)118, t11, 32, (char)118, t12, 32, (char)118, t13, 32, (char)118, t14, 32, (char)118, t15, 32, (char)118, t16, 32, (char)118, t17, 32, (char)118, t18, 32, (char)118, t19, 32, (char)118, t20, 32, (char)118, t21, 32, (char)118, t22, 32, (char)118, t23, 32, (char)118, t24, 32, (char)118, t25, 32, (char)118, t26, 32, (char)118, t27, 32, (char)118, t28, 32);

LAB1:    return;
}

static void I83_0(char *t0)
{

LAB0:    xsi_set_current_line(83, ng2);

LAB2:    xsi_set_current_line(84, ng2);
    xsi_vlogfile_write(1, 0, ng3, 1, t0);
    xsi_set_current_line(85, ng2);
    xsi_vlogfile_write(1, 0, ng4, 1, t0);
    xsi_set_current_line(86, ng2);
    M86_1(t0);

LAB1:    return;
}

static void I90_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(90, ng2);

LAB2:    xsi_set_current_line(92, ng2);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 4296);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void A100_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 5028U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng2);
    t2 = (t0 + 4944);
    xsi_process_wait(t2, 500000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng2);
    t4 = (t0 + 4296);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t3) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB5:    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 4296);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    goto LAB2;

LAB6:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB5;

}

void M86_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5072);
    t2 = (t0 + 5336);
    xsi_vlogfile_monitor((void *)M86_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001289980639_2871682946_init()
{
	static char *pe[] = {(void *)I83_0,(void *)I90_2,(void *)A100_3,(void *)M86_1};
	xsi_register_didat("work_m_00000000001289980639_2871682946", "isim/_tmp/work/m_00000000001289980639_2871682946.didat");
	xsi_register_executes(pe);
}
