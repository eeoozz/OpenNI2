/*****************************************************************************
*                                                                            *
*  OpenNI 2.x Alpha                                                          *
*  Copyright (C) 2012 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of OpenNI.                                              *
*                                                                            *
*  Licensed under the Apache License, Version 2.0 (the "License");           *
*  you may not use this file except in compliance with the License.          *
*  You may obtain a copy of the License at                                   *
*                                                                            *
*      http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*****************************************************************************/
#ifndef __PLAYER_CODEC_FACTORY_H__
#define __PLAYER_CODEC_FACTORY_H__

//---------------------------------------------------------------------------
// Includes
//---------------------------------------------------------------------------
#include "Formats/XnCodec.h"
#include "PlayerSource.h"

namespace oni_file {

//---------------------------------------------------------------------------
// Types
//---------------------------------------------------------------------------
class PlayerCodecFactory
{
public:
	static XnStatus Create(XnCodecID nCodecID, PlayerSource* pSource, XnCodec** ppCodec);
	static void Destroy(XnCodec* pCodec);
};

} // namespace oni_files_player

#endif //__PLAYER_CODEC_FACTORY_H__