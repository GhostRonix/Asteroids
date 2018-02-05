#pragma once
#ifndef _SHIPMODELCONFIG_H_
#define _SHIPMODELCONFIG_H_

//
#include <vector>

//
#include "Vector2.h"

namespace Asteroids
{
	namespace Utilities
	{
		class Configuration
		{
		public:
			std::vector<std::vector<Engine::Math::Vector2>> LoadModels() const;
		};
	}
}

#endif // !_SHIPMODELCONFIG_H_
