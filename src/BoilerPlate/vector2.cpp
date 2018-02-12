#include "vector2.h"

namespace Engine
{

	namespace Math
	{

		Vector2 Vector2::origin = Vector2();

		Vector2::Vector2()
			: m_x(0.0f)
			, m_y(0.0f)
			, m_lenght(0.0f)
		{}


		Vector2::Vector2(float x, float y)
			: m_x(x)
			, m_y(y)
			, m_lenght(0.0f)
		{
			Lenght();
		}



		Vector2::Vector2(float uniform)
			: m_x(uniform)
			, m_y(uniform)
			, m_lenght(0.0f)
		{
			Lenght();
		}

		float Vector2::Lenght() const
		{
			return std::sqrt(m_x * m_x + m_y * m_y);
		}

		float Vector2::SquaredLenght() const
		{
			return m_x * m_x + m_y * m_y;
		}



		Vector2 Vector2::Normalize()
		{
			Lenght();

			float inverseScale = 1.0f / m_lenght;
			m_x *= inverseScale;
			m_y *= inverseScale;
			return m_lenght;
		}




		Vector2 & Vector2::operator=(const Vector2 & rhs)
		{
			// TODO: insert return statement here
			if (this == &rhs)
			{
				return *this;
			}
			m_x = rhs.m_x;
			m_y = rhs.m_y;

			return *this;



		}

		Vector2 & Vector2::operator+=(const Vector2 & rhs)
		{
			m_x = m_x + rhs.m_x;
			m_y = m_y + rhs.m_y;

			return *this;
		}



		Vector2 & Vector2::operator-=(const Vector2 & rhs)
		{
			m_x = m_x - rhs.m_x;
			m_y = m_y - rhs.m_y;

			return *this;
		}




		Vector2 & Vector2::operator*=(const Vector2 & rhs)
		{
			m_x = m_x * rhs.m_x;
			m_y = m_y * rhs.m_y;

			return *this;
		}



		Vector2 & Vector2::operator/=(const Vector2 & rhs)
		{
			if (rhs.m_x == 0) throw "Division by zero is not defined";
			if (rhs.m_y == 0) throw "Division by zero is not defined";

			m_x = m_x / rhs.m_x;
			m_y = m_y / rhs.m_y;

			return *this;
		}




		Vector2 Vector2::operator+(const Vector2 & rhs) const
		{
			Vector2 sum;

			sum.m_x = m_x + rhs.m_x;
			sum.m_y = m_y + rhs.m_y;

			return sum;
		}



		Vector2 Vector2::operator-(const Vector2 & rhs) const
		{
			Vector2 sub;

			sub.m_x = m_x - rhs.m_x;
			sub.m_y = m_y - rhs.m_y;

			return sub;
		}



		Vector2 Vector2::operator*(const Vector2 & rhs) const
		{
			Vector2 scaled;

			scaled.m_x = m_x * rhs.m_x;
			scaled.m_y = m_y * rhs.m_y;

			return scaled;
		}



		Vector2 Vector2::operator/(const Vector2 & rhs) const
		{
			Vector2 inverseScaled;

			inverseScaled.m_x = m_x / rhs.m_x;
			inverseScaled.m_y = m_y / rhs.m_y;

			return inverseScaled;
		}



		bool Vector2::operator==(const Vector2 & rhs) const
		{
			return m_x == rhs.m_x && m_y == rhs.m_y;
		}



		bool Vector2::operator!=(const Vector2 & rhs) const
		{
			return m_x != rhs.m_x || m_y != rhs.m_y;
		}



		Vector2 operator*(float scaledUnit, const Vector2 &rhs)
		{
			Vector2 scaled;

			scaled.m_x = scaledUnit * rhs.m_x;
			scaled.m_y = scaledUnit * rhs.m_y;

			return scaled;
		}

		Vector2 operator*(const Vector2 &lhs, float scaleUnit)
		{
			Vector2 scaled;

			scaled.m_x = scaleUnit * lhs.m_x;
			scaled.m_y = scaleUnit * lhs.m_y;

			return scaled;
		}
	}
}