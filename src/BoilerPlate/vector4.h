#pragma once
#ifndef _VECTOR4_HPP_
#define _VECTOR4_HPP_

#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

namespace Engine
{
	namespace Math
	{
		class Vector4
		{
		public:
			/*============================
			*		  STATIC
			============================*/
			static Vector4 origin;

			/*============================
			*			CTOR
			============================*/
			Vector4();
			Vector4(float, float, float, float);
			Vector4(const Vector2&);
			Vector4(const Vector3&);

			/*============================
			*	  PUBLIC FUNCTIONS
			============================*/
			float Lenght() const;
			float SquaredLenght() const;
			float Normalize();

			/*============================
			*		  OPERATORS
			============================*/
			Vector4& operator=(const Vector4&);
			Vector4& operator+=(const Vector4&);
			Vector4& operator-=(const Vector4&);
			Vector4& operator*=(const Vector4&);
			Vector4& operator/=(const Vector4&);
			Vector4 operator+(const Vector4&) const;
			Vector4 operator-(const Vector4&) const;
			Vector4 operator*(const Vector4&) const;
			Vector4 operator/(const Vector4&) const;
			bool	operator==(const Vector4&) const;
			bool	operator!=(const Vector4&) const;
			friend  Vector4 operator*(float, const Vector4&);
			friend  Vector4 operator*(const Vector4&, float);

			/*============================
			*		  MEMBERS
			============================*/
			float m_x;
			float m_y;
			float m_z;
			float m_w;
			float m_lenght;
		};
	}
}
#endif // !_VECTOR4_HPP_