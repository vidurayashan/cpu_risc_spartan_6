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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000610117567_2882359608_init();
    work_m_00000000002606343646_2725559894_init();
    work_m_00000000002015448390_3828577538_init();
    xilinxcorelib_ver_m_00000000001358910285_2391647737_init();
    xilinxcorelib_ver_m_00000000001687936702_0750564298_init();
    xilinxcorelib_ver_m_00000000000277421008_2757446239_init();
    xilinxcorelib_ver_m_00000000001603977570_1108408901_init();
    work_m_00000000000403262735_0610666722_init();
    work_m_00000000003701050979_1756712915_init();
    work_m_00000000003572048375_4141292114_init();
    work_m_00000000002921669303_0853791706_init();
    work_m_00000000001259957962_2652845206_init();
    work_m_00000000001674722787_3761010635_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001674722787_3761010635");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
