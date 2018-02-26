#pragma once

#ifndef _ASTEROID_H_
#define _ASTEROID_H_

#include <vector>

#include "Entity.h"
#include "Vector2.h"

namespace Asteroids
{
	class Asteroid : public Entity
	{
	public:
		/* =============================================================
		* ENUMERATORS
		* ============================================================= */
		struct AsteroidSize
		{
			enum Size
			{
				BIG = 0,
				MEDIUM = 1,
				SMALL = 2,
			};
		};

		/* =============================================================
		* PUBLIC FUNCTIONS
		* ============================================================= */
		Asteroid(AsteroidSize::Size, int, int);
		void ApplyImpulse(Engine::Math::Vector2) override;
		void Update(float);
		void Render() override;
		AsteroidSize::Size					  GetSize();
	private:
		std::vector<Engine::Math::Vector2>    m_points;
		AsteroidSize::Size					  m_size;
		int									  m_sizeFactor;
		float								  m_angle;
		float								  m_rotation;
	};
}

#endif // !_ASTEROID_H_