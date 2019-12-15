#pragma once

#include "J118/Packet.h"

namespace J118
{

	class IPCallback
	{
	public:
		void onRecieve(Packet* packet);
	};

}
