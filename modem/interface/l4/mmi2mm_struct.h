/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *	mmi2mm_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for struct definition between MM and MMI/L4.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : mmi2mm_struct.h
 *  SYNOPSIS : Functions for encoding/decoding.
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifndef _MMI2MM_STRUCT_H
#define _MMI2MM_STRUCT_H

#include "kal_general_types.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"
#include "ps_public_enum.h"
 #include "kal_public_defs.h"

typedef struct {
    LOCAL_PARA_HDR
    #if 0
/* under construction !*/
/* under construction !*/
    #else
    kal_uint8   imei[9];
    kal_uint8   imei_svn;
    #if defined(__GEMINI__) && defined(__SET_IMEI_BY_PLMN__)
    kal_uint8   slot1_imei[9];
    #endif
    #endif
    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
    kal_uint8 packed_drx_para[2];    
    plmn_selection_mode_enum plmn_sel_mode; 
    kal_uint8 requested_gsm_band;
    kal_uint8 requested_umts_fdd_band[SIZE_OF_UMTS_BAND];
    domain_id_enum prefered_service;
    rat_enum rplmn_rat;
    kal_uint8 num_of_eq_plmn;
    plmn_id_struct eq_plmn[MAX_NUM_EQ_PLMN];
    kal_uint8 nvram_locigprs[14];
    rat_enum prefered_rat;
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
    gprs_transfer_preference_enum prefer; //mtk02475: gprs_transfer_preference
#endif
#ifdef __HSPA_PREFERENCE_SETTING__
    hspa_preference_enum hspa_preference; //mtk02475: hspa_preference
#endif
#ifdef __TC02_SECURITY_REQUIREMENT__
    kal_uint8 nvram_imsi_loci_gloci[MAX_LEN_OF_IMSI_LOCI_GLOCI]; //mtk02475: for man-in-middle-attack prevention
#endif
#if defined (__DYNAMIC_ROAMING_SUPPORT__) || defined (UNIT_TEST)
    kal_bool is_supporting_roaming;
#endif
#ifdef __MM_INTEGRITY_PREF__
    kal_bool is_disable_integrity_check;
#endif
	kal_bool disable_international_roaming_support;
	kal_bool disable_national_roaming_support;
	kal_bool disable_hhplmn_search_support;
    kal_bool enable_roaming_broker_support;
} gmmreg_init_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 band;
} gmmreg_band_sel_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_selection_mode_enum plmn_sel_mode;
} gmmreg_sel_mode_req_struct;

typedef struct {
    kal_uint8 timer_unit;
    kal_uint8 timer_value;
} gmmreg_timer_struct;

#ifdef __MONITOR_PAGE_DURING_TRANSFER__
typedef struct {
    LOCAL_PARA_HDR
    gprs_transfer_preference_enum prefer;
} gmmreg_set_gprs_transfer_preference_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum attach_type;   /* CS-only, PS-only or both CS/PS*/
    kal_uint8 ready_timer_p; /* true if ready timer value present*/
    gmmreg_timer_struct ready_timer_value; /* default ready timer value*/
    kal_uint8 att_id;        /* Johnny: 3G RAC, for attach_req and detach_req using */
    mm_user_search_type_enum search_type;   //mm_user_search_type_enum    
    kal_bool is_follow_on_request;
} gmmreg_attach_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum detach_type; /* CS-only, PS-only or both CS/PS */
    kal_bool power_off;   /* mobile shut down or not */
    kal_uint8 att_id;      /* Johnny: 3G RAC, for attach_req and detach_req using */	
} gmmreg_detach_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    plmn_reselection_enum plmn_search_mode;       /* plmn_reselection_enum */
	 //kal_bool is_gprs_required; /* John Tang 2004/03/10: For at+cops = 2 then at+cops= 0 case. */
    plmn_id_rat_struct selected_plmn; /* Selected PLMN */   
#ifdef __CSG_SUPPORT__
    kal_bool is_manual_csg_sel;
    kal_uint32 csg_id;
#endif
    rat_enum prefer_rat;   //  0:default ,  1:GSM ,   2:UMTS
    kal_bool from_l4c; 
    kal_uint16 factory_mode_arfcn; //0xFFFF means invalid arfcn, /* 20081110 mtk00714, for fast camp on test machine */
} gmmreg_plmn_search_req_struct;

#ifdef __CSG_SUPPORT__
typedef struct {
    LOCAL_PARA_HDR
    plmn_id_rat_struct plmn_id_rat;
} gmmreg_csg_list_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    rat_enum rat_mode;              /* RATCM_RAT_ENUM*/    
} gmmreg_set_rat_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_supporting_roaming;  
	kal_bool disable_international_roaming_support;
	kal_bool disable_national_roaming_support;
	kal_bool disable_hhplmn_search_support;
} gmmreg_set_roaming_mode_req_struct;

#ifdef __DYNAMIC_BAND_SEL__
typedef struct {
    LOCAL_PARA_HDR
    band_selection_enum gsm_band; /* refer to band_selection_enum value*/ 
    kal_bool is_gsm_band_present;  
    kal_uint8 umts_fdd_band[SIZE_OF_UMTS_BAND];    /* 3G band change */
    kal_bool is_umts_band_present; /* 3G band change */
}gmmreg_set_preferred_band_req_struct; 
#endif

typedef struct {
    LOCAL_PARA_HDR
    kal_bool force_send_SCRI;
}gmmreg_end_ps_data_session_req_struct;

#ifdef __GEMINI__ //20071211
typedef struct {
    LOCAL_PARA_HDR
    sim_config_status_enum sim_config_status;
    sim_insert_status_enum sim_insert_status;
}gmmreg_sim_status_update_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    rat_enum  prefer_rat;
}gmmreg_set_prefer_rat_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_mode_enum  mode;
    susp_resu_action_enum action;
    kal_uint8            susp_id;
}gmmreg_susp_resu_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 imei[9];
} gmmreg_set_imei_req_struct;

#if defined (__MMDC__) && defined (__MMDC_TYPE1_DUAL_LOAD__)
typedef struct {
    kal_uint8 ref_count;
    kal_uint16 msg_len;         //20120215 mtk80370: please DO NOT change the order of element in this struct
    //module_type peer_module;  /*20120229 mtk80370: No needed */
    emm_proc_enum mm_peer_procedure;
    mm_cause_enum mm_peer_reject_cause;
    plmn_id_struct mm_peer_plmn_id;
}gmmreg_peer_reject_req_struct;

#endif

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_update_needed;
    kal_uint8 ue_oplmn_ver[2];
    kal_uint16 no_oplmn_entry;
    kal_uint8 *oplmn_data;  
}gmmreg_ue_oplmn_update_req_struct;
#endif 

