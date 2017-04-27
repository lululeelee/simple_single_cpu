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



static void Cont_35_0(char *t0)
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

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1928);
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

LAB7:    t22 = (t0 + 3832);
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
    t35 = (t0 + 3736);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_38_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 65535U);
    t15 = ((char*)((ng2)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t15, 16, t5, 16);
    t16 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 6);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 6);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t17 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(44, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 & t10);
    *((unsigned int *)t4) = t11;
    t6 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = (t4 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t14 = (t12 | t13);
    *((unsigned int *)t16) = t14;
    t18 = *((unsigned int *)t16);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB30;

LAB31:
LAB32:    t40 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(45, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 | t10);
    *((unsigned int *)t4) = t11;
    t6 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = (t4 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t14 = (t12 | t13);
    *((unsigned int *)t16) = t14;
    t18 = *((unsigned int *)t16);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB33;

LAB34:
LAB35:    t40 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(46, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t7, 32, t8, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(47, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 2088);
    t8 = (t6 + 56U);
    t15 = *((char **)t8);
    memset(t41, 0, 8);
    t16 = (t7 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB37;

LAB36:    t22 = (t15 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t7) < *((unsigned int *)t15))
        goto LAB38;

LAB39:    memset(t5, 0, 8);
    t40 = (t41 + 4);
    t9 = *((unsigned int *)t40);
    t10 = (~(t9));
    t11 = *((unsigned int *)t41);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t40) != 0)
        goto LAB43;

LAB44:    t43 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t43);
    t19 = (t14 || t18);
    if (t19 > 0)
        goto LAB45;

LAB46:    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t24 = *((unsigned int *)t43);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t43) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t5) > 0)
        goto LAB51;

LAB52:    memcpy(t4, t45, 8);

LAB53:    t46 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t46, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(48, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t41, 0, 8);
    t6 = (t7 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB55;

LAB54:    t15 = (t8 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB56;

LAB57:    memset(t5, 0, 8);
    t22 = (t41 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t41);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t22) != 0)
        goto LAB61;

LAB62:    t40 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t40);
    t19 = (t14 || t18);
    if (t19 > 0)
        goto LAB63;

LAB64:    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t24 = *((unsigned int *)t40);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t40) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t5) > 0)
        goto LAB69;

LAB70:    memcpy(t4, t43, 8);

LAB71:    t44 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t44, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(49, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t7, 32, t8, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t41, 0, 8);
    t6 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t18 = (t11 | t14);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB75;

LAB72:    if (t21 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t41) = 1;

LAB75:    memset(t5, 0, 8);
    t22 = (t41 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t41);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t22) != 0)
        goto LAB78;

LAB79:    t40 = (t5 + 4);
    t31 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t40);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB80;

LAB81:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t40);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t40) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t5) > 0)
        goto LAB86;

LAB87:    memcpy(t4, t43, 8);

LAB88:    t44 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t44, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 2248);
    t8 = (t6 + 56U);
    t15 = *((char **)t8);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t4, 32, t7, 32, t15, 5);
    t16 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(52, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t4, 32, t7, 32, t8, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(53, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t8 = *((char **)t6);
    memset(t41, 0, 8);
    t6 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t18 = (t11 | t14);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB90;

LAB89:    if (t21 != 0)
        goto LAB91;

LAB92:    memset(t5, 0, 8);
    t22 = (t41 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t41);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t22) != 0)
        goto LAB95;

LAB96:    t40 = (t5 + 4);
    t31 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t40);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB97;

LAB98:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t40);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t40) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t5) > 0)
        goto LAB103;

LAB104:    memcpy(t4, t43, 8);

LAB105:    t44 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t44, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t4, 32, t7, 32, t6, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB30:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t20 | t21);
    t22 = (t7 + 4);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t35);
    t38 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t38 & t34);
    t39 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t39 & t35);
    goto LAB32;

LAB33:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t20 | t21);
    t22 = (t7 + 4);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t34 & t30);
    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & t31);
    goto LAB35;

LAB37:    t23 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t41) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t5) = 1;
    goto LAB44;

LAB43:    t42 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB44;

LAB45:    t44 = ((char*)((ng1)));
    goto LAB46;

LAB47:    t45 = ((char*)((ng3)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t4, 32, t44, 32, t45, 32);
    goto LAB53;

LAB51:    memcpy(t4, t44, 8);
    goto LAB53;

LAB55:    t16 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t41) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t5) = 1;
    goto LAB62;

LAB61:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB62;

LAB63:    t42 = ((char*)((ng3)));
    goto LAB64;

LAB65:    t43 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t4, 32, t42, 32, t43, 32);
    goto LAB71;

LAB69:    memcpy(t4, t42, 8);
    goto LAB71;

LAB74:    t16 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t5) = 1;
    goto LAB79;

LAB78:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB79;

LAB80:    t42 = ((char*)((ng1)));
    goto LAB81;

LAB82:    t43 = ((char*)((ng3)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t4, 32, t42, 32, t43, 32);
    goto LAB88;

LAB86:    memcpy(t4, t42, 8);
    goto LAB88;

LAB90:    *((unsigned int *)t41) = 1;
    goto LAB92;

LAB91:    t16 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t5) = 1;
    goto LAB96;

LAB95:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB96;

LAB97:    t42 = ((char*)((ng1)));
    goto LAB98;

LAB99:    t43 = ((char*)((ng3)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t4, 32, t42, 32, t43, 32);
    goto LAB105;

LAB103:    memcpy(t4, t42, 8);
    goto LAB105;

}


extern void work_m_00000000002582464977_0886308060_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Always_38_1};
	xsi_register_didat("work_m_00000000002582464977_0886308060", "isim/TestBench_isim_beh.exe.sim/work/m_00000000002582464977_0886308060.didat");
	xsi_register_executes(pe);
}
