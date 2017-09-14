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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/ALU.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};



static void A29_0(char *t0)
{
    char t5[8];
    char t30[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 1532U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 740U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t5) = 1;

LAB9:    t21 = (t5 + 4U);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t5) = 1;

LAB16:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t5) = 1;

LAB23:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t5) = 1;

LAB33:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t5, 0, 8);
    t4 = (t5 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t5) = 1;

LAB43:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB36:
LAB26:
LAB19:
LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 964);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng7)));
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
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t5) = 1;

LAB59:    t27 = (t5 + 4U);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB62:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);
    t27 = (t0 + 564U);
    t28 = *((char **)t27);
    t27 = (t0 + 652U);
    t29 = *((char **)t27);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t28, 32, t29, 32);
    t27 = (t0 + 964);
    xsi_vlogvar_assign_value(t27, t30, 0, 0, 32);
    goto LAB12;

LAB15:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(31, ng0);
    t21 = (t0 + 564U);
    t27 = *((char **)t21);
    t21 = (t0 + 652U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t27, 32, t28, 32);
    t21 = (t0 + 964);
    xsi_vlogvar_assign_value(t21, t30, 0, 0, 32);
    goto LAB19;

LAB22:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(32, ng0);
    t21 = (t0 + 564U);
    t27 = *((char **)t21);
    t21 = (t0 + 652U);
    t28 = *((char **)t21);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t28);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t21 = (t27 + 4U);
    t29 = (t28 + 4U);
    t34 = (t30 + 4U);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB27;

LAB28:
LAB29:    t60 = (t0 + 964);
    xsi_vlogvar_assign_value(t60, t30, 0, 0, 32);
    goto LAB26;

LAB27:    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t30) = (t40 | t41);
    t42 = (t27 + 4U);
    t43 = (t28 + 4U);
    t44 = *((unsigned int *)t27);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t58 & t54);
    t59 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t59 & t55);
    goto LAB29;

LAB32:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(33, ng0);
    t21 = (t0 + 564U);
    t27 = *((char **)t21);
    t21 = (t0 + 652U);
    t28 = *((char **)t21);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t28);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t21 = (t27 + 4U);
    t29 = (t28 + 4U);
    t34 = (t30 + 4U);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB37;

LAB38:
LAB39:    t60 = (t0 + 964);
    xsi_vlogvar_assign_value(t60, t30, 0, 0, 32);
    goto LAB36;

LAB37:    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t30) = (t40 | t41);
    t42 = (t27 + 4U);
    t43 = (t28 + 4U);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t52 = (t46 & t45);
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t28);
    t53 = (t49 & t48);
    t50 = (~(t52));
    t51 = (~(t53));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t50);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t51);
    goto LAB39;

LAB42:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(34, ng0);

LAB47:    xsi_set_current_line(35, ng0);
    t21 = (t0 + 564U);
    t27 = *((char **)t21);
    t21 = (t0 + 652U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4U);
    t29 = (t27 + 4U);
    t34 = (t28 + 4U);
    if (*((unsigned int *)t29) != 0)
        goto LAB49;

LAB48:    if (*((unsigned int *)t34) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t27) < *((unsigned int *)t28))
        goto LAB50;

LAB51:    t42 = (t30 + 4U);
    t31 = *((unsigned int *)t42);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t35 = (t33 & t32);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB55:    goto LAB46;

LAB49:    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t30) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(35, ng0);
    t43 = ((char*)((ng6)));
    t60 = (t0 + 964);
    xsi_vlogvar_assign_value(t60, t43, 0, 0, 32);
    goto LAB55;

LAB58:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(39, ng0);
    t28 = ((char*)((ng6)));
    t29 = (t0 + 1056);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB62;

}


extern void work_m_00000000000951271290_0886308060_init()
{
	static char *pe[] = {(void *)A29_0};
	xsi_register_didat("work_m_00000000000951271290_0886308060", "isim/_tmp/work/m_00000000000951271290_0886308060.didat");
	xsi_register_executes(pe);
}
