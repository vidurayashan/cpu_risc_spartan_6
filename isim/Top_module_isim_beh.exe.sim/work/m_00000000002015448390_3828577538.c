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
static const char *ng0 = "C:/OUR_PROCESSOR/OUR_PROCESSOR/demux.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {11U, 0U};
static unsigned int ng12[] = {0U, 0U};
static unsigned int ng13[] = {12U, 0U};



static void Always_10_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(13, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1932);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 16);
    goto LAB31;

LAB9:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB11:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB13:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB15:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB17:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1152U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB19:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1336U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB21:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1428U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB23:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB25:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1612U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

LAB27:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1704U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng12)));
    xsi_vlogtype_concat(t9, 16, 16, 2U, t3, 8, t4, 8);
    t7 = (t0 + 1932);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 16);
    goto LAB31;

LAB29:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 1244U);
    t4 = *((char **)t3);
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    goto LAB31;

}


extern void work_m_00000000002015448390_3828577538_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000002015448390_3828577538", "isim/Top_module_isim_beh.exe.sim/work/m_00000000002015448390_3828577538.didat");
	xsi_register_executes(pe);
}
