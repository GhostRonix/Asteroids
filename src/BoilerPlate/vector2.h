#pragma once

#ifndef _VECTOR2_H_
#define _VECTOR2_H_

namespace Engine
{
	namespace Math
	{
		class Vector2
		{
		public:

			/*============================
			*	STATIC
			============================*/
			static Vector2 origin;

			/*============================
			*	CTOR
			============================*/
			Vector2();
			Vector2(float aux);
			Vector2(float x, float y);
			/*============================
			*	PUBLIC FUNCTIONS
			============================*/
			//Getters
			//
			float GetX();
			float GetY();
			//Setters
			//
			void SetX();
			void SetY();
			/*--------------------------*/
			float Lenght() const;
			float SquaredLenght() const;
			float Vector2::Normalize(); //Vector2 -> Normalize 

			/*============================
			*	OPERATORS
			============================*/
			Vector2& operator=(const Vector2& rhs);
			Vector2& operator+=(const Vector2& rhs);
			Vector2& operator-=(const Vector2& rhs);
			Vector2& operator*=(const Vector2& rhs);
			Vector2& operator/=(const Vector2& rhs);
			Vector2 operator+(const Vector2& rhs) const;
			Vector2 operator-(const Vector2& rhs) const;
			Vector2 operator*(const Vector2& rhs) const;
			Vector2 operator/(const Vector2& rhs) const;
			bool	operator==(const Vector2& rhs) const;
			bool	operator!=(const Vector2& rhs) const;
			friend  Vector2 operator*(float, const Vector2&);
			friend  Vector2 operator*(const Vector2&, float);

			/*============================
			*	MEMBERS
			============================*/
			float x;
			float y;
			float lenght;
		};
	}
}

#endif // !_VECTOR2_H_