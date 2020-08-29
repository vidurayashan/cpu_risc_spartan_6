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
static const char *ng0 = "C:/OUR_PROCESSOR/OUR_PROCESSOR/register16.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {3U, 0U};



static void Always_12_0(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 1868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2064);
    *((int *)t2) = 1;
    t3 = (t0 + 1896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 932U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);
    t11 = (t0 + 1116U);
    t12 = *((char **)t11);

LAB9:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t11, 2);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB8;

LAB10:    xsi_set_current_line(16, ng0);

LAB15:    xsi_set_current_line(16, ng0);
    t14 = (t0 + 1024U);
    t15 = *((char **)t14);
    t14 = (t0 + 1344);
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 16);
    goto LAB14;

LAB12:    xsi_set_current_line(17, ng0);

LAB16:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1344);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 16, t5, 16, t11, 16);
    t14 = (t0 + 1344);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 16);
    goto LAB14;

}


extern void work_m_00000000003572048375_4141292114_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000003572048375_4141292114", "isim/Top_module_isim_beh.exe.sim/work/m_00000000003572048375_4141292114.didat");
	xsi_register_executes(pe);
}
