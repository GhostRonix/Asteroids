#include "vector4.h"



namespace Engine
{

	namespace Math
	{
		Vector4 Vector4::origin = Vector4();

		Vector4::Vector4()
			: m_x(0.0f)
			, m_y(0.0f)
			, m_z(0.0f)
			, m_w(0.0f)
			, m_lenght(0)
		{}


		Vector4::Vector4(float x, float y, float z, float w)
			: m_x(x)
			, m_y(y)
			, m_z(z)
			, m_w(w)
			, m_lenght(0.0f)
		{
			Lenght();
		}


		Vector4::Vector4(const Vector2& vec2)
			: m_x(vec2.m_x)
			, m_y(vec2.m_y)
			, m_z(0.0f)
			, m_w(0.0f)
			, m_lenght(0.0f)
		{
			Lenght();
		}



		Vector4::Vector4(const Vector3& vec3)
			: m_x(vec3.m_x)
			, m_y(vec3.m_y)
			, m_z(vec3.m_z)
			, m_w(0.0f)
			, m_lenght(0.0f)
		{
			Lenght();
		}

		float Vector4::Lenght() const
		{
			return std::sqrt(m_x * m_x + m_y * m_y);
		}



		float Vector4::SquaredLenght() const
		{
			return m_x * m_x + m_y * m_y;
		}

		float Vector4::Normalize()
		{
			Lenght();

			float inverseScale = 1.0f / m_lenght;
			m_x *= inverseScale;
			m_y *= inverseScale;
			m_z *= inverseScale;
			m_w *= inverseScale;

			return m_lenght;
		}





		Vector4 & Vector4::operator=(const Vector4& rhs)
		{
			if (this == &rhs)
			{
				return *this;
			}

			m_x = rhs.m_x;
			m_y = rhs.m_y;
			m_z = rhs.m_z;
			m_w = rhs.m_w;

			return *this;
		}


		Vector4 & Vector4::operator+=(const Vector4& rhs)
		{
			m_x = m_x + rhs.m_x;
			m_y = m_y + rhs.m_y;
			m_z = m_z + rhs.m_z;
			m_w = m_w + rhs.m_w;

			return *this;
		}

		Vector4 & Vector4::operator-=(const Vector4& rhs)
		{
			m_x = m_x - rhs.m_x;
			m_y = m_y - rhs.m_y;
			m_z = m_z - rhs.m_z;
			m_w = m_w - rhs.m_w;

			return *this;
		}


		Vector4 & Vector4::operator*=(const Vector4& rhs)
		{
			m_x = m_x * rhs.m_x;
			m_y = m_y * rhs.m_y;
			m_z = m_z * rhs.m_z;
			m_w = m_w * rhs.m_w;

			return *this;
		}

		Vector4 & Vector4::operator/=(const Vector4& rhs)
		{
			if (rhs.m_x == 0) throw "Division by zero is not defined";
			if (rhs.m_y == 0) throw "Division by zero is not defined";
			if (rhs.m_z == 0) throw "Division by zero is not defined";
			if (rhs.m_w == 0) throw "Division by zero is not defined";

			m_x = m_x / rhs.m_x;
			m_y = m_y / rhs.m_y;
			m_z = m_z / rhs.m_z;
			m_w = m_w / rhs.m_w;

			return *this;
		}

		Vector4 Vector4::operator+(const Vector4& rhs) const
		{
			return Vector4(m_x + rhs.m_x, m_y + rhs.m_y, m_z + rhs.m_z, m_w + rhs.m_w);
		}

		Vector4 Vector4::operator-(const Vector4& rhs) const
		{
			return Vector4(m_x - rhs.m_x, m_y - rhs.m_y, m_z - rhs.m_z, m_w - rhs.m_w);
		}


		Vector4 Vector4::operator*(const Vector4& rhs) const
		{
			return Vector4(m_x * rhs.m_x, m_y * rhs.m_y, m_z * rhs.m_z, m_w * rhs.m_w);
		}



		Vector4 Vector4::operator/(const Vector4& rhs) const
		{
			if (rhs.m_x == 0) throw "Division by zero is not defined";
			if (rhs.m_y == 0) throw "Division by zero is not defined";
			if (rhs.m_z == 0) throw "Division by zero is not defined";
			if (rhs.m_w == 0) throw "Division by zero is not defined";

			return Vector4(m_x / rhs.m_x, m_y / rhs.m_y, m_z / rhs.m_z, m_w / rhs.m_w);
		}

		bool Vector4::operator==(const Vector4& rhs) const
		{
			return m_x == rhs.m_x && m_y == rhs.m_y && m_z == rhs.m_z && m_w == rhs.m_w;
		}




		bool Vector4::operator!=(const Vector4& rhs) const
		{
			return m_x != rhs.m_x || m_y != rhs.m_y || m_z != rhs.m_z || m_w != rhs.m_w;
		}

		Vector4 operator*(float scaleUnit, const Vector4& rhs)
		{
			return Vector4(scaleUnit * rhs.m_x, scaleUnit * rhs.m_y, scaleUnit * rhs.m_z, scaleUnit * rhs.m_w);
		}




		Vector4 operator*(const Vector4& lhs, float scaleUnit)
		{
			return Vector4(scaleUnit * lhs.m_x, scaleUnit * lhs.m_y, scaleUnit * lhs.m_z, scaleUnit * lhs.m_w);
		}
	}
}