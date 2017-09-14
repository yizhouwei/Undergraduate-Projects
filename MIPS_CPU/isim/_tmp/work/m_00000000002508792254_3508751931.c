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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/MEMWB.v";
static int ng1[] = {0, 0};



static void I38_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1588);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1404);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void A45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2740);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = (t0 + 1404);
    xsi_vlogvar_generic_wait_assign_value(t3, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t0 + 1496);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1180U);
    t3 = *((char **)t2);
    t2 = (t0 + 1956);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 828U);
    t3 = *((char **)t2);
    t2 = (t0 + 1588);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 916U);
    t3 = *((char **)t2);
    t2 = (t0 + 1680);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1004U);
    t3 = *((char **)t2);
    t2 = (t0 + 1772);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t0 + 1864);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000002508792254_3508751931_init()
{
	static char *pe[] = {(void *)I38_0,(void *)A45_1};
	xsi_register_didat("work_m_00000000002508792254_3508751931", "isim/_tmp/work/m_00000000002508792254_3508751931.didat");
	xsi_register_executes(pe);
}
