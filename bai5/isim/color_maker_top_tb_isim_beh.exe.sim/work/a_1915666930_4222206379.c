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
static const char *ng0 = "C:/Users/hkien/Downloads/DT010243_NGUYENQUOCTUAN_BAI3,4,5/DT010243_NGUYENQUOCTUAN_BAI3,4,5/bai5/color_maker_top_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_1496949865_91900896(char *, char *, char *, unsigned char , unsigned char , int );


static void work_a_1915666930_4222206379_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t9 = *((int64 *)t2);
    t10 = (t9 / 2);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t3 = *((unsigned char *)t5);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 5336);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t4;
    xsi_driver_first_trans_delta(t1, 0U, 1, t10);
    t12 = (t0 + 5336);
    xsi_driver_intertial_reject(t12, t10, t10);

LAB3:    t1 = (t0 + 5192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 5336);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1915666930_4222206379_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 10024);
    t4 = (t0 + 5464);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 4184);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 10027);
    t4 = (t0 + 5464);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 4184);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 10030);
    t4 = (t0 + 5464);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (2400000 * t9);
    t2 = (t0 + 4184);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_1915666930_4222206379_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    char *t11;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 5528);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t10 = (t9 + 1);
    t2 = (t0 + 5528);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_1915666930_4222206379_p_3(char *t0)
{
    char t8[16];
    char t12[16];
    char t18[8];
    char t19[8];
    char t20[8];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int64 t5;
    char *t6;
    unsigned char t7;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5224);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 4680);
    t4 = (t0 + 3472U);
    t5 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t3, t4, t5, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    std_textio_write4(STD_TEXTIO, t1, t3, (unsigned char)58, (unsigned char)0, 0);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    std_textio_write4(STD_TEXTIO, t1, t3, (unsigned char)32, (unsigned char)0, 0);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    t2 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t1, t3, t2, (unsigned char)0, 0);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    std_textio_write4(STD_TEXTIO, t1, t3, (unsigned char)32, (unsigned char)0, 0);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    t4 = (t0 + 1992U);
    t6 = *((char **)t4);
    t2 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_1496949865_91900896(IEEE_P_3564397177, t1, t3, t2, (unsigned char)0, 0);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t7 = *((unsigned char *)t4);
    t6 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t8, t6, (char)99, t2, (char)99, t7, (char)101);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_base_array_concat(t9, t12, t13, (char)97, t1, t8, (char)99, t11, (char)101);
    t14 = (t0 + 2728U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t16 = (1U + 1U);
    t17 = (t16 + 1U);
    memcpy(t14, t9, t17);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    std_textio_write4(STD_TEXTIO, t1, t3, (unsigned char)32, (unsigned char)0, 0);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    t4 = (t0 + 2728U);
    t6 = *((char **)t4);
    memcpy(t18, t6, 3U);
    t4 = (t0 + 9832U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t1, t3, t18, t4, (unsigned char)0, 0);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t7 = *((unsigned char *)t4);
    t6 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t8, t6, (char)99, t2, (char)99, t7, (char)101);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t9 = xsi_base_array_concat(t9, t12, t13, (char)97, t1, t8, (char)99, t11, (char)101);
    t14 = (t0 + 2848U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t16 = (1U + 1U);
    t17 = (t16 + 1U);
    memcpy(t14, t9, t17);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    std_textio_write4(STD_TEXTIO, t1, t3, (unsigned char)32, (unsigned char)0, 0);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    t4 = (t0 + 2848U);
    t6 = *((char **)t4);
    memcpy(t19, t6, 3U);
    t4 = (t0 + 9848U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t1, t3, t19, t4, (unsigned char)0, 0);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t7 = *((unsigned char *)t4);
    t6 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t8, t6, (char)99, t2, (char)99, t7, (char)101);
    t9 = (t0 + 2968U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t16 = (1U + 1U);
    memcpy(t9, t1, t16);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    std_textio_write4(STD_TEXTIO, t1, t3, (unsigned char)32, (unsigned char)0, 0);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3472U);
    t4 = (t0 + 2968U);
    t6 = *((char **)t4);
    memcpy(t20, t6, 2U);
    t4 = (t0 + 9864U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t1, t3, t20, t4, (unsigned char)0, 0);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4680);
    t3 = (t0 + 3296U);
    t4 = (t0 + 3472U);
    std_textio_writeline(STD_TEXTIO, t1, t3, t4);
    goto LAB3;

}


extern void work_a_1915666930_4222206379_init()
{
	static char *pe[] = {(void *)work_a_1915666930_4222206379_p_0,(void *)work_a_1915666930_4222206379_p_1,(void *)work_a_1915666930_4222206379_p_2,(void *)work_a_1915666930_4222206379_p_3};
	xsi_register_didat("work_a_1915666930_4222206379", "isim/color_maker_top_tb_isim_beh.exe.sim/work/a_1915666930_4222206379.didat");
	xsi_register_executes(pe);
}
