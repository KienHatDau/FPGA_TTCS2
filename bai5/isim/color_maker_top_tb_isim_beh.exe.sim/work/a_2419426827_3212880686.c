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
static const char *ng0 = "C:/Users/hkien/Downloads/DT010243_NGUYENQUOCTUAN_BAI3,4,5/DT010243_NGUYENQUOCTUAN_BAI3,4,5/bai5/vgactrl.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_3890342512_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_3908131327_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_2419426827_3212880686_p_0(char *t0)
{
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 6352);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 6416);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t10 = (11 - 9);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t4 = (t0 + 6480);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t10 = (10 - 9);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t3 + t12);
    t4 = (t0 + 6544);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 11944U);
    t4 = (t0 + 4128U);
    t6 = *((char **)t4);
    t13 = *((int *)t6);
    t5 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t3, t1, t13);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 6608);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 11944U);
    t4 = (t0 + 4488U);
    t6 = *((char **)t4);
    t13 = *((int *)t6);
    t14 = (t13 - 1);
    t2 = ieee_p_3620187407_sub_3890342512_3965413181(IEEE_P_3620187407, t3, t1, t14);
    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(84, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t3 = t1;
    memset(t3, (unsigned char)2, 12U);
    t4 = (t0 + 6672);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 11928U);
    t4 = (t0 + 4968U);
    t6 = *((char **)t4);
    t13 = *((int *)t6);
    t14 = (t13 - 1);
    t2 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t3, t1, t14);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 11928U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t3, t1, 1);
    t6 = (t20 + 12U);
    t10 = *((unsigned int *)t6);
    t11 = (1U * t10);
    t2 = (11U != t11);
    if (t2 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 6736);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 11U);
    xsi_driver_first_trans_fast(t7);

LAB17:
LAB12:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 11944U);
    t4 = (t0 + 4248U);
    t6 = *((char **)t4);
    t13 = *((int *)t6);
    t5 = ieee_p_3620187407_sub_3908131327_3965413181(IEEE_P_3620187407, t3, t1, t13);
    if (t5 == 1)
        goto LAB24;

LAB25:    t2 = (unsigned char)0;

LAB26:    if (t2 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB22:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 11928U);
    t4 = (t0 + 4728U);
    t6 = *((char **)t4);
    t13 = *((int *)t6);
    t5 = ieee_p_3620187407_sub_3908131327_3965413181(IEEE_P_3620187407, t3, t1, t13);
    if (t5 == 1)
        goto LAB30;

LAB31:    t2 = (unsigned char)0;

LAB32:    if (t2 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6864);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB3;

LAB5:    xsi_set_current_line(76, ng0);
    t8 = (t0 + 6608);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB6;

LAB8:    t4 = (t0 + 2472U);
    t7 = *((char **)t4);
    t4 = (t0 + 11928U);
    t8 = (t0 + 4608U);
    t9 = *((char **)t8);
    t14 = *((int *)t9);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t4, t14);
    t2 = t15;
    goto LAB10;

LAB11:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t4 = (t0 + 11944U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t7, t4, 1);
    t9 = (t20 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    t5 = (12U != t11);
    if (t5 == 1)
        goto LAB14;

LAB15:    t16 = (t0 + 6672);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t16);
    goto LAB12;

LAB14:    xsi_size_not_matching(12U, t11, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(86, ng0);
    t4 = xsi_get_transient_memory(11U);
    memset(t4, 0, 11U);
    t7 = t4;
    memset(t7, (unsigned char)2, 11U);
    t8 = (t0 + 6736);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 11U);
    xsi_driver_first_trans_fast(t8);
    goto LAB17;

LAB19:    xsi_size_not_matching(11U, t11, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(93, ng0);
    t8 = (t0 + 6800);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB22;

LAB24:    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t4 = (t0 + 11944U);
    t8 = (t0 + 4368U);
    t9 = *((char **)t8);
    t14 = *((int *)t9);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t4, t14);
    t2 = t15;
    goto LAB26;

LAB27:    xsi_set_current_line(99, ng0);
    t8 = (t0 + 6864);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB28;

LAB30:    t4 = (t0 + 2472U);
    t7 = *((char **)t4);
    t4 = (t0 + 11928U);
    t8 = (t0 + 4848U);
    t9 = *((char **)t8);
    t14 = *((int *)t9);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t7, t4, t14);
    t2 = t15;
    goto LAB32;

}


extern void work_a_2419426827_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2419426827_3212880686_p_0};
	xsi_register_didat("work_a_2419426827_3212880686", "isim/color_maker_top_tb_isim_beh.exe.sim/work/a_2419426827_3212880686.didat");
	xsi_register_executes(pe);
}
