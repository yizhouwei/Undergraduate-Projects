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
static const char *ng1 = "clk=%b, finalresult=%h\n";
static const char *ng2 = "//psf/Home/Desktop/370lab/finalp2/finalp2/testfinal.v";
static int ng3[] = {0, 0};
static int ng4[] = {8, 0};

void M51_1(char *);
void M51_1(char *);


static void M51_1_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1132);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(0, 0, ng0, 2, t0, (char)118, t3, 1);
    t4 = (t0 + 1132);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t0 + 816U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, ng1, 3, t0, (char)118, t6, 1, (char)118, t8, 32);

LAB1:    return;
}

static void I50_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1884U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng2);

LAB4:    xsi_set_current_line(51, ng2);
    M51_1(t0);
    xsi_set_current_line(53, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1132);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1316);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(57, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng2);
    t2 = (t0 + 1800);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void A65_2(char *t0)
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

LAB0:    t1 = (t0 + 2012U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng2);
    t2 = (t0 + 1928);
    xsi_process_wait(t2, 500000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng2);
    t4 = (t0 + 1132);
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
    t17 = (t0 + 1132);
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

void M51_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2056);
    t2 = (t0 + 2320);
    xsi_vlogfile_monitor((void *)M51_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003759436342_4263748839_init()
{
	static char *pe[] = {(void *)I50_0,(void *)A65_2,(void *)M51_1};
	xsi_register_didat("work_m_00000000003759436342_4263748839", "isim/_tmp/work/m_00000000003759436342_4263748839.didat");
	xsi_register_executes(pe);
}
