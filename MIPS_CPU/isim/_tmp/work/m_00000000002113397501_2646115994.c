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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/datamem.v";
static int ng1[] = {0, 0};
static int ng2[] = {64, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};



static void I33_0(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
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
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1416);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 11);

LAB3:    t1 = (t0 + 1416);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t3 + 4U);
    t8 = (t4 + 4U);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t9 = (t5 + 4U);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(34, ng0);

LAB11:    xsi_set_current_line(35, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 1232);
    t19 = (t0 + 1232);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1232);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 1416);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 11, 2);
    t28 = (t17 + 4U);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4U);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1416);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 11, t4, 32);
    t6 = (t0 + 1416);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 11);
    goto LAB3;

LAB12:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB13;

}

static void A39_1(char *t0)
{
    char t5[8];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
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
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 2020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2200);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_divide(t5, 32, t4, 32, t3, 32);
    t6 = (t0 + 1324);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB9;

LAB6:    if (t17 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t20 = (t5 + 4U);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 828U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB19;

LAB16:    if (t17 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t5) = 1;

LAB19:    t20 = (t5 + 4U);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t5);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t26 = (t0 + 652U);
    t27 = *((char **)t26);
    t26 = (t0 + 1232);
    t30 = (t0 + 1232);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    t33 = (t0 + 1232);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    t36 = (t0 + 1324);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t28, t29, t32, t35, 2, 1, t38, 32, 2);
    t39 = (t28 + 4U);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t29 + 4U);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t46 = *((unsigned int *)t28);
    t47 = *((unsigned int *)t29);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t26, t27, 0, *((unsigned int *)t29), t49);
    goto LAB15;

LAB18:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(44, ng0);

LAB23:    xsi_set_current_line(45, ng0);
    t26 = (t0 + 1232);
    t27 = (t26 + 32U);
    t30 = *((char **)t27);
    t31 = (t0 + 1232);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    t34 = (t0 + 1232);
    t35 = (t34 + 36U);
    t36 = *((char **)t35);
    t37 = (t0 + 1324);
    t38 = (t37 + 32U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t28, 32, t30, t33, t36, 2, 1, t39, 32, 2);
    t42 = (t0 + 1140);
    xsi_vlogvar_assign_value(t42, t28, 0, 0, 32);
    goto LAB22;

}


extern void work_m_00000000002113397501_2646115994_init()
{
	static char *pe[] = {(void *)I33_0,(void *)A39_1};
	xsi_register_didat("work_m_00000000002113397501_2646115994", "isim/_tmp/work/m_00000000002113397501_2646115994.didat");
	xsi_register_executes(pe);
}
