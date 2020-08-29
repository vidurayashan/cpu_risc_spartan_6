/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/OUR_PROCESSOR/OUR_PROCESSOR/alu.v";
static unsigned int ng1[] = {5U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {6U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {2, 0};



static void Always_11_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 2188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 2384);
    *((int *)t2) = 1;
    t3 = (t0 + 2216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);

LAB20:    xsi_set_current_line(14, ng0);
    t7 = (t0 + 1160U);
    t8 = *((char **)t7);
    t7 = (t0 + 1252U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 16, t9, 16);
    t7 = (t0 + 1572);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB9:    xsi_set_current_line(16, ng0);

LAB21:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = (t0 + 1252U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 16, t7, 16);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t8 = (t10 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB23;

LAB22:    t9 = (t3 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t10) > *((unsigned int *)t3))
        goto LAB24;

LAB25:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(21, ng0);

LAB31:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1252U);
    t3 = *((char **)t2);
    t2 = (t0 + 1160U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t3, 16, t4, 16);
    t2 = (t0 + 1572);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 16);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB29:    goto LAB19;

LAB11:    xsi_set_current_line(25, ng0);

LAB32:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 16, t3, 16);
    t7 = (t0 + 1572);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t3, 16, t2, 32);
    t4 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t23 = (t17 ^ t18);
    t24 = (t16 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB36;

LAB33:    if (t27 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t12 = (t11 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB39:    goto LAB19;

LAB13:    xsi_set_current_line(29, ng0);

LAB40:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1572);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB15:    xsi_set_current_line(31, ng0);

LAB41:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1572);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB17:    xsi_set_current_line(33, ng0);

LAB42:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1572);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB23:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(17, ng0);

LAB30:    xsi_set_current_line(18, ng0);
    t19 = (t0 + 1160U);
    t20 = *((char **)t19);
    t19 = (t0 + 1252U);
    t21 = *((char **)t19);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 16, t20, 16, t21, 16);
    t19 = (t0 + 1572);
    xsi_vlogvar_assign_value(t19, t22, 0, 0, 16);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB35:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(26, ng0);
    t13 = ((char*)((ng4)));
    t19 = (t0 + 1664);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 1);
    goto LAB39;

}


extern void work_m_00000000002606343646_2725559894_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000002606343646_2725559894", "isim/Top_module_isim_beh.exe.sim/work/m_00000000002606343646_2725559894.didat");
	xsi_register_executes(pe);
}
