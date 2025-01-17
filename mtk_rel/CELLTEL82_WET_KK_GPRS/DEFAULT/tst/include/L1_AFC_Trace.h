#ifndef L1TRC_L1_AFC_DEF_H
#define L1TRC_L1_AFC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1_Multi_Afc_Query_Msg(v1)  (unsigned char)(v1+0)
#define L1_Multi_Afc_rat(v1)  (unsigned char)(v1+8)
#define L1_Multi_Afc_mode(v1)  (unsigned char)(v1+13)
#define L1_Multi_Afc_Notify_Msg(v1)  (unsigned char)(v1+17)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_Update_Mode(v1, v2, v3, v4, v5) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x000F, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Update_Mode(v1, v2, v3, v4, v5)
#endif

#define L1_Trc_Multi_AFC_Update_Mode_NOFLTR(v0, v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_2S(0x000F, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)))

#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_Current_Mode(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x010F, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Current_Mode(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#define L1_Trc_Multi_AFC_Current_Mode_NOFLTR(v0, v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_3_DATA(TRC_MERGE_2S(0x010F, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trc_Multi_AFC_Query_Mode(v1, v2, v3, v4, v5, v6) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x020F, (short)(v1)), TRC_MERGE_1S2C((short)(v4), (unsigned char)(v2), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), (unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Query_Mode(v1, v2, v3, v4, v5, v6)
#endif

#define L1_Trc_Multi_AFC_Query_Mode_NOFLTR(v0, v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x020F, (short)(v1)), TRC_MERGE_1S2C((short)(v4), (unsigned char)(v2), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), (unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trc_Multi_AFC_Query_Dac(v1, v2, v3, v4, v5, v6) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x030F, (short)(v1)), TRC_MERGE_2S((short)(v4), (short)(v6)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v5), TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Query_Dac(v1, v2, v3, v4, v5, v6)
#endif

#define L1_Trc_Multi_AFC_Query_Dac_NOFLTR(v0, v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x030F, (short)(v1)), TRC_MERGE_2S((short)(v4), (short)(v6)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v5), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trc_Multi_AFC_Query_Latest_Owner(v1, v2, v3) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x040F, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Query_Latest_Owner(v1, v2, v3)
#endif

#define L1_Trc_Multi_AFC_Query_Latest_Owner_NOFLTR(v0, v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x040F, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_ControlMode_Switch(v1, v2, v3) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x050F, (short)(v1)), TRC_MERGE_1S2C((short)(v3), (unsigned char)(v2), TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_ControlMode_Switch(v1, v2, v3)
#endif

#define L1_Trc_Multi_AFC_ControlMode_Switch_NOFLTR(v0, v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x050F, (short)(v1)), TRC_MERGE_1S2C((short)(v3), (unsigned char)(v2), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1_Trc_Multi_AFC_Dbg_Info(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(L1_AFC_Trace_Filter[0]==1 && (L1_AFC_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x060F, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)));\
} while(0)
#else
	#define L1_Trc_Multi_AFC_Dbg_Info(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#define L1_Trc_Multi_AFC_Dbg_Info_NOFLTR(v0, v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_5_DATA(TRC_MERGE_2S(0x060F, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char L1_AFC_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_L1_Trc_Multi_AFC_Update_Mode(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_L1_Trc_Multi_AFC_Current_Mode(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9);
void L1TRC_Send_L1_Trc_Multi_AFC_Query_Mode(short v1, unsigned char v2, unsigned char v3, short v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_L1_Trc_Multi_AFC_Query_Dac(short v1, unsigned char v2, unsigned char v3, short v4, unsigned char v5, short v6);
void L1TRC_Send_L1_Trc_Multi_AFC_Query_Latest_Owner(short v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_L1_Trc_Multi_AFC_ControlMode_Switch(short v1, unsigned char v2, short v3);
void L1TRC_Send_L1_Trc_Multi_AFC_Dbg_Info(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9);

void Set_L1_AFC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1_AFC()	(L1_AFC_Trace_Filter[0]==1)
#define ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()	(ChkL1ModFltr_L1_AFC()&&((L1_AFC_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()	(ChkL1ModFltr_L1_AFC()&&((L1_AFC_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Update_Mode()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Current_Mode()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Query_Mode()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Query_Dac()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Query_Latest_Owner()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_L()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_ControlMode_Switch()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()
#define ChkL1MsgFltr_L1_Trc_Multi_AFC_Dbg_Info()	ChkL1ClsFltr_L1_AFC_Multi_afc_dbg_H()


#endif
