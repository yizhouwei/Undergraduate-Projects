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
static const char *ng1 = "clk=%b, w8=%h, w7= %h, w4=%h, w3=%h\n";
static const char *ng2 = "//psf/Home/Desktop/370lab/finalp2/finalp2/testfinal.v";
static int ng3[] = {0, 0};
static int ng4[] = {8, 0};
static int ng5[] = {1, 0};

void M56_1(char *);
void M56_1(char *);


static void M56_1_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 1396);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(0, 0, ng0, 2, t0, (char)118, t3, 1);
    t4 = (t0 + 1396);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t0 + 1080U);
    t8 = *((char **)t7);
    t7 = (t0 + 992U);
    t9 = *((char **)t7);
    t7 = (t0 + 904U);
    t10 = *((char **)t7);
    t7 = (t0 + 816U);
    t11 = *((char **)t7);
    xsi_vlogfile_write(1, 0, ng1, 6, t0, (char)118, t6, 1, (char)118, t8, 4, (char)118, t9, 4, (char)118, t10, 4, (char)118, t11, 4);

LAB1:    return;
}

static void I55_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2148U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng2);

LAB4:    xsi_set_current_line(56, ng2);
    M56_1(t0);
    xsi_set_current_line(58, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1396);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1580);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(62, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng2);
    t2 = (t0 + 2064);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng2);
    t2 = (t0 + 2064);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng2);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1672);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void A70_2(char *t0)
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

LAB0:    t1 = (t0 + 2276U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng2);
    t2 = (t0 + 2192);
    xsi_process_wait(t2, 500000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng2);
    t4 = (t0 + 1396);
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
    t17 = (t0 + 1396);
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

void M56_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2320);
    t2 = (t0 + 2584);
    xsi_vlogfile_monitor((void *)M56_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003653221208_4263748839_init()
{
	static char *pe[] = {(void *)I55_0,(void *)A70_2,(void *)M56_1};
	xsi_register_didat("work_m_00000000003653221208_4263748839", "isim/_tmp/work/m_00000000003653221208_4263748839.didat");
	xsi_register_executes(pe);
}
