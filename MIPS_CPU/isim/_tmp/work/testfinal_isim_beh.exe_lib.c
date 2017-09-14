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

#include "xsi.h"

struct XSI_INFO xsi_info;


int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    work_m_00000000000866782574_2073120511_init();
    work_m_00000000001301352928_1723610611_init();
    work_m_00000000000596132393_3383896982_init();
    work_m_00000000003328151357_0049830548_init();
    work_m_00000000001740852430_0833183191_init();
    work_m_00000000000003929327_1323274903_init();
    work_m_00000000003937412122_1298333783_init();
    work_m_00000000002068573241_4050741583_init();
    work_m_00000000001581414421_3913188552_init();
    work_m_00000000002229318316_3037777339_init();
    work_m_00000000003968521229_4004515877_init();
    work_m_00000000002068573241_1900080952_init();
    work_m_00000000001691423979_4132685690_init();
    work_m_00000000003373805928_0352319829_init();
    work_m_00000000004241603132_0864879315_init();
    work_m_00000000000951271290_0886308060_init();
    work_m_00000000002959669840_3347313469_init();
    work_m_00000000003174564941_2875975674_init();
    work_m_00000000002617646143_2646115994_init();
    work_m_00000000000176427564_3936377433_init();
    work_m_00000000002508792254_3508751931_init();
    work_m_00000000003878763688_1673893025_init();
    work_m_00000000003451648406_3409648901_init();
    work_m_00000000000886671019_1094380185_init();
    work_m_00000000002736520137_3126655838_init();
    work_m_00000000004104047314_3086320998_init();
    work_m_00000000002313804007_1455534668_init();
    work_m_00000000003741970893_3880129339_init();
    work_m_00000000003653221208_4263748839_init();


    xsi_register_tops("work_m_00000000003653221208_4263748839");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
