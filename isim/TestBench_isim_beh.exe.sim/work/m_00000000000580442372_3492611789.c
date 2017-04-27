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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/verilog/Simple_Single_CPU/ALU_Ctrl.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static unsigned int ng3[] = {8U, 0U};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {9U, 0U};
static int ng6[] = {32, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {34, 0};
static unsigned int ng9[] = {6U, 0U};
static int ng10[] = {36, 0};
static unsigned int ng11[] = {0U, 0U};
static int ng12[] = {37, 0};
static unsigned int ng13[] = {1U, 0U};
static int ng14[] = {42, 0};
static unsigned int ng15[] = {4U, 0U};
static int ng16[] = {1, 0};
static unsigned int ng17[] = {7U, 0U};
static int ng18[] = {2, 0};
static unsigned int ng19[] = {10U, 0U};
static int ng20[] = {4, 0};
static unsigned int ng21[] = {3U, 0U};
static int ng22[] = {5, 0};
static int ng23[] = {6, 0};
static unsigned int ng24[] = {11U, 0U};



static void Always_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(50, ng0);

LAB22:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);

LAB23:    t7 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 6, t7, 32);
    if (t9 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 32);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 32);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 32);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 32);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 32);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 32);
    if (t6 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB21;

LAB9:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB21;

LAB24:    xsi_set_current_line(52, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    goto LAB38;

LAB26:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB28:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB30:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB32:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB38;

LAB36:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB38;

}


extern void work_m_00000000000580442372_3492611789_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000000580442372_3492611789", "isim/TestBench_isim_beh.exe.sim/work/m_00000000000580442372_3492611789.didat");
	xsi_register_executes(pe);
}
