/***********************************************************************************************************************
*                                                                                                                      *
* BACNET-TOOLS v0.1                                                                                                    *
*                                                                                                                      *
* Copyright (c) 2019 Andrew D. Zonenberg                                                                               *
* All rights reserved.                                                                                                 *
*                                                                                                                      *
* Redistribution and use in source and binary forms, with or without modification, are permitted provided that the     *
* following conditions are met:                                                                                        *
*                                                                                                                      *
*    * Redistributions of source code must retain the above copyright notice, this list of conditions, and the         *
*      following disclaimer.                                                                                           *
*                                                                                                                      *
*    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the       *
*      following disclaimer in the documentation and/or other materials provided with the distribution.                *
*                                                                                                                      *
*    * Neither the name of the author nor the names of any contributors may be used to endorse or promote products     *
*      derived from this software without specific prior written permission.                                           *
*                                                                                                                      *
* THIS SOFTWARE IS PROVIDED BY THE AUTHORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED   *
* TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL *
* THE AUTHORS BE HELD LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES        *
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR       *
* BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT *
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       *
* POSSIBILITY OF SUCH DAMAGE.                                                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

#ifndef BVLLResultMessage_h
#define BVLLResultMessage_h

/**
	@brief A BACnet/IP "Result" message
 */
class BVLLResultMessage
{
public:
	BVLLResultMessage();
	BVLLResultMessage(unsigned char* buf, size_t len);
	virtual ~BVLLResultMessage()

	enum BVLLResultCode
	{
		BVLL_RESULT_SUCCESS				= 0x0000,
		BVLL_WRITE_BROADCAST_NAK		= 0x0010,
		BVLL_READ_BROADCAST_NAK			= 0x0020,
		BVLL_REGISTER_FOREIGN_NAK		= 0x0030,
		BVLL_READ_FOREIGN_NAK			= 0x0040,
		BVLL_DELETE_FOREIGN_NAK			= 0x0050,
		BVLL_DISTRIBUTE_BROADCAST_NAK	= 0x0060
	};

	uint16_t	m_result;
};

#endif
