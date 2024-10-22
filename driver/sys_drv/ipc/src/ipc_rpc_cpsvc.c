/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ipc_rpc_cpsvc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This function implements file system adaptation layer with CCCI interfaces.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/


#if defined(__MODEM_CCCI_EXIST__)


#include <stdarg.h>
#include "kal_public_api.h" //MSBB change #include "kal_release.h"

#include "ccci.h"
#include "ipc_rpc.h"
#include "ccci_rpcsvc.h"
#include "ccif.h"


/*******************************************************************************
 * Define import global variables.
 *******************************************************************************/


/*******************************************************************************
 * Define import function prototype.
 *******************************************************************************/
extern kal_int32 IPC_RPC_Wrapper(IPC_RPC_OP_ID_T ipc_op,...);

/*******************************************************************************
 * Define global variables.
 *******************************************************************************/

/*************************************************************************
* FUNCTION
*  IPC_RPC_Secure_Algo
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : MDSC insert or remove message and change EINT poliaty
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_Secure_Algo (kal_uint8 Direction, kal_uint32 ContentAddr,
                               kal_uint32 ContentLen, kal_uint8 *CustomSeed,
                               kal_uint8 *ResText)
{
    kal_int32 ret;

    ret = 	IPC_RPC_Wrapper(IPC_RPC_CPSVC_SECURE_ALGO_OP,	sizeof(kal_uint8),	(void *)&Direction,
                            ContentLen,			(void *)ContentAddr,
                            sizeof(kal_uint32), (void *)&ContentLen,
                            sizeof(kal_uint32), (void *)CustomSeed, 	IPC_RPC_INPUT_TERM_PATTERN,
                            ContentLen, 		(void *)ResText, 		IPC_RPC_EOF_TERM_PATTERN);

    return ret;

}

/*************************************************************************
* FUNCTION
*  IPC_RPC_EINT_GetNumber
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : MDSC insert or remove message and change EINT poliaty
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_EINT_GetNumber(kal_uint8 *EintName, kal_uint32 EintNameLength,
                                 kal_uint32 *EintNo)
{
    kal_int32 ret;

    ret = IPC_RPC_Wrapper(IPC_RPC_EINT_GETNUM_OP,		EintNameLength,		(void *)EintName,
                          sizeof(kal_uint32), (void *)&EintNameLength,	IPC_RPC_INPUT_TERM_PATTERN,
                          sizeof(kal_uint32), (void *)EintNo,				IPC_RPC_EOF_TERM_PATTERN);

    return ret;
}

/*************************************************************************
* FUNCTION
*  void IPC_RPC_GPIO_GetPin
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : query the GPIO pin
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_GPIO_GetPin(kal_uint8 *GPIOName, kal_uint32 GPIONameLength, kal_uint32 *GPIOPin)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_GPIO_GETPIN_OP,		GPIONameLength,		(void *)GPIOName,
                           sizeof(kal_uint32), (void *)&GPIONameLength,	IPC_RPC_INPUT_TERM_PATTERN,
                           sizeof(kal_uint32), (void *)GPIOPin,			IPC_RPC_EOF_TERM_PATTERN);


    return ret;
}

/*************************************************************************
* FUNCTION
*  IPC_RPC_Get_Secure_RO
*
* DESCRIPTION
*  This function is to get Secure RO image from AP side
*
* PARAMETERS
*  ResText: buffer for decrypted SecureRO
*  ResLen: buffer length
* RETURNS
*  <0: AP doesn't support the feature
*  otherwise: the transferred bytes
*
*************************************************************************/
kal_int32 IPC_RPC_Get_Secure_RO(kal_uint8* ResText, kal_uint32 ResLen)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_GET_SECURE_RO_OP,	sizeof(kal_int32),	(void *)&ResLen,	IPC_RPC_INPUT_TERM_PATTERN,
                           ResLen,				(void *)ResText,	IPC_RPC_EOF_TERM_PATTERN);


    return ret;
}

/*************************************************************************
* FUNCTION
*  IPC_RPC_ADC_GetChannelNumber
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : query the ChannelNumber pin
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_ADC_GetChannelNumber(kal_uint8 *ChannelName, kal_uint32 ChannelNameLength, kal_uint32 *ChannelNumber)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_ADC_GETNUM_OP,		ChannelNameLength,	(void *)ChannelName,
                           sizeof(kal_uint32), (void *)&ChannelNameLength, IPC_RPC_INPUT_TERM_PATTERN,
                           sizeof(kal_uint32), (void *)ChannelNumber,		IPC_RPC_EOF_TERM_PATTERN);


    return ret;
}


/*************************************************************************
* FUNCTION
*  IPC_RPC_Query_EMI
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : query the EMI Type in AP side
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_Query_EMI(kal_uint32 *EMIType, kal_uint32 *ClockRate)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_QUERY_EMI_OP,														IPC_RPC_INPUT_TERM_PATTERN,
                           sizeof(kal_uint32), (void *)EMIType,
                           sizeof(kal_uint32), (void *)ClockRate,			IPC_RPC_EOF_TERM_PATTERN);

    return ret;
}

#if defined(__SIM_HOT_SWAP_SUPPORT__)
/*************************************************************************
* FUNCTION
*  IPC_RPC_EINT_GetAttribute
*
* DESCRIPTION
*  This function use to get eint attribute from AP side
*  major information : get attribute of EINT
*
* PARAMETERS
*  *
* RETURNS
*   >= 0 : Success
*	<  0 : error code
*
*************************************************************************/
kal_int32 IPC_RPC_EINT_GetAttribute (kal_uint8 *EintName, kal_uint32 EintNameLength, kal_uint32 queryType, void *result, kal_uint32 resultLength)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_EINT_GETATTRIBUTE_OP,		EintNameLength		, (void *)EintName,
                           sizeof(kal_uint32)	, (void *)&EintNameLength,
                           sizeof(kal_uint32)	, (void *)&queryType,		IPC_RPC_INPUT_TERM_PATTERN,
                           resultLength		, (void *)result,			IPC_RPC_EOF_TERM_PATTERN);


    return ret;
}
#endif //- __SIM_HOT_SWAP_SUPPORT__

/*************************************************************************
* FUNCTION
*  IPC_RPC_GPIO_GetValue
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : Query PIN value of specifed GPIO
*
* PARAMETERS
*  GPIONumber - Number of GPIO to query.
*  GPIOValue  - GPIO value.
* RETURNS
*  RPC Status
*
*************************************************************************/
kal_int32 IPC_RPC_GPIO_GetValue(kal_uint32 GPIONumber, kal_uint32 *GPIOValue)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_GPIO_GETVALUE_OP, 
                           sizeof(kal_uint32), (void*)&GPIONumber, IPC_RPC_INPUT_TERM_PATTERN,
                           sizeof(kal_uint32), (void*)GPIOValue,   IPC_RPC_EOF_TERM_PATTERN);

    return ret;
}

/*************************************************************************
* FUNCTION
*  IPC_RPC_ADC_GetValue
*
* DESCRIPTION
*  This function use to handle control channel messages from AP side
*  major information : Query channel value of specifed ADC
*
* PARAMETERS
*  ADCNumber - Number of ADC to query.
*  ADCValue  - ADC value.
* RETURNS
*  RPC Status
*
*************************************************************************/
kal_int32 IPC_RPC_ADC_GetValue(kal_uint32 ADCNumber, kal_uint32 *ADCValue)
{
    kal_int32 ret;

    ret =  IPC_RPC_Wrapper(IPC_RPC_ADC_GETVALUE_OP, 
                           sizeof(kal_uint32), (void*)&ADCNumber, IPC_RPC_INPUT_TERM_PATTERN,
                           sizeof(kal_uint32), (void*)ADCValue, IPC_RPC_EOF_TERM_PATTERN);

    return ret;
}

#endif /* __MODEM_CCCI_EXIST__ */
