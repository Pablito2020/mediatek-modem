#ifndef L1TRC_L1D_PRI_DEF_H
#define L1TRC_L1D_PRI_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_SM_Handler(v1)  (unsigned char)(v1+2)
#define L1D_Str_CCH(v1)  (unsigned char)(v1+6)
#define L1D_Str_AGPS(v1)  (unsigned char)(v1+9)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPTCHS0FLAGS(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0006, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_DPTCHS0FLAGS(v1, v2)
#endif

#define L1D_Trc_DPTCHS0FLAGS_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0006, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPCCFLAG(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0106, (unsigned char)(v1), (unsigned char)(v2)));\
} while(0)
#else
	#define L1D_Trc_DPCCFLAG(v1, v2)
#endif

#define L1D_Trc_DPCCFLAG_NOFLTR(v0, v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0106, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPNB(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0206, (char)(v1), (unsigned char)(v2)));\
} while(0)
#else
	#define L1D_Trc_DPNB(v1, v2)
#endif

#define L1D_Trc_DPNB_NOFLTR(v0, v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0206, (char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPGSMMODE(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0306, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_DPGSMMODE(v1, v2)
#endif

#define L1D_Trc_DPGSMMODE_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0306, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPTXWIN0PROC(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0406, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_DPTXWIN0PROC(v1, v2)
#endif

#define L1D_Trc_DPTXWIN0PROC_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0406, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPRXWIN0PROC(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0506, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_DPRXWIN0PROC(v1, v2)
#endif

#define L1D_Trc_DPRXWIN0PROC_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0506, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1D_Trc_D2CStopUL() do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0606, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_D2CStopUL()
#endif

#define L1D_Trc_D2CStopUL_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0606, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_D2CFBFound() do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0706, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_D2CFBFound()
#endif

#define L1D_Trc_D2CFBFound_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0706, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_SHARED2MCTL(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0806, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_SHARED2MCTL(v1, v2)
#endif

#define L1D_Trc_SHARED2MCTL_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0806, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_SetChannelCmd(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0906, (unsigned char)(v1), (unsigned char)(v2)));\
} while(0)
#else
	#define L1D_Trc_SetChannelCmd(v1, v2)
#endif

#define L1D_Trc_SetChannelCmd_NOFLTR(v0, v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0906, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_ReportPeriod(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A06, (char)(v1), (char)(v2)));\
} while(0)
#else
	#define L1D_Trc_ReportPeriod(v1, v2)
#endif

#define L1D_Trc_ReportPeriod_NOFLTR(v0, v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A06, (char)(v1), (char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_FCChStage(v1) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x20)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0B06, (char)(v1), TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_FCChStage(v1)
#endif

#define L1D_Trc_FCChStage_NOFLTR(v0) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0B06, (char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_CipherCmd(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x40)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0C06, (unsigned char)(v1), (unsigned char)(v2)));\
} while(0)
#else
	#define L1D_Trc_CipherCmd(v1, v2)
#endif

#define L1D_Trc_CipherCmd_NOFLTR(v0, v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0C06, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_CipherKey(v1, v2, v3, v4, v5, v6) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x40)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x0D06, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)), TRC_MERGE_1S2C((unsigned short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_CipherKey(v1, v2, v3, v4, v5, v6)
#endif

#define L1D_Trc_CipherKey_NOFLTR(v0, v1, v2, v3, v4, v5) TRC_SEND_4_DATA(TRC_MERGE_2S(0x0D06, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)), TRC_MERGE_1S2C((unsigned short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_PDNCON2(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x40)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0E06, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_PDNCON2(v1, v2)
#endif

#define L1D_Trc_PDNCON2_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0E06, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_BCCR(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x40)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0F06, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_BCCR(v1, v2)
#endif

#define L1D_Trc_BCCR_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0F06, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_EVENA1(v1, v2, v3) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[1]&0x80)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1006, (unsigned short)(v2)), TRC_MERGE_1S2C((unsigned short)(v3), (unsigned char)(v1), TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_EVENA1(v1, v2, v3)
#endif

#define L1D_Trc_EVENA1_NOFLTR(v0, v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1006, (unsigned short)(v2)), TRC_MERGE_1S2C((unsigned short)(v3), (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_USF(v1, v2, v3, v4) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x80)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1106, (short)(v2)), TRC_MERGE_1S2C((short)(v4), (unsigned char)(v1), (char)(v3)));\
} while(0)
#else
	#define L1D_Trc_USF(v1, v2, v3, v4)
#endif

#define L1D_Trc_USF_NOFLTR(v0, v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1106, (short)(v2)), TRC_MERGE_1S2C((short)(v4), (unsigned char)(v1), (char)(v3)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_APC_VOLTTEMP(v1, v2, v3) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[3]&0x01)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1206, (char)(v1), TRC_BOXSTER_PAD), (long)(v2), (long)(v3));\
} while(0)
#else
	#define L1D_Trc_APC_VOLTTEMP(v1, v2, v3)
#endif

#define L1D_Trc_APC_VOLTTEMP_NOFLTR(v0, v1, v2) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1206, (char)(v1), TRC_BOXSTER_PAD), (long)(v2), (long)(v3))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_CCH_UL(v1) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1306, (unsigned char)(v1), TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_CCH_UL(v1)
#endif

#define L1D_Trc_CCH_UL_NOFLTR(v0) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1306, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1D_Trc_CCH_UL_DATA(v1, v2, v3, v4, v5) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1406, (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_CCH_UL_DATA(v1, v2, v3, v4, v5)
#endif

#define L1D_Trc_CCH_UL_DATA_NOFLTR(v0, v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1406, (unsigned short)(v3)), TRC_MERGE_2S((unsigned short)(v4), (unsigned short)(v5)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_MaxTime(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x08)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1506, (short)(v2)), TRC_MERGE_4C((char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_MaxTime(v1, v2)
#endif

#define L1D_Trc_MaxTime_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1506, (short)(v2)), TRC_MERGE_4C((char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define L1D_Trc_DurMargin(v1, v2, v3, v4, v5, v6) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x1606, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1D_Trc_DurMargin(v1, v2, v3, v4, v5, v6)
#endif

#define L1D_Trc_DurMargin_NOFLTR(v0, v1, v2, v3, v4, v5) TRC_SEND_4_DATA(TRC_MERGE_2S(0x1606, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm1(v1, v2) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x20)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1706, (unsigned short)(v2)), (unsigned long)(v1));\
} while(0)
#else
	#define L1_Trace_sm1(v1, v2)
#endif

#define L1_Trace_sm1_NOFLTR(v0, v1) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1706, (unsigned short)(v2)), (unsigned long)(v1))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm2(v1, v2, v3, v4, v5) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x20)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1806, (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), (char)(v1), (char)(v2)), TRC_MERGE_4C((char)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
} while(0)
#else
	#define L1_Trace_sm2(v1, v2, v3, v4, v5)
#endif

#define L1_Trace_sm2_NOFLTR(v0, v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1806, (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), (char)(v1), (char)(v2)), TRC_MERGE_4C((char)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm3(v1, v2, v3, v4, v5, v6) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x20)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1906, (unsigned short)(v2)), TRC_MERGE_2S((unsigned short)(v3), (short)(v5)), TRC_MERGE_1S2C((short)(v6), (unsigned char)(v1), (unsigned char)(v4)));\
} while(0)
#else
	#define L1_Trace_sm3(v1, v2, v3, v4, v5, v6)
#endif

#define L1_Trace_sm3_NOFLTR(v0, v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1906, (unsigned short)(v2)), TRC_MERGE_2S((unsigned short)(v3), (short)(v5)), TRC_MERGE_1S2C((short)(v6), (unsigned char)(v1), (unsigned char)(v4)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm4(v1) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x20)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1A06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1));\
} while(0)
#else
	#define L1_Trace_sm4(v1)
#endif

#define L1_Trace_sm4_NOFLTR(v0) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1A06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm5(v1, v2, v3, v4, v5) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[2]&0x20)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x1B06, (short)(v3)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v5));\
} while(0)
#else
	#define L1_Trace_sm5(v1, v2, v3, v4, v5)
#endif

#define L1_Trace_sm5_NOFLTR(v0, v1, v2, v3, v4) TRC_SEND_5_DATA(TRC_MERGE_2S(0x1B06, (short)(v3)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v5))

#if defined(L1_CATCHER)
	#define L1D_Trace_FMResult(v1, v2, v3, v4) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[3]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1C06, (unsigned char)(v1), (unsigned char)(v2)), (unsigned long)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define L1D_Trace_FMResult(v1, v2, v3, v4)
#endif

#define L1D_Trace_FMResult_NOFLTR(v0, v1, v2, v3) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1C06, (unsigned char)(v1), (unsigned char)(v2)), (unsigned long)(v3), (unsigned long)(v4))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_AGPS_LCT_COUNTING(v1, v2, v3) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[3]&0x02)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_1S2C(0x1D06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3));\
} while(0)
#else
	#define L1D_AGPS_LCT_COUNTING(v1, v2, v3)
#endif

#define L1D_AGPS_LCT_COUNTING_NOFLTR(v0, v1, v2) TRC_SEND_4_DATA(TRC_MERGE_1S2C(0x1D06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_AGPS_REPORT(v1, v2, v3, v4) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[3]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1E06, (unsigned char)(v1), (char)(v2)), (unsigned long)(v3), (unsigned long)(v4));\
} while(0)
#else
	#define L1D_AGPS_REPORT(v1, v2, v3, v4)
#endif

#define L1D_AGPS_REPORT_NOFLTR(v0, v1, v2, v3) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1E06, (unsigned char)(v1), (char)(v2)), (unsigned long)(v3), (unsigned long)(v4))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_AGPS_FRC_PARAM(v1, v2, v3) do {\
		if(L1D_PRI_Trace_Filter[0]==1 && (L1D_PRI_Trace_Filter[3]&0x02)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1F06, (char)(v2), TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v3));\
} while(0)
#else
	#define L1D_AGPS_FRC_PARAM(v1, v2, v3)
#endif

#define L1D_AGPS_FRC_PARAM_NOFLTR(v0, v1, v2) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1F06, (char)(v2), TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v3))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char L1D_PRI_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_L1D_Trc_DPTCHS0FLAGS(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_DPCCFLAG(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1D_Trc_DPNB(char v1, unsigned char v2);
void L1TRC_Send_L1D_Trc_DPGSMMODE(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_DPTXWIN0PROC(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_DPRXWIN0PROC(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_D2CStopUL(void);
void L1TRC_Send_L1D_Trc_D2CFBFound(void);
void L1TRC_Send_L1D_Trc_SHARED2MCTL(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_SetChannelCmd(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1D_Trc_ReportPeriod(char v1, char v2);
void L1TRC_Send_L1D_Trc_FCChStage(char v1);
void L1TRC_Send_L1D_Trc_CipherCmd(unsigned char v1, unsigned char v2);
void L1TRC_Send_L1D_Trc_CipherKey(unsigned short v1, unsigned short v2, unsigned short v3, unsigned short v4, unsigned short v5, unsigned short v6);
void L1TRC_Send_L1D_Trc_PDNCON2(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_BCCR(unsigned short v1, unsigned short v2);
void L1TRC_Send_L1D_Trc_EVENA1(unsigned char v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_L1D_Trc_USF(unsigned char v1, short v2, char v3, short v4);
void L1TRC_Send_L1D_Trc_APC_VOLTTEMP(char v1, long v2, long v3);
void L1TRC_Send_L1D_Trc_CCH_UL(unsigned char v1);
void L1TRC_Send_L1D_Trc_CCH_UL_DATA(unsigned char v1, unsigned char v2, unsigned short v3, unsigned short v4, unsigned short v5);
void L1TRC_Send_L1D_Trc_MaxTime(char v1, short v2);
void L1TRC_Send_L1D_Trc_DurMargin(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_L1_Trace_sm1(unsigned long v1, unsigned short v2);
void L1TRC_Send_L1_Trace_sm2(char v1, char v2, unsigned short v3, unsigned short v4, char v5);
void L1TRC_Send_L1_Trace_sm3(unsigned char v1, unsigned short v2, unsigned short v3, unsigned char v4, short v5, short v6);
void L1TRC_Send_L1_Trace_sm4(unsigned long v1);
void L1TRC_Send_L1_Trace_sm5(unsigned char v1, unsigned long v2, short v3, unsigned long v4, unsigned long v5);
void L1TRC_Send_L1D_Trace_FMResult(unsigned char v1, unsigned char v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L1D_AGPS_LCT_COUNTING(unsigned long v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_L1D_AGPS_REPORT(unsigned char v1, char v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_L1D_AGPS_FRC_PARAM(unsigned long v1, char v2, unsigned long v3);

void Set_L1D_PRI_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_PRI()	(L1D_PRI_Trace_Filter[0]==1)
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_H()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_GET_CMD_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_FB_STAGE_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[1]&0x80)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x01)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_DATA_M()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x02)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_DATA_H()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x04)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_MAX_TIME_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x08)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_MARGIN_H()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x10)!=0))
#define ChkL1ClsFltr_L1D_PRI_SleepMode_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x20)!=0))
#define ChkL1ClsFltr_L1D_PRI_FMCalibration_M()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x40)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_USF_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[2]&0x80)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_APC_VOLTTEMP_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[3]&0x01)!=0))
#define ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[3]&0x02)!=0))
#define ChkL1ClsFltr_L1D_PRI_FMCalibration_H()	(ChkL1ModFltr_L1D_PRI()&&((L1D_PRI_Trace_Filter[3]&0x04)!=0))
#define ChkL1MsgFltr_L1D_Trc_DPTCHS0FLAGS()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()
#define ChkL1MsgFltr_L1D_Trc_DPCCFLAG()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()
#define ChkL1MsgFltr_L1D_Trc_DPNB()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()
#define ChkL1MsgFltr_L1D_Trc_DPGSMMODE()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()
#define ChkL1MsgFltr_L1D_Trc_DPTXWIN0PROC()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()
#define ChkL1MsgFltr_L1D_Trc_DPRXWIN0PROC()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()
#define ChkL1MsgFltr_L1D_Trc_D2CStopUL()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_H()
#define ChkL1MsgFltr_L1D_Trc_D2CFBFound()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_L()
#define ChkL1MsgFltr_L1D_Trc_SHARED2MCTL()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_L()
#define ChkL1MsgFltr_L1D_Trc_SetChannelCmd()	ChkL1ClsFltr_L1D_PRI_L1D_GET_CMD_L()
#define ChkL1MsgFltr_L1D_Trc_ReportPeriod()	ChkL1ClsFltr_L1D_PRI_L1D_GET_CMD_L()
#define ChkL1MsgFltr_L1D_Trc_FCChStage()	ChkL1ClsFltr_L1D_PRI_L1D_FB_STAGE_L()
#define ChkL1MsgFltr_L1D_Trc_CipherCmd()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_CipherKey()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_PDNCON2()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_BCCR()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_EVENA1()	ChkL1ClsFltr_L1D_PRI_L1D_UL_L()
#define ChkL1MsgFltr_L1D_Trc_USF()	ChkL1ClsFltr_L1D_PRI_L1D_USF_L()
#define ChkL1MsgFltr_L1D_Trc_APC_VOLTTEMP()	ChkL1ClsFltr_L1D_PRI_L1D_APC_VOLTTEMP_L()
#define ChkL1MsgFltr_L1D_Trc_CCH_UL()	ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_L()
#define ChkL1MsgFltr_L1D_Trc_CCH_UL_DATA()	ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_DATA_H()
#define ChkL1MsgFltr_L1D_Trc_MaxTime()	ChkL1ClsFltr_L1D_PRI_L1D_MAX_TIME_L()
#define ChkL1MsgFltr_L1D_Trc_DurMargin()	ChkL1ClsFltr_L1D_PRI_L1D_MARGIN_H()
#define ChkL1MsgFltr_L1_Trace_sm1()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm2()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm3()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm4()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm5()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1D_Trace_FMResult()	ChkL1ClsFltr_L1D_PRI_FMCalibration_H()
#define ChkL1MsgFltr_L1D_AGPS_LCT_COUNTING()	ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()
#define ChkL1MsgFltr_L1D_AGPS_REPORT()	ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()
#define ChkL1MsgFltr_L1D_AGPS_FRC_PARAM()	ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()


#endif
