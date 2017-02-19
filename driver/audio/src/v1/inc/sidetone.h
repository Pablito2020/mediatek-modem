#ifndef _SIDETONE_H
#define _SIDETONE_H

#if ((defined(MT6592) || defined(MT6571)) && defined(__SMART_PHONE_MODEM__))
#define SMART_PHONE_HW_SIDETONE_SUPPORT 1
#else //((defined(MT6589) || defined(MT6572) || defined(MT6582) ) using sw sidetone
#define SMART_PHONE_HW_SIDETONE_SUPPORT 0
#endif

// ----------------------------------------------------------------------------
//=========================== call from spc_drv.c ============================
void SIDETONE_UpdateStart(void);
void SIDETONE_UpdateStop(void);

/**
	@vol: value from ap
*/
void SIDETONE_SetExtStVolume(kal_uint16 vol);


//=============================================================================

/**
	Please use this function during DSP power on. (The function may access sherif)
	@on: ture for turning on, false for turing off.
*/
void SIDETONE_TurnSwSidetoneOn(kal_bool on);


void SIDETONE_Init(void);

#endif //_SIDETONE_H

