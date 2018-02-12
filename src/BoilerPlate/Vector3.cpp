#include "vector3.h"




namespace Engine

{
	namespace Math
	{

		Vector3 Vector3::origin = Vector3();

		Vector3::Vector3()
			: m_x(0.0f)
			, m_y(0.0f)
			, m_z(0.0f)
			, m_lenght(0)
		{}


		Vector3::Vector3(float uniform)
			: m_x(uniform)
			, m_y(uniform)
			, m_z(uniform)
			, m_lenght(0.0f)
		{
			Lenght();
		}



		Vector3::Vector3(float x, float y, float z)
			: m_x(x)
			, m_y(y)
			, m_z(z)
			, m_lenght(0.0f)
		{
			Lenght();
		}



		Vector3::Vector3(const Vector2& vec2)
			: m_x(vec2.m_x)
			, m_y(vec2.m_y)
			, m_z(0.0f)
			, m_lenght(0.0f)
		{
			Lenght();
		}

		float Vector3::Lenght() const
		{
			return std::sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
		}



		float Vector3::SquaredLenght() const
		{
			return m_x * m_x + m_y * m_y + m_z * m_z;
		}



		Vector3 Vector3::Normalize()
		{
			Lenght();

			float inverseScale = 1.0f / m_lenght;
			m_x *= inverseScale;
			m_y *= inverseScale;
			m_z *= inverseScale;

			return m_lenght;
		}




		Vector3 & Vector3::operator=(const Vector3 & rhs)
		{
			if (this == &rhs)
			{
				return *this;
			}

			m_x = rhs.m_x;
			m_y = rhs.m_y;
			m_z = rhs.m_z;

			return *this;
		}



		Vector3 & Vector3::operator+=(const Vector3 & rhs)
		{
			m_x = m_x + rhs.m_x;
			m_y = m_y + rhs.m_y;
			m_z = m_z + rhs.m_z;

			return *this;
		}




		Vector3 & Vector3::operator-=(const Vector3 & rhs)
		{
			m_x = m_x - rhs.m_x;
			m_y = m_y - rhs.m_y;
			m_z = m_z - rhs.m_z;

			return *this;
		}

		Vector3 & Vector3::operator*=(const Vector3 & rhs)
		{
			m_x = m_x * rhs.m_x;
			m_y = m_y * rhs.m_y;
			m_z = m_z * rhs.m_z;

			return *this;
		}




		Vector3 & Vector3::operator/=(const Vector3 & rhs)
		{
			if (rhs.m_x == 0) throw "Division by zero is not defined";
			if (rhs.m_y == 0) throw "Division by zero is not defined";
			if (rhs.m_z == 0) throw "Division by zero is not defined";

			m_x = m_x / rhs.m_x;
			m_y = m_y / rhs.m_y;
			m_z = m_z / rhs.m_z;

			return *this;
		}



		Vector3 Vector3::operator+(const Vector3 & rhs) const
		{
			return Vector3(m_x + rhs.m_x, m_y + rhs.m_y, m_z + rhs.m_z);
		}

		Vector3 Vector3::operator-(const Vector3 & rhs) const
		{
			return Vector3(m_x - rhs.m_x, m_y - rhs.m_y, m_z - rhs.m_z);
		}



		Vector3 Vector3::operator*(const Vector3 & rhs) const
		{
			return Vector3(m_x * rhs.m_x, m_y * rhs.m_y, m_z * rhs.m_z);
		}

		Vector3 Vector3::operator/(const Vector3 & rhs) const
		{
			if (rhs.m_x == 0) throw "Division by zero is not defined";
			if (rhs.m_y == 0) throw "Division by zero is not defined";
			if (rhs.m_z == 0) throw "Division by zero is not defined";

			return Vector3(m_x / rhs.m_x, m_y / rhs.m_y, m_z / rhs.m_z);
		}




		bool Vector3::operator==(const Vector3 & rhs) const
		{
			return m_x == rhs.m_x && m_y == rhs.m_y && m_z == rhs.m_z;
		}

		bool Vector3::operator!=(const Vector3 & rhs) const
		{
			return m_x != rhs.m_x || m_y != rhs.m_y || m_z != rhs.m_z;
		}



		Vector3 operator*(float scaleUnit, const Vector3 &rhs)
		{
			return Vector3(scaleUnit * rhs.m_x, scaleUnit * rhs.m_y, scaleUnit * rhs.m_z);
		}

		Vector3 operator*(const Vector3 &lhs, float scaleUnit)
		{
			return Vector3(scaleUnit * lhs.m_x, scaleUnit * lhs.m_y, scaleUnit * lhs.m_z);
		}
	}
}