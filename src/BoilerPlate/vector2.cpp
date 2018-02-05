#include "Vector2.h"

namespace Engine
{
	namespace Math
	{
		Vector2::Vector2()
		{}
		Vector2::Vector2(float, float)
		{}
		Vector2::Vector2(float)
		{}
		float Vector2::Lenght() const
		{
			return 0.0f;
		}
		float Vector2::SquaredLenght() const
		{
			return 0.0f;
		}
		Vector2 Vector2::Normalize()
		{
			return Vector2();
		}
		Vector2 & Vector2::operator=(const Vector2 & rhs)
		{
			// TODO: insert return statement here
			return ;
		}
		Vector2 & Vector2::operator+=(const Vector2 & rhs)
		{
			// TODO: insert return statement here
			return ;
		}
		Vector2 & Vector2::operator-=(const Vector2 & rhs)
		{
			// TODO: insert return statement here
			return;
		}
		Vector2 & Vector2::operator*=(const Vector2 & rhs)
		{
			// TODO: insert return statement here
			return;
		}
		Vector2 & Vector2::operator/=(const Vector2 & rhs)
		{
			// TODO: insert return statement here
			return;
		}
		Vector2 Vector2::operator+(const Vector2 & rhs) const
		{
			return Vector2();
		}
		Vector2 Vector2::operator-(const Vector2 & rhs) const
		{
			return Vector2();
		}
		Vector2 Vector2::operator*(const Vector2 & rhs) const
		{
			return Vector2();
		}
		Vector2 Vector2::operator/(const Vector2 & rhs) const
		{
			return Vector2();
		}
		bool Vector2::operator==(const Vector2 & rhs) const
		{
			return false;
		}
		bool Vector2::operator!=(const Vector2 & rhs) const
		{
			return false;
		}
		Vector2 operator*(float, const Vector2 &)
		{
			return Vector2();
		}
		Vector2 operator*(const Vector2 &, float)
		{
			return Vector2();
		}
	}
}

