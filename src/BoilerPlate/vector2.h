
#pragma once



#ifndef _VECTOR2_H_
#define _VECTOR2_H_

#include<iostream>

namespace Engine
{
	namespace Math
	{
		class Vector2
		{
		public:

			/*============================
			*		  STATIC
			============================*/
			static Vector2 origin;




			/*============================
			*			CTOR
			============================*/
			Vector2();
			Vector2(float, float);
			Vector2(float);




			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/
			float Lenght() const;
			float SquaredLenght() const;
			Vector2 Normalize();




			/*============================
			*		  OPERATORS
			============================*/
			Vector2& operator=(const Vector2&);
			Vector2& operator+=(const Vector2&);
			Vector2& operator-=(const Vector2&);
			Vector2& operator*=(const Vector2&);
			Vector2& operator/=(const Vector2&);
			Vector2 operator+(const Vector2&) const;
			Vector2 operator-(const Vector2&) const;
			Vector2 operator*(const Vector2&) const;
			Vector2 operator/(const Vector2&) const;
			bool	operator==(const Vector2&) const;
			bool	operator!=(const Vector2&) const;
			friend  Vector2 operator*(float, const Vector2&);
			friend  Vector2 operator*(const Vector2&, float);




			/*============================
			*		  MEMBERS
			============================*/
			float m_x;
			float m_y;
			float m_lenght;
		};
	}
}



#endif // !_VECTOR2_H_