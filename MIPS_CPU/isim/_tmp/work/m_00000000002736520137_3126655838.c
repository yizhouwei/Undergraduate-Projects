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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/ringcounter.v";
static unsigned int ng1[] = {14U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {13U, 0U};
static unsigned int ng4[] = {11U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {1U, 0U};



static void I26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 876);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void A28_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 1480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1660);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 4U);
    t8 = (t3 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;

LAB8:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t7 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t6 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB15;

LAB12:    if (t18 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t5) = 1;

LAB15:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t5, 0, 8);
    t7 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t6 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t5) = 1;

LAB22:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t7 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t6 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t5) = 1;

LAB29:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t5, 0, 8);
    t7 = (t5 + 4U);
    t8 = (t4 + 4U);
    t21 = (t6 + 4U);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t5) = 1;

LAB36:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 876);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB39:
LAB32:
LAB25:
LAB18:
LAB11:    goto LAB2;

LAB7:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(29, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 876);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 4);
    goto LAB11;

LAB14:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(30, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 876);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB18;

LAB21:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(31, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 876);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB25;

LAB28:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(32, ng0);
    t28 = ((char*)((ng5)));
    t29 = (t0 + 876);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB32;

LAB35:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(33, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 876);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB39;

}


extern void work_m_00000000002736520137_3126655838_init()
{
	static char *pe[] = {(void *)I26_0,(void *)A28_1};
	xsi_register_didat("work_m_00000000002736520137_3126655838", "isim/_tmp/work/m_00000000002736520137_3126655838.didat");
	xsi_register_executes(pe);
}
