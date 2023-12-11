/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2022 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : r_smc_interrupt.h
* Version          : 1.2.12
* Device(s)        : R5F56609BxFP
* Description      : This file implements interrupt setting.
***********************************************************************************************************************/

#ifndef SMC_INTERRUPT_H
#define SMC_INTERRUPT_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/* Priority level of interrupt source. 
 * These macro definitions are used to set the IPR register directly
 */
#define _00_ICU_PRIORITY_LEVEL0                    (0x00U) /* Level 0 (disabled)  */
#define _01_ICU_PRIORITY_LEVEL1                    (0x01U) /* Level 1  */
#define _02_ICU_PRIORITY_LEVEL2                    (0x02U) /* Level 2  */
#define _03_ICU_PRIORITY_LEVEL3                    (0x03U) /* Level 3  */
#define _04_ICU_PRIORITY_LEVEL4                    (0x04U) /* Level 4  */
#define _05_ICU_PRIORITY_LEVEL5                    (0x05U) /* Level 5  */
#define _06_ICU_PRIORITY_LEVEL6                    (0x06U) /* Level 6  */
#define _07_ICU_PRIORITY_LEVEL7                    (0x07U) /* Level 7  */
#define _08_ICU_PRIORITY_LEVEL8                    (0x08U) /* Level 8  */
#define _09_ICU_PRIORITY_LEVEL9                    (0x09U) /* Level 9  */
#define _0A_ICU_PRIORITY_LEVEL10                   (0x0AU) /* Level 10  */
#define _0B_ICU_PRIORITY_LEVEL11                   (0x0BU) /* Level 11  */
#define _0C_ICU_PRIORITY_LEVEL12                   (0x0CU) /* Level 12  */
#define _0D_ICU_PRIORITY_LEVEL13                   (0x0DU) /* Level 13  */
#define _0E_ICU_PRIORITY_LEVEL14                   (0x0EU) /* Level 14  */
#define _0F_ICU_PRIORITY_LEVEL15                   (0x0FU) /* Level 15  */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
/* The macro definitions below list the full set of priority levels as selected in the Interrupts tab
 * Please do not modify this file manually
 */
#define ICU_BSC_BUSERR_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RAM_RAMERR_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_FCU_FIFERR_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_FCU_FRDYI_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_SWINT2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_SWINT_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMT0_CMI0_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMT1_CMI1_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW0_CMWI0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW1_CMWI1_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSCI10_RXI_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSCI10_TXI_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSPI0_SPRI0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSPI0_SPTI0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSCI11_RXI_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSCI11_TXI_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RIIC0_RXI0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RIIC0_TXI0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RIIC2_RXI2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RIIC2_TXI2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI0_RXI0_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI0_TXI0_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI1_RXI1_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI1_TXI1_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI2_RXI2_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI2_TXI2_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ0_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ1_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ2_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ3_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ4_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ5_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ6_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ7_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ8_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ9_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ10_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ11_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ12_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ13_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ14_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_IRQ15_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI3_RXI3_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI3_TXI3_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI4_RXI4_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI4_TXI4_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI5_RXI5_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI5_TXI5_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI6_RXI6_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI6_TXI6_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_LVD1_LVD1_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_LVD2_LVD2_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RTC_ALM_PRIORITY                       (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RTC_PRD_PRIORITY                       (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_REMC0_REMCI0_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_IWDT_IWUNI_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_WDT_WUNI_PRIORITY                      (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI7_RXI7_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI7_TXI7_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI8_RXI8_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI8_TXI8_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI9_RXI9_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI9_TXI9_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI10_RXI10_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI10_TXI10_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_GROUPBL2_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_GROUPBL0_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_GROUPBL1_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ICU_GROUPAL0_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI11_RXI11_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI11_TXI11_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI12_RXI12_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_SCI12_TXI12_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_DMAC_DMAC0I_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_DMAC_DMAC1I_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_DMAC_DMAC2I_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_DMAC_DMAC3I_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_DMAC_DMAC74I_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_OST_OSTDI_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMT2_CMI2_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMT3_CMI3_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW0_IC0I0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW0_IC1I0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW0_OC0I0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW0_OC1I0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW1_IC0I1_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW1_IC1I1_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW1_OC0I1_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMTW1_OC1I1_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RTC_CUP_PRIORITY                       (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_S12AD_S12ADI_PRIORITY                  (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_S12AD_S12GBADI_PRIORITY                (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_S12AD_S12GCADI_PRIORITY                (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ELC_ELSR18I_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_ELC_ELSR19I_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB144_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB145_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR0_CMIA0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR0_CMIB0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR0_OVI0_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR1_CMIA1_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR1_CMIB1_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR1_OVI1_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR2_CMIA2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR2_CMIB2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR2_OVI2_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR3_CMIA3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR3_CMIB3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_TMR3_OVI3_PRIORITY                     (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMPC0_CMPC0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMPC1_CMPC1_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMPC2_CMPC2_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CMPC3_CMPC3_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CANFD_RFDREQ0_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CANFD_RFDREQ1_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CANFD0_CFDREQ0_PRIORITY                (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB165_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB166_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB167_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB168_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB169_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB170_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB171_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB172_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB173_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB174_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB175_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB176_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB177_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB178_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB179_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB180_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB181_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB182_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB183_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB184_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB185_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB186_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB187_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB188_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB189_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB190_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB191_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB192_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB193_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB194_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB195_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB196_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB197_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB198_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB199_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB200_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB201_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB202_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB203_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB204_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB205_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB206_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIB_INTB207_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TGIA0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TGIB0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TGIC0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TGID0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TCIV0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TGIE0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU0_TGIF0_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU1_TGIA1_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU1_TGIB1_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU1_TCIV1_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU1_TCIU1_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU2_TGIA2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU2_TGIB2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU2_TCIV2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU2_TCIU2_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU3_TGIA3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU3_TGIB3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU3_TGIC3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU3_TGID3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU3_TCIV3_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU4_TGIA4_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU4_TGIB4_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU4_TGIC4_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU4_TGID4_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU4_TCIV4_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU5_TGIU5_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU5_TGIV5_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU5_TGIW5_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU6_TGIA6_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU6_TGIB6_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU6_TGIC6_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU6_TGID6_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU6_TCIV6_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU7_TGIA7_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU7_TGIB7_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU7_TGIC7_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU7_TGID7_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_MTU7_TCIV7_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSPI0_SPCI0_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSCI10_AED_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_RSCI11_AED_PRIORITY                    (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CANFD_EC1EI_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CANFD_EC2EI_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_CANFD_ECOVI_PRIORITY                   (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIA_INTA252_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIA_INTA253_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIA_INTA254_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)
#define ICU_PERIA_INTA255_PRIORITY                 (_0F_ICU_PRIORITY_LEVEL15)

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Interrupt_Create(void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
