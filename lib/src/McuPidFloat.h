/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuPidFloat.h
**     CDE edition : Community
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : PID_Float
**     Version     : Component 01.006, Driver 01.00, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-12-20, 21:25, # CodeGen: 114
**     Abstract    :
**
**     Settings    :
**          Component Name                                 : McuPidFloat
**          SDK                                            : McuLib
**          K                                              : 0.1
**          Ti                                             : 100
**          Td                                             : 0
**          T                                              : 0.01
**          Control Variable                               : 
**            Type of U                                    : UINT16
**            Min U value                                  : 0
**            Max U value                                  : 65000
**            Max rate of change                           : 0
**     Contents    :
**         Control - void McuPidFloat_Control(float error, void* *u);
**         Reset   - void McuPidFloat_Reset(void);
**         Set_K   - void McuPidFloat_Set_K(float k);
**         Set_Ti  - void McuPidFloat_Set_Ti(float t);
**         Set_Td  - void McuPidFloat_Set_Td(float t);
**
**     * (c) Copyright Carlos Alvarez, 2013
**      * For non-commercial use only.
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
** ###################################################################*/
/*!
** @file McuPidFloat.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup McuPidFloat_module McuPidFloat module documentation
**  @{
*/         

#ifndef __McuPidFloat_H
#define __McuPidFloat_H

/* MODULE McuPidFloat. */
#include "McuLib.h" /* SDK and API used */
#include "McuPidFloatconfig.h" /* configuration */

/* Include inherited components */
#include "McuLib.h"




void McuPidFloat_Set_Td(float t);
/*
** ===================================================================
**     Method      :  McuPidFloat_Set_Td (component PID_Float)
**     Description :
**         Change the Td parameter.
**     Parameters  :
**         NAME            - DESCRIPTION
**         t               - New Td value.
**     Returns     : Nothing
** ===================================================================
*/

void McuPidFloat_Set_Ti(float t);
/*
** ===================================================================
**     Method      :  McuPidFloat_Set_Ti (component PID_Float)
**     Description :
**         Change the Ti parameter.
**     Parameters  :
**         NAME            - DESCRIPTION
**         t               - New Ti value.
**     Returns     : Nothing
** ===================================================================
*/

void McuPidFloat_Set_K(float k);
/*
** ===================================================================
**     Method      :  McuPidFloat_Set_K (component PID_Float)
**     Description :
**         Change the K parameter.
**     Parameters  :
**         NAME            - DESCRIPTION
**         k               - New K value.
**     Returns     : Nothing
** ===================================================================
*/

void McuPidFloat_Reset(void);
/*
** ===================================================================
**     Method      :  McuPidFloat_Reset (component PID_Float)
**     Description :
**         Reset the PID.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void McuPidFloat_Control(float error, uint16_t *u);
/*
** ===================================================================
**     Method      :  McuPidFloat_Control (component PID_Float)
**     Description :
**         Control function. Must be called every T time.
**     Parameters  :
**         NAME            - DESCRIPTION
**         error           - Error signal. (Reference -
**                           SystemOutput).
**       * u               - Pointer to the control variable.
**     Returns     : Nothing
** ===================================================================
*/

/* END McuPidFloat. */

#endif
/* ifndef __McuPidFloat_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/