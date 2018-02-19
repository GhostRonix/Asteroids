#pragma once

#include  "vector2.h"

namespace Asteroids
{
	class Entity
	{
	public:

		/*Public Functions Declaritions*/

		Entity(int, int);
		
		virtual void Impulse(Engine::Math::Vector2) = 0;
		virtual void Update(float);
		virtual void Render() = 0;
		void         Edge(float, float);

		inline Engine::Math::Vector2 GetPosition() { return m_position; }



		/*Protected Members*/

	protected:

		void MinMaxCalculation (int, int);
		Engine::Math::Vector2  m_position;
		Engine::Math::Vector2  m_velocity;

		float m_mass;
		float m_radio;

		//Max wh
		float m_maxwidth;
		float m_maxheight;

		//Min wh

		float m_minwidth;
		float m_minheight;

		
		~Entity();
	};
}
