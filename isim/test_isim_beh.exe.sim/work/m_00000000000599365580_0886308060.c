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
static const char *ng0 = "E:/ise project/P6/vegitabalecpu/piplelineplus/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {14U, 0U};
static int ng14[] = {32, 0};



static void Always_8_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t47[8];
    char t48[8];
    char t49[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
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
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t4 = (t0 + 1368U);
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

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(10, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB33;

LAB9:    xsi_set_current_line(11, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB33;

LAB11:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t11, 0, 8);
    t4 = (t11 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 65535U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 65535U);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t11, 16, t3, 16);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB33;

LAB13:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB34;

LAB35:
LAB36:    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 32);
    goto LAB33;

LAB15:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB37;

LAB38:
LAB39:    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 32);
    goto LAB33;

LAB17:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB40;

LAB41:
LAB42:    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 32);
    goto LAB33;

LAB19:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t10, 0, 8);
    t40 = (t10 + 4);
    t41 = (t11 + 4);
    t36 = *((unsigned int *)t11);
    t37 = (~(t36));
    *((unsigned int *)t10) = t37;
    *((unsigned int *)t40) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB47;

LAB46:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t45 & 4294967295U);
    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 31U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 31U);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_lshift(t11, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 31U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 31U);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t47 + 4);
    t8 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t47) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t16 & 31U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 31U);
    memset(t48, 0, 8);
    xsi_vlog_signed_arith_rshift(t48, 32, t4, 32, t47, 32);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t48, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t49, 0, 8);
    xsi_vlog_signed_less(t49, 32, t4, 32, t7, 32);
    memset(t11, 0, 8);
    t3 = (t49 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t49);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t3) != 0)
        goto LAB50;

LAB51:    t9 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB52;

LAB53:    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    t24 = *((unsigned int *)t9);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t9) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t11) > 0)
        goto LAB58;

LAB59:    memcpy(t10, t23, 8);

LAB60:    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t10, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB62;

LAB61:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB63;

LAB64:    memset(t11, 0, 8);
    t22 = (t47 + 4);
    t12 = *((unsigned int *)t22);
    t13 = (~(t12));
    t14 = *((unsigned int *)t47);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t22) != 0)
        goto LAB68;

LAB69:    t40 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t40);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB70;

LAB71:    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    t24 = *((unsigned int *)t40);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t40) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t11) > 0)
        goto LAB76;

LAB77:    memcpy(t10, t46, 8);

LAB78:    t50 = (t0 + 1928);
    xsi_vlogvar_assign_value(t50, t10, 0, 0, 32);
    goto LAB33;

LAB31:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t9 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 6);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 6);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 31U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 31U);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t3, 32, t10, 32);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_lshift(t47, 32, t4, 32, t11, 32);
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1528U);
    t40 = *((char **)t22);
    memset(t48, 0, 8);
    t22 = (t48 + 4);
    t41 = (t40 + 4);
    t18 = *((unsigned int *)t40);
    t19 = (t18 >> 6);
    *((unsigned int *)t48) = t19;
    t20 = *((unsigned int *)t41);
    t21 = (t20 >> 6);
    *((unsigned int *)t22) = t21;
    t24 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t24 & 31U);
    t25 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t25 & 31U);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_rshift(t49, 32, t23, 32, t48, 5);
    t26 = *((unsigned int *)t47);
    t27 = *((unsigned int *)t49);
    t28 = (t26 | t27);
    *((unsigned int *)t51) = t28;
    t46 = (t47 + 4);
    t50 = (t49 + 4);
    t52 = (t51 + 4);
    t29 = *((unsigned int *)t46);
    t30 = *((unsigned int *)t50);
    t31 = (t29 | t30);
    *((unsigned int *)t52) = t31;
    t34 = *((unsigned int *)t52);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB79;

LAB80:
LAB81:    t59 = (t0 + 1928);
    xsi_vlogvar_assign_value(t59, t51, 0, 0, 32);
    goto LAB33;

LAB34:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    goto LAB36;

LAB37:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    goto LAB39;

LAB40:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB42;

LAB43:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    goto LAB45;

LAB47:    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t38 | t39);
    t42 = *((unsigned int *)t40);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t40) = (t42 | t43);
    goto LAB46;

LAB48:    *((unsigned int *)t11) = 1;
    goto LAB51;

LAB50:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB51;

LAB52:    t22 = ((char*)((ng2)));
    goto LAB53;

LAB54:    t23 = ((char*)((ng1)));
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t10, 32, t22, 32, t23, 32);
    goto LAB60;

LAB58:    memcpy(t10, t22, 8);
    goto LAB60;

LAB62:    t9 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t47) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t11) = 1;
    goto LAB69;

LAB68:    t23 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB69;

LAB70:    t41 = ((char*)((ng2)));
    goto LAB71;

LAB72:    t46 = ((char*)((ng1)));
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t46, 32);
    goto LAB78;

LAB76:    memcpy(t10, t41, 8);
    goto LAB78;

LAB79:    t36 = *((unsigned int *)t51);
    t37 = *((unsigned int *)t52);
    *((unsigned int *)t51) = (t36 | t37);
    t53 = (t47 + 4);
    t54 = (t49 + 4);
    t38 = *((unsigned int *)t53);
    t39 = (~(t38));
    t42 = *((unsigned int *)t47);
    t32 = (t42 & t39);
    t43 = *((unsigned int *)t54);
    t44 = (~(t43));
    t45 = *((unsigned int *)t49);
    t33 = (t45 & t44);
    t55 = (~(t32));
    t56 = (~(t33));
    t57 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t57 & t55);
    t58 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t58 & t56);
    goto LAB81;

}


extern void work_m_00000000000599365580_0886308060_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000000599365580_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000000599365580_0886308060.didat");
	xsi_register_executes(pe);
}
