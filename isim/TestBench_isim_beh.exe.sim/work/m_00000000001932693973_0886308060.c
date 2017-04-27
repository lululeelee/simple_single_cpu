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
static const char *ng0 = "D:/verilog/Simple_Single_CPU/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};
static int ng11[] = {10, 0};
static int ng12[] = {11, 0};
static int ng13[] = {16, 0};



static void Cont_36_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 4360);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 4232);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_38_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t13 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 16, t4, 16);
    t14 = (t0 + 4424);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 4248);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Cont_39_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 6);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 6);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 31U);
    t13 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 27, t4, 5);
    t14 = (t0 + 4488);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31);
    t19 = (t0 + 4264);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Always_40_3(char *t0)
{
    char t10[8];
    char t42[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t44;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB30;

LAB31:
LAB32:    t41 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t41, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB33;

LAB34:
LAB35:    t23 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t23, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB37;

LAB36:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB38;

LAB39:    memset(t42, 0, 8);
    t14 = (t43 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t43);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t14) != 0)
        goto LAB43;

LAB44:    t23 = (t42 + 4);
    t18 = *((unsigned int *)t42);
    t19 = *((unsigned int *)t23);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB45;

LAB46:    t21 = *((unsigned int *)t42);
    t22 = (~(t21));
    t25 = *((unsigned int *)t23);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t23) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t42) > 0)
        goto LAB51;

LAB52:    memcpy(t10, t41, 8);

LAB53:    t44 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t44, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB55;

LAB54:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB56;

LAB57:    memset(t42, 0, 8);
    t14 = (t43 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t43);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t14) != 0)
        goto LAB61;

LAB62:    t23 = (t42 + 4);
    t18 = *((unsigned int *)t42);
    t19 = *((unsigned int *)t23);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB63;

LAB64:    t21 = *((unsigned int *)t42);
    t22 = (~(t21));
    t25 = *((unsigned int *)t23);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t23) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t42) > 0)
        goto LAB69;

LAB70:    memcpy(t10, t41, 8);

LAB71:    t44 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t44, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB75;

LAB72:    if (t22 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t43) = 1;

LAB75:    memset(t42, 0, 8);
    t14 = (t43 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t43);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t14) != 0)
        goto LAB78;

LAB79:    t23 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t35 = *((unsigned int *)t23);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB80;

LAB81:    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t23) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t42) > 0)
        goto LAB86;

LAB87:    memcpy(t10, t41, 8);

LAB88:    t44 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t44, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1848U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB90;

LAB89:    if (t22 != 0)
        goto LAB91;

LAB92:    memset(t42, 0, 8);
    t14 = (t43 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t43);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t14) != 0)
        goto LAB95;

LAB96:    t23 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t35 = *((unsigned int *)t23);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB97;

LAB98:    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t23) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t42) > 0)
        goto LAB103;

LAB104:    memcpy(t10, t41, 8);

LAB105:    t44 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t44, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng13)));
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_lshift(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB30:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB32;

LAB33:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB35;

LAB37:    t9 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t43) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t42) = 1;
    goto LAB44;

LAB43:    t15 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB44;

LAB45:    t24 = ((char*)((ng3)));
    goto LAB46;

LAB47:    t41 = ((char*)((ng1)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t41, 32);
    goto LAB53;

LAB51:    memcpy(t10, t24, 8);
    goto LAB53;

LAB55:    t9 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t43) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t42) = 1;
    goto LAB62;

LAB61:    t15 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB62;

LAB63:    t24 = ((char*)((ng3)));
    goto LAB64;

LAB65:    t41 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t41, 32);
    goto LAB71;

LAB69:    memcpy(t10, t24, 8);
    goto LAB71;

LAB74:    t9 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t42) = 1;
    goto LAB79;

LAB78:    t15 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB79;

LAB80:    t24 = ((char*)((ng1)));
    goto LAB81;

LAB82:    t41 = ((char*)((ng3)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t41, 32);
    goto LAB88;

LAB86:    memcpy(t10, t24, 8);
    goto LAB88;

LAB90:    *((unsigned int *)t43) = 1;
    goto LAB92;

LAB91:    t9 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t42) = 1;
    goto LAB96;

LAB95:    t15 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB96;

LAB97:    t24 = ((char*)((ng1)));
    goto LAB98;

LAB99:    t41 = ((char*)((ng3)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t41, 32);
    goto LAB105;

LAB103:    memcpy(t10, t24, 8);
    goto LAB105;

}


extern void work_m_00000000001932693973_0886308060_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_38_1,(void *)Cont_39_2,(void *)Always_40_3};
	xsi_register_didat("work_m_00000000001932693973_0886308060", "isim/TestBench_isim_beh.exe.sim/work/m_00000000001932693973_0886308060.didat");
	xsi_register_executes(pe);
}
