#include "Entity.h"




namespace Asteroids
 {
	inline float wrap(float axis, float min, float max)
		 {
	    if (axis < min) return max - (min - axis);
		if (axis > max) return min + (axis - max);
		return axis;
		}
	
		Entity::Entity(int width, int height)
		 : m_mass(1.0f)
		 {
			MinMaxCalculation(width, height);
		}
	
		void Entity::MinMaxCalculation(int width, int height)
		 {
				
			float h_width = width / 2.0f;
		float h_height = height / 2.0f;

		//Max
		
		m_maxwidth = h_width;
		m_maxheight= h_height;

		//Min

		m_minwidth = -h_width;
		m_minheight = -h_height
		}

		void Entity::Update(float deltaTime)
		 {
		m_position.m_x += m_velocity.m_x * static_cast<float>(deltaTime);
		m_position.m_y += m_velocity.m_y * static_cast<float>(deltaTime);
		
			m_position.m_x = wrap(m_position.m_x, m_minwidth, m_maxwidth);
		m_position.m_y= wrap(m_position.m_y, m_minheight, m_maxheight);
		}
	
		void Entity::Edge(float newX, float newY)
		 {
		m_position.m_x = newX;
		m_position.m_y = newY;
		}
	}