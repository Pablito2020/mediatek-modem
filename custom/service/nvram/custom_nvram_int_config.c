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
 * custom_nvram_config.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   The file contains nvram configuration default value.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef NVRAM_NOT_PRESENT

#include "kal_general_types.h"

#include "nvram_enums.h"            /* NVRAM_CLEAN_FOLDER_FACTORY */
#include "custom_nvram_int_config.h"
#include "nvram_data_items.h"

/*
 * Restore factory begin
 */


/*****************************************************************************
 * FUNCTION
 *  nvram_custom_get_max_record_size
 * DESCRIPTION
 *  Return the maximum record size, every nvram lid record size cannot bigger than this
 * PARAMETERS
 * RETURNS
 *  maximum record size
 *****************************************************************************/
kal_uint32 nvram_custom_max_record_size(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    return NVRAM_CUSTOM_CFG_MAX_RECORD_SIZE;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_custom_lock_pattern
 * DESCRIPTION
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
kal_bool nvram_custom_lock_status(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if (NVRAM_CUSTOM_CFG_DEFAULT_LOCK_STATUS == __UNLOCKED__)
    return KAL_FALSE;
#else
    return KAL_TRUE;
#endif
}

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_config
 * DESCRIPTION
 *  Pre-process nvram data items at nvram task init.
 *  This function will be always invoked at nvram task init, right after NVRAM initialization.
 *  User can pre-process nvram data items via using NVRMA external API here.
 *     nvram_external_write_data()
 *     nvram_external_read_data()
 * PARAMETERS
 *  none
 * RETURNS
 *  none
 *****************************************************************************/
void custom_nvram_config(void)
{
    /*
        Example:
            Reading customer defined setting file through File System API,
            and write supported band settings in NVRAM_EF_RAC_PREFERENCE_LID.

        Example Code:

            #include "fs_gprot.h"   // File syste API prototype

            if (FS_GetAttributes("Z:\\custom.ini") >= 0)
            {
                FS_HANDLE fh;
                kal_uint32 data;
                kal_uint32 readbytes;
                kal_int32 result;

                fh = FS_Open("Z:\\custom.ini", FS_READ_ONLY);
                if (fh > 0)
                {
                    result = FS_Read(fh, &data, sizeof(kal_uint32), &readbytes);
                    if (result >= 0)
                    {
                        kal_uint8 buf[NVRAM_EF_RAC_PREFERENCE_SIZE];

                        // Read current settings in NVRAM
                        nvram_external_read_data(
                                NVRAM_EF_RAC_PREFERENCE_LID,
                                0,
                                &buf[0],
                                NVRAM_EF_RAC_PREFERENCE_SIZE);

                        if (data==1)
                        {
                            buf[0] |=  0x80; // enable __GSM850__
                        }
                        else
                        {
                            buf[0] &= ~0x80; // disable __GSM850__
                        }

                        // Write new settings to NVRAM
                        nvram_external_write_data(
                            NVRAM_EF_RAC_PREFERENCE_LID,
                            0,
                            &buf[0],
                            NVRAM_EF_RAC_PREFERENCE_SIZE);
                    }
                    else
                    {
                        // error handling, read error
                    }

                    FS_Close(fh);

                    // The custom file is designed as used-once, the file.
                    FS_Delete("Z:\\custom.ini");
                }
                else
                {
                    // error handling, setting file open error.
                }
            }

   */
}

#endif /* NVRAM_NOT_PRESENT */
