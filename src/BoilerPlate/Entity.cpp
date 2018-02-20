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
		CalcMinMax(width, height);
	}

	void Entity::CalcMinMax(int width, int height)
	{
		// TODO: RR: Ewww! Move this out!
		float halfWidth = width / 2.0f;
		float halfHeight = height / 2.0f;

		m_maxWidth = halfWidth;
		m_minWidth = -halfWidth;

		m_maxHeight = halfHeight;
		m_minHeight = -halfHeight;
	}

	void Entity::Update(float deltaTime)
	{
		m_position.m_x += m_velocity.m_x * static_cast<float>(deltaTime);
		m_position.m_y += m_velocity.m_y * static_cast<float>(deltaTime);

		m_position.m_x = wrap(m_position.m_x, m_minWidth, m_maxWidth);
		m_position.m_y = wrap(m_position.m_y, m_minHeight, m_maxHeight);
	}

	void Entity::Teleport(float newX, float newY)
	{
		m_position.m_x = newX;
		m_position.m_y = newY;
	}
}