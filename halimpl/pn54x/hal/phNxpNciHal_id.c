/*
 * Copyright (C) 2017 The MoKee Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <phNxpLog.h>
#include <phNxpNciHal.h>
#include <phNxpNciHal_Adaptation.h>

/******************************************************************************
 * Function         phNxpNciHal_set_uid
 *
 * Description      Set UID for NFCID emulation.
 *
 * Returns          0 if successful
 *
 ******************************************************************************/
int phNxpNciHal_set_uid(uint16_t data_len, const uint8_t *p_data)
{
    NFCSTATUS status = NFCSTATUS_FAILED;

    NXPLOG_NCIHAL_D("%s: %x %x %x %x", __FUNCTION__,
            p_data[0], p_data[1], p_data[2], p_data[3]);

    return NFCSTATUS_SUCCESS;
}
