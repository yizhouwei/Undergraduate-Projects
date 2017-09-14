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
static const char *ng0 = "//psf/Home/Desktop/370lab/finalp2/finalp2/shiftleft.v";
static int ng1[] = {2, 0};



static void A26_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;

LAB0:    t1 = (t0 + 1264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1444);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_lshift(t5, 32, t4, 32, t3, 32);
    t6 = (t0 + 788);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000002068573241_4050741583_init()
{
	static char *pe[] = {(void *)A26_0};
	xsi_register_didat("work_m_00000000002068573241_4050741583", "isim/_tmp/work/m_00000000002068573241_4050741583.didat");
	xsi_register_executes(pe);
}
