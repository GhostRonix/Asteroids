#pragma once
#ifndef _ENTITY_H_
#define _ENTITY_H_

#include "Vector2.h"

namespace Asteroids
{
	class Entity
	{
	public:
		/* =============================================================
		* PUBLIC FUNCTIONS
		* ============================================================= */
		Entity(int, int);
		virtual void ApplyImpulse(Engine::Math::Vector2) = 0;
		virtual void Update(float);
		virtual void Render() = 0;
		void Teleport(float, float);
		inline Engine::Math::Vector2 GetPosition() { return m_position; }
	protected:
		/* =============================================================
		* MEMBERS
		* ============================================================= */
		void CalcMinMax(int, int);
		Engine::Math::Vector2					 m_position;
		Engine::Math::Vector2					 m_velocity;
		float									 m_mass;
		float									 m_radius;
		float									 m_maxWidth;
		float									 m_minWidth;
		float									 m_maxHeight;
		float									 m_minHeight;
	};
}

#endif // !_ENTITY_H_
