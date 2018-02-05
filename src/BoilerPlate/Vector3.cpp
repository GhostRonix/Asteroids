#include "vector3.h"

#include <cmath>

namespace Engine
{
	namespace Math
	{
		vector3::vector3()
			: x(0.0f)
			, y(0.0f)
			, z(0.0f)
			, length(0)
		{}

		vector3::vector3(float uniform)
			: x(uniform)
			, y(uniform)
			, z(uniform)
			, length(0)
		{}

		vector3::vector3(float _x, float _y, float _z)
			: x(_x)
			, y(_y)
			, z(_z)
			, length(0)
		{}

		vector3::vector3(const vector3& other)
			: x(other.x)
			, y(other.y)
			, z(other.z)
			, length(other.length)
		{}

		float vector3::Normalize()
		{
			// Calculating the length
			Length();

			float inverseScale = 1.0f / length;
			x *= inverseScale;
			y *= inverseScale;
			z *= inverseScale;

			return length;
		}

		float vector3::Length()
		{
			float lenSquared = x * x + y * y + z * z;
			if (lenSquared == 0)
			{
				length = 0.0f;
				return length;
			}

			length = std::sqrtf(lenSquared);

			return length;
		}

		float vector3::LengthSquared() const
		{
			float lenSquared = x * x + y * y + z * z;
			if (lenSquared == 0) return 0.0f;

			return lenSquared;
		}

		void vector3::Scale(float scaleUnit)
		{
			x *= scaleUnit;
			y *= scaleUnit;
			z *= scaleUnit;
		}

		float vector3::SetLength(float newLength)
		{
			float oldLen = length;
			float lenSquared = x * x + y * y + z * z;
			if (lenSquared == 0) return 0.0f;

			// Calculating new length
			length = sqrtf(lenSquared);

			float inverseScale = newLength / length;
			x *= inverseScale;
			y *= inverseScale;
			z *= inverseScale;

			return oldLen;
		}
	}
}