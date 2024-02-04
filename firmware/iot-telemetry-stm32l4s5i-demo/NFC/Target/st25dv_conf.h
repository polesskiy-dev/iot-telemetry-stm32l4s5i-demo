/**
  ******************************************************************************
  * @file    st25dv_conf.h
  * @author  SRA Application Team
  * @brief   This file contains definitions for the ST25DV bus interfaces
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ST25DV_CONF_H__
#define __ST25DV_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l4xx_hal.h"
#include "b_l4s5i_iot01a_bus.h"
#include "b_l4s5i_iot01a_errno.h"
#include "stm32l4xx_hal_exti.h"

#define CUSTOM_ST25DV_I2C_Init         BSP_I2C2_Init
#define CUSTOM_ST25DV_I2C_DeInit       BSP_I2C2_DeInit
#define CUSTOM_ST25DV_I2C_ReadReg16    BSP_I2C2_ReadReg16
#define CUSTOM_ST25DV_I2C_WriteReg16   BSP_I2C2_WriteReg16
#define CUSTOM_ST25DV_I2C_Recv         BSP_I2C2_Recv
#define CUSTOM_ST25DV_I2C_IsReady      BSP_I2C2_IsReady

#define CUSTOM_ST25DV_GetTick HAL_GetTick

#define ST25DV_INT_PIN_GPO_EXTI_PORT GPIOE
#define ST25DV_INT_PIN_GPO_EXTI_PIN GPIO_PIN_4
#define ST25DV_INT_PIN_GPO_EXTI_LINE EXTI_LINE_4
#define ST25DV_INT_PIN_GPO_EXTI_IRQn EXTI4_IRQn
extern EXTI_HandleTypeDef GPO_EXTI;
#define H_EXTI_4  GPO_EXTI

#define CUSTOM_NFCTAG_INSTANCE         (0)
#define CUSTOM_NFCTAG_GPO_PRIORITY     (0)
#ifdef __cplusplus
}
#endif

#endif /* __ST25DV_CONF_H__*/

