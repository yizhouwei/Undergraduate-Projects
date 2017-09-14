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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/signextend.v";
static int ng1[] = {15, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {4294901760U, 0U};



static void A25_0(char *t0)
{
    char t5[8];
    char t10[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 1264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1444);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = (t0 + 544U);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t5, 32, t4, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t11 = (t10 + 4U);
    t12 = (t5 + 4U);
    t13 = (t9 + 4U);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t26 = (t10 + 4U);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = (t0 + 544U);
    t4 = (t2 + 40U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t5, 32, t3, t6, 2, t7, 32, 1);
    t8 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t9 = (t10 + 4U);
    t11 = (t5 + 4U);
    t12 = (t8 + 4U);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB16;

LAB13:    if (t23 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t10) = 1;

LAB16:    t13 = (t10 + 4U);
    t27 = *((unsigned int *)t13);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);
    t32 = ((char*)((ng2)));
    t33 = (t0 + 564U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t32, 32, t34, 16);
    t33 = (t0 + 788);
    xsi_vlogvar_assign_value(t33, t35, 0, 0, 32);
    goto LAB12;

LAB15:    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(27, ng0);
    t26 = ((char*)((ng4)));
    t32 = (t0 + 564U);
    t33 = *((char **)t32);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t26, 32, t33, 16);
    t32 = (t0 + 788);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 32);
    goto LAB19;

}


extern void work_m_00000000002068573241_1900080952_init()
{
	static char *pe[] = {(void *)A25_0};
	xsi_register_didat("work_m_00000000002068573241_1900080952", "isim/_tmp/work/m_00000000002068573241_1900080952.didat");
	xsi_register_executes(pe);
}
