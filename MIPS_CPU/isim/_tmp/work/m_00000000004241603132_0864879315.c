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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/ALUcontrol.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {42U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {3U, 0U};



static void A26_0(char *t0)
{
    char t5[8];
    char t29[8];
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
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1532);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 652U);
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

LAB11:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 652U);
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t5) = 1;

LAB17:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 652U);
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
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t5) = 1;

LAB25:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
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
        goto LAB68;

LAB65:    if (t18 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t5) = 1;

LAB68:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB69;

LAB70:
LAB71:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB8:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);

LAB13:    xsi_set_current_line(28, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 876);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 4);
    goto LAB12;

LAB16:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(30, ng0);

LAB21:    xsi_set_current_line(31, ng0);
    t21 = ((char*)((ng4)));
    t27 = (t0 + 876);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 4);
    goto LAB20;

LAB24:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(33, ng0);

LAB29:    xsi_set_current_line(34, ng0);
    t21 = (t0 + 564U);
    t27 = *((char **)t21);
    t21 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t28 = (t29 + 4U);
    t30 = (t27 + 4U);
    t31 = (t21 + 4U);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t21);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB33;

LAB30:    if (t41 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t29) = 1;

LAB33:    t44 = (t29 + 4U);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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
        goto LAB40;

LAB37:    if (t18 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t5) = 1;

LAB40:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t5) = 1;

LAB47:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
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
        goto LAB54;

LAB51:    if (t18 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t5) = 1;

LAB54:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
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
        goto LAB61;

LAB58:    if (t18 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t5) = 1;

LAB61:    t8 = (t5 + 4U);
    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB62;

LAB63:
LAB64:
LAB57:
LAB50:
LAB43:
LAB36:    goto LAB28;

LAB32:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(34, ng0);
    t50 = ((char*)((ng2)));
    t51 = (t0 + 876);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 4);
    goto LAB36;

LAB39:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(35, ng0);
    t21 = ((char*)((ng4)));
    t27 = (t0 + 876);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 4);
    goto LAB43;

LAB46:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(36, ng0);
    t21 = ((char*)((ng1)));
    t27 = (t0 + 876);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 4);
    goto LAB50;

LAB53:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(37, ng0);
    t21 = ((char*)((ng3)));
    t27 = (t0 + 876);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 4);
    goto LAB57;

LAB60:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(38, ng0);
    t21 = ((char*)((ng10)));
    t27 = (t0 + 876);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 4);
    goto LAB64;

LAB67:    *((unsigned int *)t5) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(40, ng0);

LAB72:    xsi_set_current_line(41, ng0);
    t21 = ((char*)((ng1)));
    t27 = (t0 + 876);
    xsi_vlogvar_assign_value(t27, t21, 0, 0, 4);
    goto LAB71;

}


extern void work_m_00000000004241603132_0864879315_init()
{
	static char *pe[] = {(void *)A26_0};
	xsi_register_didat("work_m_00000000004241603132_0864879315", "isim/_tmp/work/m_00000000004241603132_0864879315.didat");
	xsi_register_executes(pe);
}
